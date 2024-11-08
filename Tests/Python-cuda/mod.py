''' Par is a module for setting parameters for modeling using the pyel2d
    library. The meaning of parameters are described 
    in the inline comments. All units are si (m/s,kg/m^3 etc..)
    File formats are pure binary, where the x-axis is the fastest index.
    (i.e. Models are stored as x-vectors.)
    Data (vx,vy,sigmaxx,sigmayy) are dumped on files vx.bin,vy.bin,sxx.bin
    and syy.bin
    The y-axis points downwards.

'''

import numpy as np

pi      = 3.14159  #Constant pi
nx      = 251      #No of grdipoints in x-direction
ny      = 251      #No of gridpoints in y-direction
dx      = 5.0      #Grid interval
dt      = 0.0005    #Time sampling interval
nt      = 2001      #No of time steps
f0      = 25.0        #Q-model peak frequency
w0      = 2.0*pi*f0  #Q-model peak angular frequency
resamp  = 1          #Resampling factor (relative to no of timesteps) for data
sresamp = 10         #Resampling factor (relative to timesteps)for snapshots
nb      = 35         #No of PML boundary points
l       = 6          #Length of differentiator
freesurface = 1      # =1: Use freesurface =0: No free surface
fvp     = "vp.bin"   #Vp file name
fvs     = "vs.bin"   #Vp file name
frho    = "rho.bin"  #Rho file name
fsrc    = "src.bin"  # Wavelet file name

#Q-models
MAXWELL = 1          #Not implemented
SLS     = 2          #Standard linear solid
CPML    = 4          #Not implemented
rheol   = SLS        #Rhology for attenuation and boundary condition
fqp      = ""        # Qp file name (default Qp=100000)
fqs      = ""        # Qs file name (default Qs=100000)
fql      = ""        # Ql file name (default Ql=100000)
fqm      = ""        # Qm file name (default Qm=100000)

#Source position
sx       = np.zeros(1, dtype=np.int32) #Source x-position
sy       = np.zeros(1, dtype=np.int32) #Source y-position
sx[0]    = nx/2 
sy[0]    = ny/2

#Source flags 
srcflags = np.zeros(4, dtype=np.int32)
#srcflags[0] = 1   #Set diagonal stress source
#srcflags[1] = 1   #Set diagonal stress source
srcflags[2] = 1    #Set horisontal force source
#srcflags[3] = 1   #Set vertical force source

#Receiver positions
nr = nx
rx=np.zeros((nr), dtype=np.int32)
ry=np.zeros((nr), dtype=np.int32)
for i in range(0,nr):
  rx[i] = i
  ry[i] = nb+5
 
#Snapshost (0=flag not set, 1=flag set)
snpflags = np.zeros(5, dtype=np.int32)
snpflags[0] = 1 #Store p on file "snp-p.bin"
#snpflags[1] =  1 #Store vx     on file "snp-vx.bin"
#snpflags[2] = 1 #Store vy      on file "snp-vy.bin"
#snpflags[3] = 1 #Store e       on file "snp-e.bin"
#snpflags[4] = 1 #Store exy     on file "snp-exy.bin"
