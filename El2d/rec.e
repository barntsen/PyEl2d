# Rec object

# Imports
import model
import libe

class rec :
  int nr  # No of receivers
  int [*] rx     # Receiver x-postions
  int [*] ry     # Receiver y-postions 
  int fd         # Snapshot output file descriptor
  int nt         # No of time samples
  float [*,*] p    # Pressure p[i,j] at time sample no j at position no i
  float [*,*] sxx  # Stress sxx[i,j] at time sample no j at position no i
  float [*,*] syy  # Stress syy[i,j] at time sample no j at position no i
  float [*,*] sxy  # Stress sxy[i,j] at time sample no j at position no i
  float [*,*] exx  # Strain [i,j]    at time sample no j at position no i
  float [*,*] vx   # Velocity vx[i,j]  at time sample no j at position no i
  float [*,*] vy   # Velocity vy[i,j]  at time sample no j at position no i
  float [*,*] wrk  # Work array
  int   resamp     # Resample factor for receivers
  int pit          # Next time sample to be recorded


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
  Rec.exx = new(float [Rec.nt,Rec.nr]) 
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
  
  if(Rec.pit > Rec.nt-1):
    return(ERR) 

  if(LibeMod(it,Rec.resamp) == 0):
    if(dtype == -1) :
      Rec.pit=Rec.pit+1
      return(OK)

    pos=0
    for pos in range (0,Rec.nr) :  
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
      elif(dtype == 7) :
        Rec.exx[Rec.pit,pos] = field[ixr,iyr] 
      else :
        return(ERR)

  return(OK) 


def float [*,*] RecGetrec(struct rec Rec, int data):

  # RecGetrec retrieves the recorded data
  #
  # Arguments: 
  #  Rec:    : Receiver object
  #  data    : =1 for  p
  #  data    : =2 for vx velocity particle velocity x-comp.
  #  data    : =3 for vy velocity particle velocity y-comp.
  #  data    : =4 for sxx stress 
  #  data    : =5 for syy stress 
  #  data    : =6 for sxy stress 
  #  data    : =7 for exx strain
  #  data    :  p in all other cases
 
  if(data == 1):
    return(Rec.p)
  elif(data == 2):
    return(Rec.vx)
  elif(data == 3):
    return(Rec.vy)
  elif(data == 4):
    return(Rec.sxx)
  elif(data == 5):
    return(Rec.syy)
  elif(data == 6):
    return(Rec.sxy)
  elif(data == 7):
    return(Rec.exx)
  else :
    return(Rec.p)
