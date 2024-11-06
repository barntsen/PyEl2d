
import libe                 # Library interface

#Empty main program (Necessary for linking)
int Main(struct MainArg [*] MainArgs)
:
  return(1);
end

char [*] PyepsCre1ds(int Nx):

  # PepsCre1ds creates a string buffer
  #
  # Parameter:
  #  Nx      : No of characters in buffer
  #
  # Returns:
  #  str     : String buffer

  char [*] str;
  str = new(char [Nx+1]);
  str[Nx] = cast(char,0);
  return(str);
end

int PyepsDel1ds(char [*] arr):

  # PepsDel1ds deletes string buffer
  #
  # Parameter:
  #  arr      : String buffer
  #
  # Returns: integer equal to 1

   delete(arr);
   return(1);

end

int PyepsSet1ds(char [*] arr, int i, char val):

  # PepsSet1ds copies string into buffer
  #
  # Parameter:
  #  char [*] arr : String buffer
  #  int i        : Index of string character
  #  char val     : String character
  #
  # Returns: integer equal to 1
     
  arr[i] = val;
  return(1);
end

int [*] PyepsCre1di(int Nx):

  # PepsCre1di creates integer 1D array
  #
  # Parameter:
  #  int Nx      : No of integers in array
  #
  # Returns:
  #  int [*] arr     : Integer array

  int [*] tmp;
  tmp = new(int [Nx]);
  return(tmp);
end

int PyepsDel1di(int [*] arr):

  # PepsDel1di deletes 1D integer array
  #
  # Parameter:
  #  int [*] arr      : Integer array
  #
  # Returns: integer equal to 1
     
   delete(arr);
   return(1);
end

# PepsSet1di copies integer into array
int PyepsSet1di(int [*] arr, int i, int val):
   
  # Parameter:
  #  int [*] arr  : Integer array
  #  int i        : Index of integer in arr
  #  val val      : Integer value 
  #
  # Returns: integer equal to 1
     
  arr[i] = val;
  return(1);
end

float [*] PyepsCre1df(int Nx):

  # PepsCre1di creates float 1D array
  #
  # Parameter:
  #  int Nx      : No of floats in array
  #
  # Returns:
  #  float [*] arr     : Float array
   
  float [*] tmp;
  tmp=new(float [Nx]);
  return(tmp);
end

# PepsDel1df deletes 1D float array
int PyepsDel1df(float [*] arr):

  # Parameter:
  #  float [*] arr      : Float array
  #
  # Returns: integer equal to 1
     
   delete(arr);
   return(1);
end

int PyepsSet1df(float [*] arr, int i, float val):

  # PepsSet1df copies float into array
  #
  # Parameter:
  #  float [*] arr: Float array
  #  int i        : Index of integer in arr
  #  val val      : Integer value 
  #
  # Returns: integer equal to 1
     
  arr[i] = val;
  return(1);
end

float [*,*] PyepsCre2df(int Nx, int Ny):

  # PepsCre1di creates float 2D array
  #
  # Parameter:
  #  int Nx      : No of floats in array 1st dim
  #  int Ny      : No of floats in array 2nd dim
  #
  # Returns:
  #  float [*,*] arr     : Float array
  #

  return(new(float [Nx,Ny]));
end

int PyepsDel2df(float [*,*] arr):

  # PepsDel2df deletes 2D float array
  #
  # Parameter:
  #  float [*,*] arr      : Float array
  #
  # Returns: integer equal to 1
  #  
   delete(arr);
   return(1);
end

int PyepsSet2df(float [*,*] arr, int i, int j, float val):

  # PepsSet2df copies float into array
  #
  # Parameter:
  #  float [*,*] arr: Float array
  #  int i        : Index of integer in arr 1st dim
  #  int j        : Index of integer in arr 2nd dim
  #  val val      : Integer value 
  #
  # Returns: integer equal to 1
     
  arr[i,j] = val;
  return(1);
end

float PyepsGet2df(float [*,*] arr, int i, int j):

# PepsGet2df copies float from array
   
  # Parameter:
  #  float [*,*] arr: Float array
  #  int i        : Index of integer in arr 1st dim
  #  int j        : Index of integer in arr 2nd dim
  #
  # Returns: arr[i,j]
     
  return(arr[i,j]);
end
