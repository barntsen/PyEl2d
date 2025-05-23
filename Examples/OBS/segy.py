""" segy contains classes and functions for reading segy and su files 
      
  Classes 
    segyhd: class for holding segy/su header words
       
  Functions
    readtexthd  : Read segy text header (3200 bytes)
    readbhd     : Read segy binary header (400 bytes )
    writetexthd : Write segy text hedader
    writebhd    : Write segy binary header
    getntr      : Get no of traces in a file
    readtr      : Read a single trace
    readtrs     : Read a number of traces
    writetr     : Write a single trace
    writetrs    : Write a number of traces
    ibm2ieee    : Convert IBM float to ieee
    ieee2ibm    : Convert ieee to IBM float
"""
import sys
import struct
import numpy as np

class segyhd :
  """ Class for holding the trace header 
      
    The fields are defined according to the SEGY standard
    see "SEG Y rev Data Exchange Format" Release 1.0 May 2002
    Society Of Exploration Geophysicists 
      

  """

  def __init__(self, mode) :
    """ Create new segyhd object 
    
        Parameters
          mode:    = "su" or "segy"

        Return
          The mode parameter sets the format filed to either
          "su" or "segy". If mode is anything else None is
          is returned.
    """    

      
    if mode == 'segy' :
      self.format = 'segy'
      self.byteorder = 'big'
    elif mode == 'su' :
      self.format = 'su'
      self.byteorder = 'little' 
    else :
      return None

    self.fbytes = 4      # no of bytes in float
    self.nh     = 240    # header length
    self.ns     = 0      # trace length

    #Initialize segy fields
    self.tracl = 0       # Trace seq no within line
    self.tracr = 0       # Trace seq no within file
    self.fldr  = 0       # Field record no
    self.tracf = 0       # Trace no 
    self.ep    = 0       # Source no
    self.cdp   = 0       # Cdp no
    self.cdpt  = 0       # Cdp trace no
    self.trid  = 0       # Trace id (see SEGY standard for definition)
    self.nvs   = 0       # No of vertically stacked traces
    self.nhs   = 0       # No of horizontally stacked traces
    self.duse  = 0       # Data use: 1: production 2: test
    self.offset= 0       # Source receiver distance
    self.gelev = 0       # Receiver group elevation
    self.selev = 0       # Surface elevation at source
    self.sdepth= 0       # Source depth
    self.gdel  = 0       # Datum elevation at receiver
    self.sdel  = 0       # Datum elevation at source
    self.swdep = 0       # Water depth at source
    self.gwdep = 0       # Water depth at receiver
    self.scalel= 0       # Scalar for depths and elevation pos: multiply 
                         # neg : divide
    self.scalco= 0       # Scalar for coordinates. Pos: Multiply Neg: Divide
    self.sx    = 0       # Source x-coordinate
    self.sy    = 0       # Source y-coordinate
    self.gx    = 0       # Receiver x-coordinate
    self.gy    = 0       # Receiver y-coordinate
    self.counit= 0       # Coordinate units:
                         #   1 : Meters
                         #   2 : Seconds of arc
                         #   3 : Decimal degrees
                         #   4 : Degrees, minutes, seconds
    self.wevel = 0       # Weathering velocity     
    self.swevel= 0       # Subweathering velocity
    self.sut   = 0       # Uphole source time
    self.gut   = 0       # Uphole receiver time
    self.sstat = 0       # Source statics
    self.gstat = 0       # Receiver statics
    self.tstat = 0       # Total statics
    self.laga  = 0       # Lag time A
    self.lagb  = 0       # Lag time B
    self.delrt = 0       # Delay recording time
    self.muts  = 0       # Mute time start
    self.mute  = 0       # Mute time end
    self.ns    = 0       # No of samples in this trace
    self.dt    = 0       # Sampling time interval (micro secs)
    self.gain  = 0       # Gain type of field instruments
    self.igc   = 0       # Instrument gain constant (dB)
    self.igi   = 0       # Instrument initial gain (dB)
    self.corr  = 0       # Correlated: 2: yes 1: no
    self.sfs   = 0       # Sweep start frequency
    self.sfe   = 0       # Sweep end frequency
    self.slen  = 0       # Sweep length (milliseconds)
    self.styp  = 0       # Sweep type 1: linear 2: parabolic 3: exp 4: other
    self.stas  = 0       # Sweep trace taper length at start
    self.stae  = 0       # Sweep trace taper length at end
    self.tatyp = 0       # Taper type: 1: linear, 2: cos^2 3: other
    self.afilf = 0       # Alias filter frequency (Hz) 
    self.afils = 0       # Alias filter slope (db/octave)
    self.nofilf= 0       # Notch filter frequency (Hz)
    self.nofils= 0       # Notch filter slope (dB/octave)
    self.lcf   = 0       # Low cut frequency (Hz)
    self.hcf   = 0       # High cut frequency (Hz)
    self.lcs   = 0       # Low cut slope (dB/octave)
    self.hcs   = 0       # High cut slope (dB/octave)
    self.year  = 0       # Year recorded
    self.day   = 0       # Day recorded
    self.hour  = 0       # Hour recorded
    self.minute= 0       # Minute recorded 
    self.sec   = 0       # Second recorded
    self.timbas= 0       # Time basis : 1 :local 2 : GMT 3: Other 4: UTC
    self.trwf  = 0       # Trace weighting factor
    self.grnors= 0       # Geophone group number of roll switch position one
    self.grnorf= 0       # Geophone group no of trace one
    self.grnlof= 0       # Geophone group no of last trace
    self.gaps  = 0       # Gap size
    self.otrav = 0       # Over travel
    
    #SU header words
    self.d1    = 0.0
    self.f1    = 0.0
    self.d2    = 0.0
    self.f2    = 0.0
    self.ungpow= 0.0
    self.unscale=0.0
    self.mark   = 0

class segybhd :
  """ Class for holding the binary header header 
      
    The fields are defined according to the SEGY standard
    see "SEG Y rev Data Exchange Format" Release 1.0 May 2002
    Society Of Exploration Geophysicists 
      

  """

  def __init__(self) :
    """ Create new segybhd object 
    """    

    #Initialize segy fields
    self.byteorder = 'big'
    self.nbhd = 400
    self.jid = 0       #Job id   bytes: 3201-3204
    self.lno = 0       #Line no  bytes: 3205-3208
    self.rno = 0       #Reel no  bytes: 3209-3212
    self.ntr = 0       #No of traces per ensemble     bytes: 3213-3214
    self.naux = 0      #No of aux traces per ensemble bytes: 3215-3216
    self.dt   = 0      #Sample interval in microsecs  bytes: 3217-3218
    self.dto  = 0      #Sample interval in microsecs  
                       #for original field recording  bytes: 3219-3220
    self.ns   = 0      #No of samples per trace       bytes: 3221-3222
    self.nso  = 0      #No of samples per trace       bytes: 3223-3224
                       #for original field record     
    self.fmt  = 0      # Data sample format           bytes: 3225-3226
                       # 1 = 4-byte IBM float
                       # 2 = 4-byte two-complement int
                       # 3 = 2-byte two-complement int
                       # 4 = 4-byte IEEE float
                       # 8 = 1-byte two-complement int

def readtexthd(fp) : 
  """ readtexthd reads the 3200 byte text header in segy files 
    
    Parameters
      fp    : File object

    Return
      texthd : text header (3200 bytes)
  """

  textbytes = 3200
  texthd = fp.read(3200) 
  if texthd == None :
    return None

  return texthd

def writetexthd(fp, texthd) : 
  """ writetexthd writes the 3200 byte text header on a segy file
    
    Parameters
      fp     : File object
      texthd : 3200 byte text array 

    Return
      True : On sucesss
      None : Failure
  """

  status = fp.write(texthd) 
  if status == None :
    return None

  return True

def readbhd(fp, bhd) : 
  """ readbhd reads the binary header
    
    Parameters
      fp    : File object
      bhd   : Binary header object
      
    Return
      bhd   : Binary header
  """

  buff = fp.read(bhd.nbhd)
  if buff == None :
    return None

  #Fill in header fields
  bhd.jid = int.from_bytes(buff[0:4], byteorder=bhd.byteorder)
  bhd.lno = int.from_bytes(buff[4:8], byteorder=bhd.byteorder)
  bhd.rno = int.from_bytes(buff[8:12],byteorder=bhd.byteorder)
  bhd.ntr = int.from_bytes(buff[12:14], byteorder=bhd.byteorder)  
  bhd.naux = int.from_bytes(buff[14:16], byteorder=bhd.byteorder)  
  bhd.dt   = int.from_bytes(buff[16:18], byteorder=bhd.byteorder)  
  bhd.dto  = int.from_bytes(buff[18:20], byteorder=bhd.byteorder)       
  bhd.ns   = int.from_bytes(buff[20:22], byteorder=bhd.byteorder)       
  bhd.nso  = int.from_bytes(buff[22:24], byteorder=bhd.byteorder)       
  bhd.fmt  = int.from_bytes(buff[24:26], byteorder=bhd.byteorder)            
                     
  return bhd

def writebh(fp, bhd) : 
  """ writebhd writes the binary header
    
    Parameters
      fp    : File object
      bhd   : Binary header object
      
    Return
      True  : Success
      None  : Failure
  """

  buff[0:4] = bhd.jid.to_bytes(4, byteorder=bhd.byteorder)
  buff[4:8] = bhd.lno.to_bytes(4, byteorder=bhd.byteorder)
  buff[8:12] = bhd.rno.to_bytes(4, byteorder=bhd.byteorder)
  buff[12:14] = bhd.ntr.to_bytes(2, byteorder=bhd.byteorder)
  buff[14:16] = bhd.naux.to_bytes(2, byteorder=bhd.byteorder)
  buff[16:18] = bhd.dt.to_bytes(2, byteorder=bhd.byteorder)
  buff[18:20] = bhd.dto.to_bytes(2, byteorder=bhd.byteorder)
  buff[20:22] = bhd.ns.to_bytes(2, byteorder=bhd.byteorder)
  buff[22:24] = bhd.nso.to_bytes(2, byteorder=bhd.byteorder)
  buff[22:24] = bhd.fmt.to_bytes(2, byteorder=bhd.byteorder)

  buff = fp.write(buff)
  if buff == None :
    return None

  return True

def readtr(fp,trhd) :
  """ Read a single trace in su or segy format 
      
      Parameters
        fp   :  File object opened in binary mode
        trhd : segyhd object

      Return
        trhd,traces : Tuple containg a traceheader object
                      and a 1D numpy array containg the data 
                      At end of file None,None is returned.
        
        Repated call to readtr will read the next trace. 
"""

  #Read the trace header
  head = fp.read(trhd.nh)

  if not head :
    return None, None

  #Get the number of bytes of data
  ns       = int.from_bytes(head[114:116], byteorder=trhd.byteorder)
  nbytes   = ns*trhd.fbytes

  #Read the data
  rtrace = fp.read(nbytes)
  if(rtrace == None) :
    return None,None

  #Extract either su or segy data
  if trhd.format == "su" :
    fstr = str(ns)+'f'
    data=struct.unpack(fstr,rtrace)
    trace = np.array(data)

  if trhd.format == "segy" :
    fstr = '>'+str(ns)+'I'
    data=struct.unpack(fstr,rtrace)
    trace = np.array(data)
    for i in range(0,len(data)) :
      trace[i]=ibm2ieee(data[i])

  #Fill in header info
  trhd.tracl = int.from_bytes(head[0:4],     byteorder=trhd.byteorder) 
  trhd.tracr = int.from_bytes(head[4:8],     byteorder=trhd.byteorder) 
  trhd.fldr  = int.from_bytes(head[8:12],    byteorder=trhd.byteorder) 
  trhd.tracf = int.from_bytes(head[12:16],   byteorder=trhd.byteorder) 
  trhd.ep    = int.from_bytes(head[16:20],   byteorder=trhd.byteorder) 
  trhd.cdp   = int.from_bytes(head[20:24],   byteorder=trhd.byteorder) 
  trhd.cdpt  = int.from_bytes(head[24:28],   byteorder=trhd.byteorder) 
  trhd.trid  = int.from_bytes(head[28:30],   byteorder=trhd.byteorder) 
  trhd.nvs   = int.from_bytes(head[30:32],   byteorder=trhd.byteorder) 
  trhd.nhs   = int.from_bytes(head[32:34],   byteorder=trhd.byteorder) 
  trhd.duse  = int.from_bytes(head[34:36],   byteorder=trhd.byteorder) 
  trhd.offset= int.from_bytes(head[36:40],   byteorder=trhd.byteorder) 
  trhd.gelev = int.from_bytes(head[40:44],   byteorder=trhd.byteorder) 
  trhd.selev = int.from_bytes(head[44:48],   byteorder=trhd.byteorder) 
  trhd.sdepth= int.from_bytes(head[48:52],   byteorder=trhd.byteorder) 
  trhd.gdel  = int.from_bytes(head[52:56],   byteorder=trhd.byteorder) 
  trhd.sdel  = int.from_bytes(head[56:60],   byteorder=trhd.byteorder) 
  trhd.swdep = int.from_bytes(head[60:64],   byteorder=trhd.byteorder) 
  trhd.gwdep = int.from_bytes(head[64:68],   byteorder=trhd.byteorder) 
  trhd.scalel= int.from_bytes(head[68:70],   byteorder=trhd.byteorder) 
  trhd.scalco= int.from_bytes(head[70:72],   byteorder=trhd.byteorder) 
  trhd.sx    = int.from_bytes(head[72:76],   byteorder=trhd.byteorder) 
  trhd.sy    = int.from_bytes(head[76:80],   byteorder=trhd.byteorder) 
  trhd.gx    = int.from_bytes(head[80:84],   byteorder=trhd.byteorder) 
  trhd.gy    = int.from_bytes(head[84:88],   byteorder=trhd.byteorder) 
  trhd.counit= int.from_bytes(head[88:90],   byteorder=trhd.byteorder) 
  trhd.wevel = int.from_bytes(head[90:92],   byteorder=trhd.byteorder) 
  trhd.swevel= int.from_bytes(head[92:94],   byteorder=trhd.byteorder) 
  trhd.sut   = int.from_bytes(head[94:96],   byteorder=trhd.byteorder) 
  trhd.gut   = int.from_bytes(head[96:98],   byteorder=trhd.byteorder) 
  trhd.sstat = int.from_bytes(head[98:100],  byteorder=trhd.byteorder) 
  trhd.gstat = int.from_bytes(head[100:102], byteorder=trhd.byteorder) 
  trhd.tstat = int.from_bytes(head[102:104], byteorder=trhd.byteorder) 
  trhd.laga  = int.from_bytes(head[104:106], byteorder=trhd.byteorder) 
  trhd.lagb  = int.from_bytes(head[106:108], byteorder=trhd.byteorder) 
  trhd.delrt = int.from_bytes(head[108:110], byteorder=trhd.byteorder) 
  trhd.muts  = int.from_bytes(head[110:112], byteorder=trhd.byteorder) 
  trhd.mute  = int.from_bytes(head[112:114], byteorder=trhd.byteorder) 
  trhd.ns    = int.from_bytes(head[114:116], byteorder=trhd.byteorder)
  trhd.dt    = int.from_bytes(head[116:118], byteorder=trhd.byteorder)
  trhd.gain  = int.from_bytes(head[118:120], byteorder=trhd.byteorder)
  trhd.igc   = int.from_bytes(head[120:122], byteorder=trhd.byteorder)
  trhd.igi   = int.from_bytes(head[122:124], byteorder=trhd.byteorder)
  trhd.corr  = int.from_bytes(head[124:126], byteorder=trhd.byteorder)
  trhd.sfs   = int.from_bytes(head[126:128], byteorder=trhd.byteorder)
  trhd.sfe   = int.from_bytes(head[128:130], byteorder=trhd.byteorder)
  trhd.slen  = int.from_bytes(head[130:132], byteorder=trhd.byteorder)
  trhd.styp  = int.from_bytes(head[132:134], byteorder=trhd.byteorder)
  trhd.stas  = int.from_bytes(head[134:136], byteorder=trhd.byteorder)
  trhd.stae  = int.from_bytes(head[136:138], byteorder=trhd.byteorder)
  trhd.tatyp = int.from_bytes(head[138:140], byteorder=trhd.byteorder)
  trhd.afilf = int.from_bytes(head[140:142], byteorder=trhd.byteorder)
  trhd.afils = int.from_bytes(head[142:144], byteorder=trhd.byteorder)
  trhd.nofilf= int.from_bytes(head[144:146], byteorder=trhd.byteorder)
  trhd.nofils= int.from_bytes(head[146:148], byteorder=trhd.byteorder)
  trhd.lcf   = int.from_bytes(head[148:150], byteorder=trhd.byteorder)
  trhd.hcf   = int.from_bytes(head[150:152], byteorder=trhd.byteorder)
  trhd.lcs   = int.from_bytes(head[152:154], byteorder=trhd.byteorder)
  trhd.hcs   = int.from_bytes(head[154:156], byteorder=trhd.byteorder)
  trhd.year  = int.from_bytes(head[156:158], byteorder=trhd.byteorder)
  trhd.day   = int.from_bytes(head[158:160], byteorder=trhd.byteorder)
  trhd.hour  = int.from_bytes(head[160:162], byteorder=trhd.byteorder)
  trhd.minute= int.from_bytes(head[162:164], byteorder=trhd.byteorder)
  trhd.sec   = int.from_bytes(head[164:166], byteorder=trhd.byteorder)
  trhd.timbas= int.from_bytes(head[166:168], byteorder=trhd.byteorder)
  trhd.trwf  = int.from_bytes(head[168:170], byteorder=trhd.byteorder)
  trhd.grnors= int.from_bytes(head[170:172], byteorder=trhd.byteorder)
  trhd.grnofr= int.from_bytes(head[172:174], byteorder=trhd.byteorder)
  trhd.grnlof= int.from_bytes(head[174:176], byteorder=trhd.byteorder)
  trhd.gaps  = int.from_bytes(head[176:178], byteorder=trhd.byteorder)
  trhd.otrav = int.from_bytes(head[178:180], byteorder=trhd.byteorder)

  #SU header words
  if trhd.format == "su" :
    trhd.d1    = struct.unpack('f',head[180:184])[0]
    trhd.f1    = struct.unpack('f',head[184:188])[0]
    trhd.d2    = struct.unpack('f',head[188:192])[0]
    trhd.f2    = struct.unpack('f',head[192:196])[0]
    trhd.ungpow=struct.unpack('f',head[196:200])[0]
    trhd.unscale=struct.unpack('f',head[200:204])[0]
    trhd.mark = int.from_bytes(head[204:206], byteorder=trhd.byteorder)

  return(trhd,trace)


def ibm2ieee(ibm):
  """
  Converts an IBM floating point number into IEEE format.
  :param: ibm - 32 bit unsigned integer: unpack('>L', f.read(4))
  """
  if ibm == 0:
      return 0.0
  sign = ibm >> 31 & 0x01
  exponent = ibm >> 24 & 0x7f
  mantissa = (ibm & 0x00ffffff) / float(pow(2, 24))
  return (1 - 2 * sign) * mantissa * pow(16, exponent - 64)

def getntr(fp,ns) :
  """Find the number of traces in a file 

     Parameters
       fp : File object
       ns : No of samples in a trace

     Return
       The return value is the number of
       traces in the file.
       The number of traces is computed by
       the size of the file divided by
       the size of each trace.
   """
     
  #save current position
  pos=fp.tell()
  #Set file position at end of file
  fp.seek(0,2)  
  #Get file size 
  n=fp.tell()
  #Compute the number of traces
  ntr = n/(4*ns+240) 
  #Reposition to initial state
  fp.seek(pos)
  return int(ntr)
    
def readtrs(fp, ntr, mode) :
  """ readtrs loads data in su or segy format from a file
        
      Parameters
        fp    : File object opened in binary mode
        ntr   : The number of traces to read. 
                If ntr == -1 All traces found in the file are read
        mode  : = "su" or "segy" data formats
        
      Return
        Tuple containg a list of trace header objects and
         a 2D numpy array.
         In case of read error or nonexisting mode a None,None 
         tuple is returned.
  """
  trhds = []
  trhd = segyhd(mode)
  traces=None

  if(ntr == -1 ) :
    trhd,trace = readtr(fp, trhd)
    ntr=getntr(fp,trhd.ns)
    fp.seek(0)

  for i in range(0,ntr):
    trhd = segyhd(mode)
    if trhd == None :
      return trhds,traces
    trhd,trace = readtr(fp,trhd) 
    if(trhd == None) :
      return trhds,traces
    trhds.append(trhd)
    if(i == 0) :
      traces = np.zeros([ntr,trhd.ns])
      traces[0,:] = trace[:]
    else :
      traces[i,:] = trace[:] 
  return trhds,traces
        
    
def writetr(fp,trhd,trace) :
  """ Write  a single trace in su or segy format 
      
      Parameters
        fp   :  File object opened in binary mode
        trhd :  Segyhd object
        trace : Numpy data array

      Return  : True if no errors, None if errors occured.
"""
  #Fill in header info
  head = bytearray(240)
  head[0:4]  = trhd.tracl.to_bytes( 4, byteorder=trhd.byteorder) 
  head[4:8]  = trhd.tracr.to_bytes( 4, byteorder=trhd.byteorder) 
  head[8:12] = trhd.fldr.to_bytes( 4, byteorder=trhd.byteorder)  
  head[12:16]= trhd.tracf.to_bytes(4, byteorder=trhd.byteorder)  
  head[16:20]= trhd.ep.to_bytes   (4, byteorder=trhd.byteorder)  
  head[20:24]= trhd.cdp.to_bytes  (4, byteorder=trhd.byteorder)  
  head[24:28]= trhd.cdpt.to_bytes (4, byteorder=trhd.byteorder)  
  head[28:30]= trhd.cdpt.to_bytes (2, byteorder=trhd.byteorder)  
  head[30:32]= trhd.nvs.to_bytes  (2, byteorder=trhd.byteorder)  
  head[32:34]= trhd.nhs.to_bytes  (2, byteorder=trhd.byteorder)   
  head[34:36]= trhd.duse.to_bytes (2, byteorder=trhd.byteorder)   
  head[36:40]= trhd.offset.to_bytes (4, byteorder=trhd.byteorder)   
  head[40:44]= trhd.gelev.to_bytes  (4, byteorder=trhd.byteorder)   
  head[44:48]= trhd.selev.to_bytes  (4, byteorder=trhd.byteorder)   
  head[48:52]= trhd.sdepth.to_bytes (4, byteorder=trhd.byteorder)   
  head[52:56]= trhd.gdel.to_bytes   (4, byteorder=trhd.byteorder)   
  head[56:60]= trhd.sdel.to_bytes   (4, byteorder=trhd.byteorder)   
  head[60:64]= trhd.swdep.to_bytes  (4, byteorder=trhd.byteorder)   
  head[64:68]= trhd.gwdep.to_bytes  (4, byteorder=trhd.byteorder)   
  head[68:70]= trhd.scalel.to_bytes  (2, byteorder=trhd.byteorder)   
  head[70:72]= trhd.scalco.to_bytes  (2, byteorder=trhd.byteorder)   
  head[72:76]= trhd.sx.to_bytes      (4, byteorder=trhd.byteorder)   
  head[76:80]= trhd.sy.to_bytes      (4, byteorder=trhd.byteorder)   
  head[80:84]= trhd.gx.to_bytes      (4, byteorder=trhd.byteorder)   
  head[84:88]= trhd.gy.to_bytes      (4, byteorder=trhd.byteorder)   
  head[88:90]= trhd.counit.to_bytes  (2, byteorder=trhd.byteorder)   
  head[90:92]= trhd.wevel.to_bytes    (2, byteorder=trhd.byteorder)   
  head[92:94]= trhd.swevel.to_bytes  (2, byteorder=trhd.byteorder)   
  head[94:96]= trhd.sut.to_bytes     (2, byteorder=trhd.byteorder)   
  head[96:98]= trhd.gut.to_bytes     (2, byteorder=trhd.byteorder)   
  head[98:100] = trhd.sstat.to_bytes (2, byteorder=trhd.byteorder)   
  head[100:102]= trhd.gstat.to_bytes (2, byteorder=trhd.byteorder)   
  head[102:104]= trhd.tstat.to_bytes (2, byteorder=trhd.byteorder)   
  head[104:106]= trhd.laga.to_bytes  (2, byteorder=trhd.byteorder)   
  head[106:108]= trhd.lagb.to_bytes  (2, byteorder=trhd.byteorder)   
  head[108:110]= trhd.delrt.to_bytes (2, byteorder=trhd.byteorder)   
  head[110:112]= trhd.muts.to_bytes  (2, byteorder=trhd.byteorder)   
  head[112:114]= trhd.mute.to_bytes  (2, byteorder=trhd.byteorder)   
  head[114:116]= trhd.ns.to_bytes    (2, byteorder=trhd.byteorder)   
  head[116:118]= trhd.dt.to_bytes    (2, byteorder=trhd.byteorder)   
  head[118:120]= trhd.gain.to_bytes  (2, byteorder=trhd.byteorder)   
  head[120:122]= trhd.igc.to_bytes  (2, byteorder=trhd.byteorder)   
  head[122:124]= trhd.igi.to_bytes  (2, byteorder=trhd.byteorder)   
  head[124:126]= trhd.corr.to_bytes (2, byteorder=trhd.byteorder)   
  head[126:128]= trhd.sfs.to_bytes  (2, byteorder=trhd.byteorder)   
  head[128:130]= trhd.sfe.to_bytes  (2, byteorder=trhd.byteorder)   
  head[130:132]= trhd.slen.to_bytes  (2, byteorder=trhd.byteorder)   
  head[132:134]= trhd.styp.to_bytes  (2, byteorder=trhd.byteorder)   
  head[134:136]= trhd.stas.to_bytes  (2, byteorder=trhd.byteorder)   
  head[136:138]= trhd.stae.to_bytes  (2, byteorder=trhd.byteorder)   
  head[138:140]= trhd.tatyp.to_bytes  (2, byteorder=trhd.byteorder)   
  head[140:142]= trhd.afilf.to_bytes  (2, byteorder=trhd.byteorder)   
  head[142:144]= trhd.afils.to_bytes  (2, byteorder=trhd.byteorder)   
  head[144:146]= trhd.nofilf.to_bytes (2, byteorder=trhd.byteorder)   
  head[146:148]= trhd.nofils.to_bytes (2, byteorder=trhd.byteorder)   
  head[148:150]= trhd.lcf.to_bytes (2, byteorder=trhd.byteorder)   
  head[150:152]= trhd.hcf.to_bytes (2, byteorder=trhd.byteorder)   
  head[152:154]= trhd.lcs.to_bytes (2, byteorder=trhd.byteorder)   
  head[154:156]= trhd.hcs.to_bytes (2, byteorder=trhd.byteorder)   
  head[156:158]= trhd.year.to_bytes(2, byteorder=trhd.byteorder)   
  head[158:160]= trhd.day.to_bytes (2, byteorder=trhd.byteorder)   
  head[160:162]= trhd.hour.to_bytes(2, byteorder=trhd.byteorder)   
  head[162:164]= trhd.minute.to_bytes(2, byteorder=trhd.byteorder)   
  head[164:166]= trhd.sec.to_bytes(2, byteorder=trhd.byteorder)   
  head[166:168]= trhd.timbas.to_bytes(2, byteorder=trhd.byteorder)   
  head[168:170]= trhd.trwf.to_bytes(2, byteorder=trhd.byteorder)   
  head[170:172]= trhd.grnors.to_bytes(2, byteorder=trhd.byteorder)   
  head[172:174]= trhd.grnorf.to_bytes(2, byteorder=trhd.byteorder)   
  head[174:176]= trhd.grnlof.to_bytes(2, byteorder=trhd.byteorder)   
  head[176:178]= trhd.gaps.to_bytes(2, byteorder=trhd.byteorder)   
  head[178:180]= trhd.otrav.to_bytes(2, byteorder=trhd.byteorder)   


  #SU header words
  if trhd.format == "su" :
    head[180:184] = struct.pack("f", trhd.f1)
    head[184:188] = struct.pack("f", trhd.d1)
    head[188:192] = struct.pack("f", trhd.f2)
    head[192:196] = struct.pack("f", trhd.d2)
    head[196:200] = struct.pack("f", trhd.ungpow)
    head[200:204] = struct.pack("f", trhd.unscale)
    head[204:206] = trhd.mark.to_bytes(2,byteorder=trhd.byteorder)

  #Write the trace header
  head = fp.write(head)
  if not head :
    return None

  #Get the number of bytes of data
  ns       = trhd.ns
  nbytes   = ns*trhd.fbytes

  #Pack either su or segy data
  if trhd.format == "su" :
    fstr = str(ns)+'f'
    tmp = trace.astype(np.float32)
    data = tmp.tobytes()

  if trhd.format == "segy" :
    fstr = str(ns)+'L'
    data=ibm2ieee(trace)
    data=trace.tobytes()

  #Write the data
  rtrace = fp.write(data)
  if(rtrace == None) :
    return None

  return(True)

    
def writetrs(fp, trhdrs, traces, mode) :
  """ writetrs writes data in su or segy format to a file
        
      Parameters
        fp     : File object opened in binary mode
        trhdrs : List of header objects
        traces : Traces to write (numpy array)
        mode   : = "su" or "segy" data formats
        
      Return
         In case of write error or nonexisting mode a None 
         value is returned. Otherwise True is returned.
  """

  i=0
  for  trhd in trhdrs :
    rval = writetr(fp,trhd, traces[i]); 
    i=i+1
  return rval
        

def ieee2ibm(ieee):
    ieee = ieee.astype(np.float32)
    expmask = 0x7f800000
    signmask = 0x80000000
    mantmask = 0x7fffff
    asint = ieee.view('i4')
    signbit = asint & signmask
    exponent = ((asint & expmask) >> 23) - 127
    # The IBM 7-bit exponent is to the base 16 and the mantissa is presumed to
    # be entirely to the right of the radix point. In contrast, the IEEE
    # exponent is to the base 2 and there is an assumed 1-bit to the left of the
    # radix point.
    exp16 = ((exponent+1) // 4)
    exp_remainder = (exponent+1) % 4
    exp16 += exp_remainder != 0
    downshift = np.where(exp_remainder, 4-exp_remainder, 0)
    ibm_exponent = np.clip(exp16 + 64, 0, 127)
    expbits = ibm_exponent << 24
    # Add the implicit initial 1-bit to the 23-bit IEEE mantissa to get the
    # 24-bit IBM mantissa. Downshift it by the remainder from the exponent's
    # division by 4. It is allowed to have up to 3 leading 0s.
    ibm_mantissa = ((asint & mantmask) | 0x800000) >> downshift
    # Special-case 0.0
    ibm_mantissa = np.where(ieee, ibm_mantissa, 0)
    expbits = np.where(ieee, expbits, 0)

    return signbit | expbits | ibm_mantissa
