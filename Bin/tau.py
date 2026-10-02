#!/usr/bin/env  python3

from math import *
import cmath
import numpy as np
import matplotlib.pyplot as plt
import pyeps


''' Functions related to Viscoelastic models  

   See Casula, 1992, "Generalized Mechanical Model Analogies of
                      Linear Viscoelastic Behaviour ", Bolletino Di 
                      Geofisica Teoretica ed Applicata, Vol XXIV,
                      N. 136, December 1992,

   for the formulas used in this module.

'''

def q(taue,taus,w0) :
  ''' q Computes Q from taus and taue

  Arguments :
    - taue : epsilon relaxation values
    - taus : epsilon relaxation values
    - w0   : Peak angular frequency 

  Return :
    - Q  : Q-value

   See Casula, 1992, "Generalized Mechanical Model Analogies of
                      Linear Viscoelastic Behaviour ", Bolletino Di 
                      Geofisica Teoretica ed Applicata, Vol XXIV,
                      N. 136, December 1992,
  '''

  tau0=1/w0
  Q = 2*tau0/(taue-taus)

  return(Q)

def e2(d, dx, nb):
  ''' e2 creates quadratic tapering function 

  Arguments :
    - d  : 1D array
    - dx : Sampling distance in meters
    - nb : Number of intervals in tapering zone

  e2 creates a 1D quadratic profile function tapering both
  ends of the vector d. The number of points in the tapering
  zone is nb+1. 

  See Komatitsch and Martin, 2007, "An unsplit convolutional perfectly 
  matched layer improvedat grazing incidence for the seismic wave equation",
  Geophysics, Geophysisc, 72, 5, p. SM155-SM167.

  '''
  
  n=len(d)
  # Left border
  for i in range(0,nb+1) :
    ix = nb-i
    arg = (ix*dx)/(nb*dx)
    arg2 = arg*arg
    d[i]=arg2

  # Right border
  for i in range(n-1-nb,n) :
    ix=i-(n-1-nb)
    arg=(ix*dx)/(nb*dx)
    arg2=arg*arg
    d[i] =arg2

  return (d)

def e1(d, dx, nb):
  ''' e1 creates linear tapering function 

  Arguments :
    - d  : 1D array
    - dx : Sampling distance in meters
    - nb : Number of intervals in tapering zone

  e2 creates a 1D quadratic profile function tapering both
  ends of the vector d. The number of points in the tapering
  zone is nb+1. 

  See Komatitsch and Martin, 2007, "An unsplit convolutional perfectly 
  matched layer improvedat grazing incidence for the seismic wave equation",
  Geophysics, Geophysisc, 72, 5, p. SM155-SM167.

  '''
  
  n=len(d)
  # Left border
  for i in range(0,nb+1) :
    ix = nb-i
    arg = (ix*dx)/(nb*dx)
    d[i]=arg

  # Right border
  for i in range(n-1-nb,n) :
    ix=i-(n-1-nb)
    arg=(ix*dx)/(nb*dx)
    d[i] =arg

  return (d)


def taues(tau0,Q0):
  ''' taues computes Q at the absorption peak frequency of 1/tau0.
  
  Parameters: 
    tau0:    1/w0 (w0 is peak absorption frequency)
    Q0  :    Q value at w0

  Returns:
    Relaxation values taue and taus

   See Casula, 1992, "Generalized Mechanical Model Analogies of
                      Linear Viscoelastic Behaviour ", Bolletino Di 
                      Geofisica Teoretica ed Applicata, Vol XXIV,
                      N. 136, December 1992,

  '''

  taue = (tau0/Q0)*(np.sqrt(Q0*Q0+1.0)+1.0);
  taus = (tau0/Q0)*(np.sqrt(Q0*Q0+1.0)-1.0);

  return(taue,taus)

def alphad(f0,d0,n,dx,nb) :
  ''' Compute alpha and d 

  Parameters:
    f0 : Peak frequency
    d0 : CPML parameter
    n  : Length of d and alpha
    dx : Spatial sampling interval
    nb : Length of CPML zone

  See Komatitsch and Martin, 2007, "An unsplit convolutional perfectly 
  matched layer improvedat grazing incidence for the seismic wave equation",
  Geophysics, Geophysisc, 72, 5, p. SM155-SM167.

  ''' 

  PI=3.14159
  alpha0=PI*f0
  alpha=np.zeros((n,),dtype=np.float32, order='F')
  d=np.zeros((n,),dtype=np.float32, order='F')
  d=d0*e2(d,dx,nb)
  alpha=alpha0*e1(alpha,dx,nb)
  return(alpha,d)

def taucpml(Q0,f0,dt,d,alpha):

  ''' Compute taue and taus corresponding to
      alpha and d

  Parameters:
    Q0 : Q0 at f0
    f0 : Peak frequency
    dt : Time sampling interval
    d  : CPML d function
    alpha : CPML alpha function

    See notes 

  '''

  PI=3.14159
  tau0=1/(2*PI*f0)
  taue0,taus0=taues(tau0,Q0)

  # Set lower limits
  alpha=np.where(alpha == 0, -1, alpha)
  d=np.where(d == 0, -1, d)

  # Compute kernel for memory function recursion 
  phi0=d*np.exp(-dt*(d+alpha))

  # Compute corresponding relaxation times
  taue = 1/alpha
  taus = 1/(alpha+d)

  for i in range(0,len(taue)) :
    if taue[i] < 0 :
      taue[i]=taue0
      taus[i]=taus0
  
  return(taue,taus)



def main():

  f0=25.0
  d0=349.1
  n=50
  dx=10
  nb=10
  PI=3.14159

  alpha,d=alphad(f0,d0,n,dx,nb)

  #Compute relaxation times for constant Q=10000.0

  Q0=10000.0
  tau0=1/(2*PI*f0)
  taue0,taus0=taues(tau0,Q0)

  # Set lower limits
  alpha=np.where(alpha == 0, -1, alpha)
  d=np.where(d == 0, -1, d)

  # Graphs of d and alpha
  plt.plot(alpha,label=r"$\alpha$")
  plt.plot(d,label=r"$d$")
  plt.legend()
  plt.savefig("d-alpha.pdf")
  plt.show()

  # Compute kernel for memory function recursion (see Notes)
  dt=0.001
  phi0=d*np.exp(-dt*(d+alpha))

  #Graph memeory function kernel
  plt.title(r"Memory function kernel computed from $d$ and $\alpha$")
  plt.plot(phi0)
  plt.savefig("kernel.pdf")
  plt.show()

  alpha,d=alphad(f0,d0,n,dx,nb)
  taue,taus=taucpml(Q0,f0,dt,d,alpha)
  # Graphs of relaxation times computed from alpha and d
  plt.title(r"Relaxation times from $\alpha$ and $d$")
  plt.plot(taue,label=r"$\tau_e$")
  plt.plot(taus, label=r"$\tau_s$")
  plt.legend()
  plt.savefig("taues.pdf")
  plt.show()

  #Graphs of memeory kernel computed from taue and taus
  plt.title("Memory kernel from relaxation times")
  phi=(1-taue/taus)
  phi=-phi/taue
  phi=phi*np.exp(-dt/taus)
  plt.plot(phi,label=r"$\phi$")
  plt.plot(phi0,label=r"$\phi_0$")
  plt.legend()
  plt.savefig("kernel2.pdf")
  plt.show()

if __name__ == "__main__":
    main()
