#!/usr/bin/env python3

''' Functions related to Viscoelastic models  

   See Casula, 1992, "Generalized Mechanical Model Analogies of
                      Linear Viscoelastic Behaviour ", Bolletino Di 
                      Geofisica Teoretica ed Applicata, Vol XXIV,
                      N. 136, December 1992,

   for the formulas used in this module.

'''

# Imports
import matplotlib.pyplot as pl
import numpy as np
import sys
import argparse
from math import *

def taues (tau0,Q) :
  ''' Taues computes relaxation times from Q 
    
   Arguments:
     - w0 : Peak frequency
     - Q  : 2D array of Q values

   Return:
     - taue  : epsilon relaxation time
     - taus  : sigma   relaxation time
      
  '''

  tau0=1/w0
  Nx = Q.shape[0]
  Ny = Q.shape[1]

  taue=np.zeros((Nx,Ny))
  taus=np.zeros((Nx,Ny))
  taue = (tau0/Q)*(np.sqrt(Q*Q+1.0)+1.0);
  taus = (tau0/Q)*(np.sqrt(Q*Q+1.0)-1.0);

  return(taue,taus)

def q(taue,taus,w0) :
  ''' q Computes Q from taus and taue

  Arguments :
    - taue : epsilon relaxation values
    - taus : epsilon relaxation values
    - w0   : Peak angular frequency 

  Return :
    - Q  : Q-value

  '''

  tau0=1/w0
  Q = 2*tau0/(taue-taus)

  return(Q)

def e2(d, dx, nb):
  ''' 

  Arguments :
    - d  : 1D array
    - dx : Sampling distance in meters
    - nb : Length of tapering zone

  e2 creates a 1D quadratic profile function tapering both
  ends of the vector d.

  '''
  
  n = len(d)
  for i in range(0,n): 
    d[i]=1.0;

  # Left border
  for i in range(0,nb+1) :
    d[i] = d[i]*(((i*dx))/((nb)*dx))**2

  # Right border
  for i in range(n-1-nb,n) :
      d[i] = (((n-1-i)*dx)/((nb)*dx))**2

  return (d)

def e1(d, dx, nb):
  ''' 
  Arguments :
    - d  : 1D array
    - dx : Sampling interval
    - nb : Length of profile zone

  e1 creates a linear profile function
  tapering both ends of the vector d.

  '''
  n = len(d)

  for i in range(0,n): 
    d[i]=1.0;
  # Left border
  for i in range(0,nb+1) :
    d[i] = ((i*dx)/((nb)*dx))

  # Right border
  for i in range(n-nb,n) :
    d[i] = 1.0-((i-(n-nb))*dx)/((nb)*dx)

  return d

def sls(Q,nb, dx, dt,w0) :
  ''' Compute tapered Q models for standard linear solid 

  Sls will taper the input Q-model in both x- and y-directions. The resulting
  output Q-models have strong enough attenuation to attenuate wavfields and
  are smooth enough to prevent reflections.
  A standard linear solid (SLS) is used for the Q model.

  Arguments :
    - Q  : 2D array of Q-values
    - nb : Length of border zone
    - dx : Spatial sampling interval
    - dt : Time sampling interval
    - w0 : Peak angular frequency

  Returns :
    - Qx : 2D array with tapered Q-values in the x-direction
    - Qy : 2D array with tapered Q-values in the y-direction

  '''

  #Preliminary we just set a high and
  #Low Q-value within the border (taper) zone.
  
  Qmax=100000.0
  Qmin=1.1

  Nx = Q.shape[0]
  Ny = Q.shape[1]
  Qx = np.zeros((Nx,Ny))
  Qy = np.zeros((Nx,Ny))
  tauex = np.zeros(Nx)
  tauey = np.zeros(Ny)
  tausx = np.zeros(Nx)
  tausy = np.zeros(Ny)
  d1    = np.zeros(Nx)
  d2    = np.zeros(Ny)

  d1 = e2(d1, dx, nb)
  d2 = e2(d2, dx, nb)
  tau0 = 1.0/w0         # Relaxation time corresponding to absorption top

  #Compute relaxation times corresponding to Qmin
  tauemin = (tau0/Qmin)*(sqrt(Qmin*Qmin+1.0)+1.0);
  tauemin = 1.0/tauemin;
  tausmin = (tau0/Qmin)*(sqrt(Qmin*Qmin+1.0)-1.0);
  tausmin = 1.0/tausmin;

  #Compute relaxation times corresponding to Qmax
  tauemax = (tau0/Qmax)*(sqrt(Qmax*Qmax+1.0)+1.0);
  tauemax = 1.0/tauemax;
  tausmax = (tau0/Qmax)*(sqrt(Qmax*Qmax+1.0)-1.0);
  tausmax = 1.0/tausmax;

  for i in range(0,Nx):
    # Quadratic interpolation of taue and taus in x-dir
    tauex[i] = tauemin + (tauemax-tauemin)*d2[i];
    tauex[i] = 1.0/tauex[i]
    tausx[i] = tausmin + (tausmax-tausmin)*d2[i];
    tausx[i] = 1.0/tausx[i]

  for i in range(0,Ny):
    # Quadratic interpolation of taue and taus in y-dir
    tauey[i] = tauemin + (tauemax-tauemin)*d2[i];
    tauey[i] = 1.0/tauey[i]
    tausy[i] = tausmin + (tausmax-tausmin)*d2[i];
    tausy[i] = 1.0/tausy[i]

  Qx = np.zeros((Nx,Ny))
  Qy = np.zeros((Nx,Ny))

  for j in range(0,Ny):
    for i in range(0,Nx) :
      Qx[i,j]  = 2*tau0/(tauex[i]-tausx[i])
      Qy[i,j]  = 2*tau0/(tauey[j]-tausy[j])
      
  #Qx = np.transpose(Qx)
  #Qy = np.transpose(Qy)
  return (Qx,Qy)

def main() :
  ''' test cases '''

  # Check the d2 function
  Nx=20
  nb=5
  dx=10
  d=np.zeros(Nx)
  e1(d,dx,nb)
  print("e1 : ",d)
  e2(d,dx,nb)
  print("e2 : ",d)
  
  Nx = 251
  Ny = 251 
  nb=35
  dx = 5 
  
  w0=25.0*2.0*3.14159
  dt = 0.001
  Q  = np.zeros((Nx,Ny))
  Qx,Qy=sls(Q,nb, dx,dt, w0)

# Plot results
  pl.figure()
  im=pl.imshow(Qx)
  cbar=pl.colorbar(im,fraction=0.02, pad=0.04)
  pl.show()
  im=pl.imshow(Qy)
  cbar=pl.colorbar(im,fraction=0.02, pad=0.04)
  pl.show()

#--Usual python magic
if __name__ == "__main__":
    main()

