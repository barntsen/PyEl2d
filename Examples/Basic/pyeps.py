''' pyeps is a python function library for storing numpy arrays in memory 

    Functions: 
          Store2df allocates memory and copies 2D numpy array into memory 
          Store1df allocates memory and copies 1D numpy array into memory
          Store1di allocates memory and copies 1D integer array into memory
          Store1ds allocates memory and copies 1D char array into memory
          Get2df   Copies 2d array and deletes allocated memory
 
'''

import numpy as np
from ctypes import *

# Eps interface for a  struct is via a class

# Class for 2d array of floats
class epsarray(Structure) :
 _fields_ = [("d", ARRAY(c_int,2)),("a",POINTER(c_float))] 

# Class for 1d array of ints
class epsarrayi(Structure) :
 _fields_ = [("d", ARRAY(c_int,1)),("a",POINTER(c_int))] 

# Class for strings
class epsarrays(Structure) :
 _fields_ = [("d", ARRAY(c_int,1)),("a",c_char_p)] 


def Store2df(pyeps,arr):
  ''' Store2df allocates memory and copies 2D numpy arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D numpy array
        
      Return :
        2D eps array
          
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre2df.argtypes=[c_int,c_int]
  pyeps.PyepsCre2df.restype=c_void_p
  nx = arr.shape[0]
  ny = arr.shape[1]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre2df(nx,ny) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray()
  epsarr.a = arr.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarr.d[1]=ny
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2df
  pyeps.PyepsCopy2df.argtypes=[POINTER(epsarray),c_void_p]
  pyeps.PyepsCopy2df.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy2df(epsarr,out)
  
  return(out)

def Get2df(pyeps,arr,out):
  ''' Get2df copies a 2D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D eps array
        out     : 2D numpy array
        
      Return :
        On success return 1.
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  nx = out.shape[0]
  ny = out.shape[1]
  epsarr = epsarray()
  epsarr.a = out.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarr.d[1]=ny
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2df
  pyeps.PyepsCopy2df.argtypes=[c_void_p,POINTER(epsarray)]
  pyeps.PyepsCopy2df.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy2df(arr,epsarrp)

  return(True)


def Store1df(pyeps,arr):
  ''' Store1df allocates memory and copies 1D numpy arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D numpy array
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1df.argtypes=[c_int]
  pyeps.PyepsCre1df.restype=c_void_p
  nx = arr.shape[0]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1df(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray()
  epsarr.a = arr.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1df
  pyeps.PyepsCopy1df.argtypes=[POINTER(epsarray),c_void_p]
  pyeps.PyepsCopy1df.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1df(epsarr,out)
  
  return(out)

def Get1df(pyeps,arr,out):
  ''' Get1df copies a 1D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D eps array
        out     : 1D numpy array
        
      Return :
        On success return 1.
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  nx = out.shape[0]
  epsarr = epsarray()
  epsarr.a = out.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1df
  pyeps.PyepsCopy1df.argtypes=[c_void_p,POINTER(epsarray)]
  pyeps.PyepsCopy1df.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy1df(arr,epsarrp)

  return(True)


def Store1di(pyeps,arr):
  ''' Store1di allocates memory and copies 1D integer arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D integer array
  '''
  
  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1di.argtypes=[c_int]
  pyeps.PyepsCre1di.restype=c_void_p
  nx = arr.shape[0]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1di(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarrayi()
  epsarr.a = arr.ctypes.data_as(POINTER(c_int))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1di
  pyeps.PyepsCopy1di.argtypes=[POINTER(epsarrayi),c_void_p]
  pyeps.PyepsCopy1di.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1di(epsarr,out)
  
  return(out)

def Get1di(pyeps,arr,out):
  ''' Get1di copies a 1D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D eps array
        out     : 1D numpy array
        
      Return :
        On success return 1.
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  nx = out.shape[0]
  epsarr = epsarrayi()
  epsarr.a = out.ctypes.data_as(POINTER(c_int))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1di
  pyeps.PyepsCopy1di.argtypes=[c_void_p,POINTER(epsarrayi)]
  pyeps.PyepsCopy1di.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy1di(arr,epsarrp)

  return(True)



def Store1ds(pyeps,arr):
  ''' Store1ds allocates memory and copies 1D char array into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : python string
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1ds.argtypes=[c_int]
  pyeps.PyepsCre1ds.restype=c_void_p
  nx = len(arr)

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1ds(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarrays()
  epsarr.a = c_char_p(bytes(arr,'utf-8'))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1ds
  pyeps.PyepsCopy1ds.argtypes=[POINTER(epsarrays),c_void_p]
  pyeps.PyepsCopy1ds.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1ds(epsarr,out)
  
  return(out)

def Get1ds(pyeps,arr):
  ''' Get1ds copies a 1D eps array into a string
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D eps array
        
      Return :
        out     : copy of input eps string array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data
  
  narr = cast(arr,POINTER(epsarrays))
  ns = (narr.contents).d[0]
  epsarr = epsarrays()
  out=bytearray([0]*ns)
  epsarr.a = c_char_p(bytes(out))
  epsarr.d[0]=ns
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1ds
  pyeps.PyepsCopy1ds.argtypes=[c_void_p,POINTER(epsarrays)]
  pyeps.PyepsCopy1ds.restype=c_int

  # Copy eps array into string
  pyeps.PyepsCopy1ds(arr,epsarrp)
  bs=epsarrp.contents
  bss=bs.a
  bsss= bss.decode('utf-8')
  out=bsss

  return(out)



