import numpy as np
#------------------------------
#Set all modeling parameters
#------------------------------
pi      = 3.14159
nx      = 251       #No of grdipoints in x-direction
ny      = 251       #No of gridpoints in y-direction
dx      = 5.0       #Grid interval
dt      = 0.0005;   #Time sampling interval
nt      = 2001      #No of time steps
t0      = 0.1       #Pulse delay
f0      = 25.0      #Dominant frequency 
w0      = 2.0*pi*f0 #Dominant angular frequency
resamp  = 1         #Resampling factor (relative to no of timesteps ) for data
sresamp = 10        #Resampling factor for snapshots
nb      = 35        #No of PML boundary points
l       = 6         #Length of differentiator
fvp     = "vp.bin"  # Vp file name
fvs     = "vs.bin"  # Vp file name
frho    = "rho.bin" # Rho file name
fqp      = "qp.bin"   # Q file name
fqs      = "qs.bin"   # Q file name
fql      = "ql.bin"   # Q file name
fqm      = "qm.bin"   # Q file name
fsrc    = "src.bin" # Wavelet file name
fsnp    = "snp.bin" # Snapshot file name
press   = "p.bin"
#Q-models
MAXWELL = 1
SLS     = 2
CPML    = 4
rheol   = SLS
#Source position
sx       = np.zeros(1)
sy       = np.zeros(1)
sx[0]    = nx/2
sy[0]    = ny/2

#Receiver positions
nr = 201  
rx=np.zeros((nr))
ry=np.zeros((nr))
for i in range(0,nr):
  rx[i] = i
  ry[i] = 50

#Snapshost
snpflags = np.zeros(4)
snpflags[0] = 1
