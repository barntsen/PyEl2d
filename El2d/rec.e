# Rec object

# Imports
import libe

class rec :
  int nr # No of receivers
  int [*] rx    # Receiver x-postions
  int [*] ry    # Receiver y-postions 
  int fd        # Snapshot output file descriptor
  int nt        # No of time samples
  float [*,*] p   # Pressure p[i,j] at time sample no j at position no i
  float [*,*] sxx # Stress sxx[i,j] at time sample no j at position no i
  float [*,*] syy # Stress syy[i,j] at time sample no j at position no i
  float [*,*] sxy # Stress sxy[i,j] at time sample no j at position no i
  float [*,*] vx  # Velocity vx[i,j]  at time sample no j at position no i
  float [*,*] vy  # Velocity vy[i,j]  at time sample no j at position no i
  float [*,*] wrk # Work array
  int   resamp    # Resample factor for receivers
  int pit         # Next time sample to be recorded


def struct rec RecNew(int [*] rx, int [*] ry, int nt, int resamp) :                
  # RecNew is the constructor for receiver objects.
  #
  # Arguments:
  #   rx:     Integer array with position of receivers in the 
  #           x-direction (gridpoints)
  #   ry:     Integer array with position of receivers in the 
  #           y-direction (gridpoints)
  #   nt:     No of time samples in the receiver data
  #   resamp: Resample factor relative to the modelling time sample interval
  #
  #  Returns: Receiver object  

  #struct rec Rec

  Rec = new(struct rec)
  Rec.nr = len(rx,0)
  Rec.rx = rx
  Rec.ry = ry
  Rec.nt = nt
  Rec.p = new(float [Rec.nt,Rec.nr])
  Rec.vx = new(float [Rec.nt,Rec.nr])
  Rec.vy = new(float [Rec.nt,Rec.nr])
  Rec.sxx = new(float [Rec.nt,Rec.nr])
  Rec.syy = new(float [Rec.nt,Rec.nr])
  Rec.sxy = new(float [Rec.nt,Rec.nr])
  Rec.resamp = resamp
  Rec.pit = 0
  
  return(Rec)
  

def int RecReceiver(struct rec Rec, int it, float [*,*] field, int dtype): 
                                       
  # RecReceiver records data at the receiver
  #
  # Arguments: 
  #  Rec:    : Receiver object
  #  it      : Current time step
  #  El2d    : Solver object
  #
  # Returns  : OK or ERR
  
  Rec.pit = it/Rec.resamp
  if(Rec.pit > Rec.nt-1):
    return(ERR)

  if(LibeMod(it,Rec.resamp) == 0):
    for (pos=0; pos<Rec.nr; pos=pos+1):  
      ixr=Rec.rx[pos]
      iyr=Rec.ry[pos]
      if(dtype == 1) :
        Rec.p[Rec.pit,pos]   = field[ixr,iyr]
      elif(dtype == 2) :
        Rec.vx[Rec.pit,pos]  = field[ixr,iyr]
      elif(dtype == 3) :
        Rec.vy[Rec.pit,pos]  = field[ixr,iyr]
      elif(dtype == 4) :
        Rec.sxx[Rec.pit,pos] = field[ixr,iyr]
      elif(dtype == 5) :
        Rec.syy[Rec.pit,pos] = field[ixr,iyr]
      elif(dtype == 6) :
        Rec.sxy[Rec.pit,pos] = field[ixr,iyr]
      else :
        return(ERR)

  return(OK)

def int RecCopy(float [*,*] a, float [*,*] b):
  
  # Copy data from a  into b
  #
  # Parameters:
  #   a : Input array
  #   b : Output array
  #
  # Returns: OK

  for i in range(0,len(a,0)):
    for j in range(0,len(a,1)):
      b[i,j]=a[i,j]
    
  return(OK)

def int RecGetrec(struct rec Rec, float [*,*] data, int type):

  # RecGetrec retrieves the recorded data
  #
  # Arguments: 
  #  Rec:    : Receiver object
  #  type    : =0 for  p
  #  type    : =1 for vx velocity particle velocity x-comp.
  #  type    : =2 for vy velocity particle velocity y-comp.
  #  type    : =3 for sxx stress 
  #  type    : =4 for syy stress 
  #  type    : =5 for sxy stress 
  #  type    :  p in all other cases
 
  if(type == 1):
    RecCopy(Rec.p,data)
  elif(type == 2):
    RecCopy(Rec.vx,data)
  elif(type == 3):
    RecCopy(Rec.vy,data)
  elif(type == 4):
    RecCopy(Rec.sxx,data)
  elif(type == 5):
    RecCopy(Rec.syy,data)
  elif(type == 6):
    RecCopy(Rec.sxy,data)
  else :
    RecCopy(Rec.p,data)

  return(OK)
