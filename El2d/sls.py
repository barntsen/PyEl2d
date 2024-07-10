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
    - Qmax : Maximum Q-value when taue == taus

  Return :
    - Q  : Q-value

  '''

  tau0=1/w0
  Q = 2*tau0/(taue-taus)

  return(Q)

def Modeld(d, dx, nb):
  ''' Modeld implements the cpml profile function 
 
  Arguments :
    - d  : 1D array
    - dx : Sampling distance in meters
    - nb : Length of profile zone

 Modeld creates a 1D profile function tapered with the cmpl d function. 

 See Komatitsch et al. 2007, "An unsplit convolutional perfectly 
     matched layer improvedat grazing incidence for the seismic 
     wave equation", Geophysics, 72, p. SM155-SM167.

 '''
  
  n = len(d)
  for i in range(0,n): 
    d[i]=1.0;

  # Left border
  for i in range(0,nb) :
    d[i] = d[i]*(((i*dx))/((nb)*dx))**2

  # Right border
  for i in range(n-1-nb,n) :
      d[i] = (((n-1-i)*dx)/((nb)*dx))**2

  return (d)


def Modeld1(d, dx, nb):
  ''' Modeld1 implements the cpml alpha linear x dependence 

  Arguments :
    - d  : 1D array
    - dx : Sampling interval
    - nb : Length of profile zone

  See Komatitsch et al. 2007, "An unsplit convolutional perfectly
     matched layer improvedat grazing incidence for the seismic
     wave equation", Geophysics, 72, p. SM155-SM167.

  '''
  n = len(d)

  for i in range(0,n): 
    d[i]=1.0;
  # Left border
  for i in range(0,nb) :
    d[i] = ((i*dx)/((nb-1)*dx))

  # Right border
  for i in range(n-nb,n) :
    d[i] = 1.0-((i-(n-nb))*dx)/((nb-1)*dx)

  return d

def method1(Q,nb, dx, dt,w0) :
  ''' Compute relaxation times and Q for method1

  Arguments :
    - Q  : 2D array of Q-values
    - nb : Length of cpml border zone
    - dx : Spatial sampling interval
    - dt : Time sampling interval
    - w0 : Peak angular frequency

  Returns :
    - Qx : 2D array with cpml Q-values in the x-direction
    - Qy : 2D array with cpml Q-values in the y-direction

  See Komatitsch et al. 2007, "An unsplit convolutional perfectly
     matched layer improvedat grazing incidence for the seismic
     wave equation", Geophysics, 72, p. SM155-SM167.

  '''

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

  d1 = Modeld(d1, dx, nb)
  d2 = Modeld(d2, dx, nb)
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
    tauex[i] = tauemin + (tauemax-tauemin)*d1[i];
    tauex[i] = 1.0/tauex[i]
    tausx[i] = tausmin + (tausmax-tausmin)*d1[i];
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
      
  Qx = np.transpose(Qx)
  Qy = np.transpose(Qy)
  return (Qx,Qy)

def main() :
  ''' sls test cases '''

  Nx = 251
  Ny = 251 
  nb=35
  dx = 5 
  w0=25.0*2.0*3.14159
  dt = 0.001
  Q  = np.zeros((Nx,Ny))
  Qx,Qy=method1(Q,nb, dx,dt, w0)

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

