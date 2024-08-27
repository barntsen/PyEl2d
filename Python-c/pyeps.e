
include <libe.i>                 # Library interface

# Create string array
char [*] PyepsCre1ds(int Nx):end

# Delete 1D string array
int PyepsDel1ds(char [*] arr):end

#Set 1D string array
int PyepsSet1ds(char [*] arr, int i, char val):end

# Create integer array
int [*] PyepsCre1di(int Nx):end

# Delete 1D integer array
int PyepsDel1di(int [*] arr):end

#Set 1D integer array
int PyepsSet1di(int [*] arr, int i, int val):end

# Create 1D float array
float [*] PyepsCre1df(int Nx):end

# Delete 1D float array
int PyepsDel1df(float [*] arr):end

#Set 1D float array
int PyepsSet1df(float [*] arr, int i, float val):end

# Create 2D float array
float [*,*] PyepsCre2df(int Nx, int Ny):end

# Delete 2D float array
int PyepsDel2df(float [*,*] arr):end

#Set 2D float array
int PyepsSet2df(float [*,*] arr, int i, int j, float val):end

#Get 2D float array
float PyepsGet2df(float [*,*] arr, int i, int j):end

#Empty main program (Necessary for linking)
int Main(struct MainArg [*] MainArgs)
:
  return(1);
end

# PepsCre1ds creates a string buffer
#
# Parameter:
#  Nx      : No of characters in buffer
#
# Returns:
#  str     : String buffer
char [*] PyepsCre1ds(int Nx):
  char [*] str;
  str = new(char [Nx+1]);
  str[Nx] = cast(char,0);
  return(str);
end

# PepsDel1ds deletes string buffer
#
# Parameter:
#  arr      : String buffer
#
# Returns: integer equal to 1
#  
int PyepsDel1ds(char [*] arr):
   delete(arr);
   return(1);
end

# PepsSet1ds copies string into buffer
#
# Parameter:
#  char [*] arr : String buffer
#  int i        : Index of string character
#  char val     : String character
#
# Returns: integer equal to 1
#  
int PyepsSet1ds(char [*] arr, int i, char val):
  arr[i] = val;
  return(1);
end

# PepsCre1di creates integer 1D array
#
# Parameter:
#  int Nx      : No of integers in array
#
# Returns:
#  int [*] arr     : Integer array
#
int [*] PyepsCre1di(int Nx):
  int [*] tmp;
  tmp = new(int [Nx]);
  return(tmp);
end

# PepsDel1di deletes 1D integer array
#
# Parameter:
#  int [*] arr      : Integer array
#
# Returns: integer equal to 1
#  
int PyepsDel1di(int [*] arr):
   delete(arr);
   return(1);
end

# PepsSet1di copies integer into array
#
# Parameter:
#  int [*] arr  : Integer array
#  int i        : Index of integer in arr
#  val val      : Integer value 
#
# Returns: integer equal to 1
#  
int PyepsSet1di(int [*] arr, int i, int val):
  arr[i] = val;
  return(1);
end

# PepsCre1di creates float 1D array
#
# Parameter:
#  int Nx      : No of floats in array
#
# Returns:
#  float [*] arr     : Float array
#
float [*] PyepsCre1df(int Nx):
  float [*] tmp;
  tmp=new(float [Nx]);
  return(tmp);
end

# PepsDel1df deletes 1D float array
#
# Parameter:
#  float [*] arr      : Float array
#
# Returns: integer equal to 1
#  
int PyepsDel1df(float [*] arr):
   delete(arr);
   return(1);
end

# PepsSet1df copies float into array
#
# Parameter:
#  float [*] arr: Float array
#  int i        : Index of integer in arr
#  val val      : Integer value 
#
# Returns: integer equal to 1
#  
int PyepsSet1df(float [*] arr, int i, float val):
  arr[i] = val;
  return(1);
end

# PepsCre1di creates float 2D array
#
# Parameter:
#  int Nx      : No of floats in array 1st dim
#  int Ny      : No of floats in array 2nd dim
#
# Returns:
#  float [*,*] arr     : Float array
#
float [*,*] PyepsCre2df(int Nx, int Ny):
  return(new(float [Nx,Ny]));
end

# PepsDel2df deletes 2D float array
#
# Parameter:
#  float [*,*] arr      : Float array
#
# Returns: integer equal to 1
#  
int PyepsDel2df(float [*,*] arr):
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
#  
  arr[i,j] = val;
  return(1);
end
float PyepsGet2df(float [*,*] arr, int i, int j):
# PepsGet2df copies float from array
#
# Parameter:
#  float [*,*] arr: Float array
#  int i        : Index of integer in arr 1st dim
#  int j        : Index of integer in arr 2nd dim
#
# Returns: arr[i,j]
#  
  return(arr[i,j]);
end
