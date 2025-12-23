# Libe is the compiler support library.

import m       # Machine dep   ent constants.
import run     # Runtime library.

# General constants
#
# First I define some usefull constants which are actually used
# throughout all my code.  OK is the standard return value
# when everything is fine, while  ERR is used to signal
# an error. NULL is equal to zero, and is mainly used
# to indicate that a reference is referencing nothing.
# EOF is the    -of-file indicator, while
# EOS is the    -of-string mark.
# NL is the new line character, while
# TAB and SPACE are the tab and space characters.
 
const ZERO = 48   # Zero               
const EOS  =  0   # End of string      
const NULL =  0   # Null               
const NL   = 10   # New line           
const TAB  =  9   # Tab character      
const SPACE = 32  # Space              
 
# I also define names for some common characters.
 
const PLUS  = 43       # '+'   
const MINUS = 45       # '-'   
const STAR  = 42       # '*'   
const LP    = 40       # '('   
const RP    = 41       # ')'   
const LB    = 91       # '['   
const RB    = 93       # ']'   
const LBR   = 123      # '{'   
const RBR   = 125      # '}'   
const COLON =  58      # ':'   
const SEMICOLON = 59   # ' '   
const COMMA = 44       # ','   
const LT    = 60       # '<'   
const GT    = 62       # '>'   
const SLASH = 47       # '/'   
const BSLASH = 92      # '\'   
const ADRESS = 38      # '&'   
const ASSIGN = 61      # '='   
const VBAR   = 124     # '|'   
const EXLAM  = 33      # '!'   
const POINT  = 46      # '.'   
const DFN    = 34      # '"'   
const SFN    = 39      # '''   
const HASH   = 35      # '#'   
#
# EFILE is short hand for int, and only provided
# because I may change this to some other type in
# the future.
# The macros stdin, stdout and  stderr are shorthand
# for the corresponding elements in  LibeFarr containing
# entries for the standard input, the standard output and standard
# error (2,3,4) file descriptors.
 
const stdin = 2    # Standard  input    
const stdout= 3    # Standard  output   
const stderr= 4    # Standard  error    

# Error routines
#
# The normal return value for functions in this library is 
# OK, signaling that everything went well and the call
# was successfull.
# If an error occured this is signaled by returning the
# value ERR except if otherwise is noted. 
# Further information is obtained by 
# calling LibeGeterrno which returns an error number.
# At the moment the following errors are defined
 
const OK  =  1      # No error                         
const ERR =  0      # An error occured                 
const EMPTY =  2    # No information                   
const EOF   = -1    # End-of-file                      
const IOINITERR = -100  # Io could not be initialized    
const DOMAINERR = -101 # Math domain error                  
const RANGERR   = -102 # Math range error              
const FMODEERR  = -103 # Unknown file mode              
const FMAXERR   = -104 # Too many open files           
const OPENERR   = -105 # Could not open file           
const CLOSERR   = -106 # Could not close file          
const PUSHERR   = -107 # Too many pushbacks            
const MEMORYERR = -108 # Buffer array is too small     
const FNOREADERR= -109 # File is not open for read     
const FNOWRITERR= -110 # File is not open for write    
const READERR   = -111 # Read error                    
const WRITERR   = -112 # Write error                   
const ALLOCERR  = -113  # Can not allocate buffer       


# Main program arguments
struct MainArg :
  char [*] arg    

# The routines provided in this section reports
# error numbers and strings containing the error messages.
# The two global and private variables LibeErrno
# and LibeErrstr is used for communication between
# the routines. 
#
int      LibeErrno    # Error return number 
char [*] LibeErrstr   # Error message      
  
def int LibeErrinit() :

  # LibeErrinit initialize error routines
  #
  # Parameters : None
  #
  # Returns: 
  #   OK
  #

  LibeErrno = OK 
  LibeErrstr = NULL
  return(OK) 


def int LibeGeterrno() :

  # LibeGeterrno returns the value of LibeErrno
  #
  # Parameters: None
  #
  # Returns:
  #   LibeErrno.
  #

  return(LibeErrno) 
    
 
def int LibeClearerr() :

  #   LibeClearerr clears the error number.
  #
  # Parameters: None
  #
  # Returns: 
  #   OK 
  #

  LibeErrno = OK 
  return(OK) 
    

def char [*] LibeGeterrstr() :

  # LibeGeterrstr returns the value of the error string.
  # Parameters: None
  #
  # Returns:
  #   Error string
  #

  return(LibeErrstr) 
    

def char [*] LibeGetenv(char [*] name) :

  # LibeGetenv returns the value of the environment variable
  #
  # Parameters: 
  #   name : Environment variable name
  #
  # Returns:
  #   Value of environment variable
  #

  return(RunGetenv(name)) 
    

# Floating point routines 
#

# Float constants
const MFMIN = 1   
const MFMAX = 2  
const MEPSMIN = 3 
const MEPSMAX = 4  
const MLOG2 =  5  

def float LibeMach(int flag) :

  # LibeMach gets machine depent floating point properties
  # 
  #
  # Parameters:
  #   flag : Select floating point quantity  
  #
  # Returns
  #   One of the following according to the flag value
  #   flag :  MFMIN  Returns min floating point number
  #           MFMAX  Returns max floating point number
  #           MEPSMIN  Returns min floating point accuracy
  #           MEPSMAX  Returns max floating point accuracy
  #           MLOG2    Returns value if ln(2)
  #

  if(flag == MFMIN):      # Minimum floating point value  
    return(FMIN) 
  else if(flag == MFMAX): # Maximum floating point value  
    return(FMAX) 
  else if(flag == MEPSMIN): # Minimum floating point accuracy  
    return(EPSMIN) 
  else if(flag == MEPSMAX): # Maximum floating point accuracy  
    return(EPSMAX) 
  else if(flag == MLOG2):   # value of ln(2)                   
    return(LOG2) 
  else :
    return(cast(float,ERR)) 
    
 
def float LibeFabs(float x) :
  # LibeFabs gets absolute value of float 
  # 
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #   Absolute value of x
  #

  if(x < 0.0) : 
    return(-x) 
  else :
    return(x) 
    
def float LibeFscale2(float x, int n) :

  # LibeFscale2 computes the value of $x 2^n$. 
  # 
  # Parameter: 
  #   x      : float number
  #   n      : exponent
  #
  # Returns:
  #   x**2 
  #

  int i 
  float rval 

  if(n == 0) :
    return(x) 
  rval = 1.0 
  if(n > 0):
    for(i=0; i<n; i=i+1):
      rval = rval*2.0 
  else:
    n = -n 
    for(i=0; i<n; i=i+1):
      rval = rval*0.5 
  return(rval*x) 
    
def float LibeGetfman2(float x) :

  # LibeGetfman2 gets the mantise for base 2 of a float
  #
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #   Mantissa of float number
  #
  # A floating point number $x$ can be written 
  # as $x = y 2^-n$, where $1/2 \gt y \le 1$. 
  # This routine computes the value of $y$ when $x$ is known.
  #

  float absx 
  int n 

  absx = LibeFabs(x) 
  n = 0 

  if(x == 0.0):
    return(0.0) 

  while(absx < 0.5):
    n = n-1 
    absx = absx*2.0 

  while(absx >= 1.0 ):
    n = n+1 
    absx = absx*0.5 
 
  if(x < 0.0) :
    return(-absx) 
  else :
    return(absx) 
 
def int LibeGetfexp2(float x) :

  # LibeGetfexp2 gets the exponent of a float in base 2
  # 
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #   Exponent of float number.
  #
  # A floating point number $x$ can be written 
  # as $x = y 2^-n$, where $1/2 \gt y \le 1$. 
  # This routine computes the value of $n$ when $x$ is known.
  #

  float absx 
  int n 

  absx = LibeFabs(x) 
  n = 0 

  if(x == 0.0) :
    return(0) 

  while(absx < 0.5):
    n = n-1 
    absx = absx*2.0 

  while(absx >= 1.0 ):
    n = n+1 
    absx = absx*0.5 
  return(n) 
 
def float LibeFscale(float x, int n) :
  
  # LibeFscale returns a float given mantisa and exonent in base 10
  # 
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #   LibeFscale returns the value of $x 10^n$. 
  #

  int i 
  float rval 

  rval = 1.0 
  if(n == 0) :
    return(x) 

  if(n > 0):
    for(i=0; i<n; i=i+1):
      rval = rval*10.0 
  else:
    n = -n 
    for(i=0; i<n; i=i+1):
      rval = rval*0.1 
  return(rval*x) 
 
def int LibeGetfman(float f, int maxdig) :

  # LibeGetfman returns the mantisa of a float in base 10
  # with prescribed accuracy.
  # Parameter: 
  #   x      : float number
  #   maxdig : Max number of digits
  #
  # Returns:
  #   Mantissa of float in base 10 with maxdigit precision.
  #
  # A floating point number $x$ can be written 
  # as $x = y 10^-n$, where $0.1 \gt y \le 1$. 
  # LibeGetfman returns the value of $y$ when $x$ is known.
  #

  int   sign  # Sign of the float    
  int   nexp  # Exponent             
  int n 
  int i 

  # Record sign  

  if(f==0.0) return(0) 

  sign=1 
  if(f< 0.0):  
    f=-f 
    sign=-sign 

 # Normalize such that  1.0 <= f < 10.0  
 
  nexp = 0 	
  if(((f/10.0)+EPS) >= 1.0):
    while(((f/10.0)+EPS) >= 1.0):
      f = f/10.0 
      nexp = nexp+1  
  else if((f+EPS) < 1.0):
    while((f+EPS) < 1.0):
      f = f*10.0 
      nexp = nexp-1  
 
 # Convert the float to an integer with maxdig
 # significant digits after the decimal point  

  for(i=0;i<maxdig-1; i=i+1):
    f=f*10.0 
 
  n=cast(int,f+0.5) 
  if(sign <0) n=-n 
  return(n) 
 
def float LibeGetffman(float f) :

  # LibeGetffman returns the mantisa of a float in base 10
  # 
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #   Mantissa of float in base 10.
  #
  # A floating point number $x$ can be written 
  # as $x = y 10^-n$, where $0.1 \gt y \le 1$. 
  # LibeGetffman returns the value of $y$ when $x$ is known
  # as a float.
  #

  int   sign  # Sign of the float    
  int   nexp  # Exponent             

  # Record sign  

  if(f==0.0) return(0.0) 

  sign=1 
  if(f< 0.0):  
    f=-f 
    sign=-sign 

 # Normalize such that  1.0 <= f < 10.0  
 
  nexp = 0 	
  if(((f/10.0)+EPS) >= 1.0):
    while(((f/10.0)+EPS) >= 1.0):
      f = f/10.0 
      nexp = nexp+1  
  else if((f+EPS) < 1.0):
    while((f+EPS) < 1.0):
      f = f*10.0 
      nexp = nexp-1  
  return(f) 
#
 
def int LibeGetmaxdig(float f) :

  # LibeGetmaxdig gets number of significant digits 
  # 
  # Parameter: 
  #   f      : float number
  #
  # Returns:
  #  Number of significant digits. 
  #   

  int   sign  # Sign of the float    
  int   nexp  # Exponent             
  int i       # Loop variable        
  int loop 
  float r 

  # Record sign  

  if(f==0.0) return(0) 

  sign=1 
  if(f< 0.0):  
    f=-f 
    sign=-sign 

 # Normalize such that  1.0 <= f < 10.0  
 
  nexp = 0 	
  if(((f/10.0)+EPS) >= 1.0):
    while(((f/10.0)+EPS) >= 1.0):
      f = f/10.0 
      nexp = nexp+1  
  else if((f+EPS) < 1.0):
    while((f+EPS) < 1.0):
      f = f*10.0 
      nexp = nexp-1  
        
 # Convert the float to an integer with maxdig
 # significant digits after the decimal point  
  
  i=0 
  loop=1 
  while(loop):
    r=f-cast(float,cast(int,f)) 
    if(r < EPS):
      loop=0 
    else:
      f=f*10.0 
    i=i+1  
    if(i >= 10)loop=0  
      
  return(i) 
    
def int LibeGetfexp(float f) :

  # LibeGetfexp gets the exponent of a float in base 10
  # 
  # Parameter: 
  #   x      : float number
  #
  # Returns:
  #  Exponent of float
  #   
  # A floating point number $x$ can be written 
  # as $x = y 10^-n$, where $0.1 \gt y \le 1$. 
  # This routine computes the value of $n$ when $x$ is known.
  #

  int   nexp    # Exponent              

 # Normalize such that  1.0 < f <= 10.0  
 
  if(f==0.0) return(0) 

  nexp = 0 	
  if(f <  0.0):
   f = -f 
  if(((f/10.0)+EPS) >= 1.0):
    while(((f/10.0)+EPS) >= 1.0):
      f = f/10.0 
      nexp = nexp+1  
  else if((f+EPS) < 1.0):
    while((f+EPS) < 1.0):
      f = f*10.0 
      nexp = nexp-1  
  return(nexp) 
 
def float LibeClock() :

  # LibeClock returns the elapsed time since the program started.
  #
  # Parameters : None
  #
  # Returns :
  #   elapsed time
  #

  return(RunClock()) 
    

# Math functions
#
# Most of these routines are translated from the math library
# of the oberon-to-c compiler from th oo2c project.
# Michael Griebling wrote the library.
# The numerical approximations are taken from "Software manual for
# elementary functions" by Cody and Waite and "Computer approximations"
# by Hart et al.
 
const LN2  =   0.693147180559945309417232 
const LN2INV =   1.4426950408889634073 
const SQRTHALF = 0.70710678118654752440 
const PI       = 3.1415926535897932384626433832795028841972 
const PIINV    = 0.31830988618379067154 
const PIHALF   = 1.57079632679489661923132   
const PIBYFOUR = 0.78539816339744830962 

float LibeSincosmax  # Max value for sin/cos argument    
float LibeSincoslim  # Min value for sin/cos argument    
float LibeLnmax      # Max value for logarithm argument  
float LibeLnmin      

def int LibeMod(int n, int r) :
  
  # LibeMod computes the r-modulus of the integer n.
  # 
  # Parameters:
  #   n : number
  #   r : modulus
  #
  # Returns :
  #   The modulus is computed using the formula
  #   n - (n/r)r \nonumber
  #   where the division is an integer division.
  #

  if(r==0) return (n) 
  return ( n - (n/r) * r ) 
 
def float LibeSqrt(float x) :

  # LibeSqrt computes an approximation to the square root
  # of a floating point number. 
  #
  # Parameters:
  #   x : float
  #
  # Returns :
  #   Square root of x.
  #

  float f, yest, z 
  int n 

  const P0 = 0.41731 
  const P1 = 0.59016 

  if(x==0.0) return (0.0) 
  if(x < 0.0): 
    LibeErrno = DOMAINERR 
    LibeErrstr = "Sqrt input argument < 0 " 
    return(0.0) 

  # Reduce x to the range 0 <x < 0.5  
  f=LibeGetfman2(x) 
  n=LibeGetfexp2(x) 

  # Initial estimate of square root   
  yest = P0+P1*f 

  # Perform two Newton iterations     
  z = yest+f/yest 
  yest = 0.25*z+f/z 

  if(LibeMod(n,2) != 0):
    yest = yest*SQRTHALF 
    n = n+1 
  return(LibeFscale2(yest, n/2)) 
 

def float LibeLn(float x) :

  # LibeLn computes the natural logarithm of x    
  #
  # Parameters:
  #   x : float
  #
  # Returns :
  #   Natural logartihm of x. 
  #

  float f     # Mantissa of x  
  int   n     # Exponent of x  
  float z,zn,zd 
  float w,r 
  float xn 

  const A0 = -0.5527074855E+0  
  const B0 = -0.6632718214E+1  
  const c1 = 0.69335938 
  const c2 = -2.121944400546905827679E-4  
  
  if(x <= 0.0):
    LibeErrno=DOMAINERR 
    LibeErrstr = "Ln input argument < 0 " 
    return(FMAX) 

  f=LibeGetfman2(x) 
  n=LibeGetfexp2(x) 

  if( f>SQRTHALF): 
    zn = (f-0.5)-0.5 
    zd = f*0.5 + 0.5 
  else:
    zn = f-0.5  
    zd = zn*0.5+0.5 
    n = n-1 
  z = zn/zd 
  w = z*z 
  r = z + z*(w*A0/(w+B0))  
  xn = cast(float,n) 
  return((xn*c2+r)+xn*c1) 
 
def float LibeExp(float x) :

  # LibeExp computes exp(x).
  #
  # Parameters:
  #   x : float
  #
  # Returns :
  #   Exponential of x.
  #
  # The argument,  x, of the exponential function is divided into
  # a fractional part $g$ and an integer part $n$ according to
  #   x = n + g. 
  # To compute $\exp(x)$ one must evaluate
  #   y = \exp(x) = \exp(n+g) = \exp(n)\exp(x),
  # which can be rewritten as
  #   y =  2^:n/\ln(2)\exp(g).
  #

  int n   
  float g  
  float z,p,q 
  float xn 
  float P0,P1,Q1 
  float rval  # Return value  
 
  P0 = 0.24999999950E+0  
  P1 = 0.41602886268E-2 
  Q1 = 0.49987178778E-1 
 
  if(x >= LibeLnmax):
    LibeErrno=RANGERR 
    LibeErrstr="Overflow in exp function" 
    return(FMAX) 
 
  if(x < LibeLnmin):
    LibeErrno=RANGERR 
    LibeErrstr="Underflow in exp function" 
    return(0.0) 
 
  n = cast(int, x*LN2INV) 
  xn=cast(float,n) 
  g = x - xn*LN2 
  z = g*g 
  p = (P1*z + P0)*g  
  q = Q1*z+0.5   
  rval = 0.5 +p/(q-p) 
  return (LibeFscale2(rval, n+1)) 
 
def float LibeSincos(float x, float y, float sign) :

  # LibeSinCos computes sin and cosine function
  #
  # Parameters:
  #   x    : Absolute value of x
  #   y    : Value of x (signed)
  #   sign : Sign of x
  #
  # Returns :
  #   sin(x) 
  #


  int n 
  float xn 
  float f,g 
  float R1,R2,R3,R4 

  R1 = -0.1666665668E+0 
  R2 =  0.8333025139E-2 
  R3 = -0.1980741872E-3 
  R4 =  0.2601903036E-5 
  
  if(y > LibeSincosmax):
    LibeErrno=RANGERR 
    LibeErrstr="Loss of accuracy in sin/cos function"  
    return(0.0) 
 
  n = cast(int, y*PIINV+0.5)  
  xn =cast(float,n) 
  if(LibeMod(n,2) != 0):
    sign = -sign 
      
  x = LibeFabs(x) 
  if(x != y):
    xn = xn - 0.5  
 
  f = LibeFabs(x)-xn*PI   
  if(LibeFabs(f) < LibeSincoslim):
    return(sign*f) 
 
  g = f*f 
  g = (((R4*g+R3)*g+R2)*g+R1)*g 
  g = f+f*g 
  return(sign*g) 
    
 
def float LibeSin(float x) :

  # LibeSin computes sin function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   sin(x) 
  #

  if(x < 0.0):
    return(LibeSincos(x, -x, -1.0)) 
  else:
    return(LibeSincos(x, x, 1.0)) 
    
 
def float LibeCos(float x) :

  # LibeCos computes the cos function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   cos(x) 
  #

  return(LibeSincos(x, LibeFabs(x)+PIHALF, 1.0)) 
    
 
def float LibeTan(float x) :
 
  # LibeTan computes the tan function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   tan(x) 
  #

  const TWOBYPI = 0.63661977236758134308 

  float P1,Q1,Q2 
  int n 
  float y, xn, f, xnum, xden, g 

  P1= -0.958017723E-1  
  Q1= -0.429135777E+0  
  Q2=  0.971685835E-2 

  y = LibeFabs(x) 

  if (y > LibeSincosmax):
    LibeErrno = RANGERR 
    LibeErrstr = "Loss of accuracy in tan function" 
    return(0.0) 
      

  n = cast(int, x*TWOBYPI)  
  xn = cast(float,n) 
  f = x-xn*PIHALF 
  
  if(LibeFabs(f)<LibeSincoslim): 
    xnum = f  
    xden = 1.0 
  else:
    g = f*f  
    xnum = P1*g*f+f  
    xden = (Q2*g+Q1)*g+0.5+0.5 

  if(LibeMod(n,2)!=0):
    return(xden/(-xnum)) 
  else: 
    return(xnum/xden) 
      
def float LibeArcsin(float x) :

  # LibeArcsin computes the arcsin function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   arcsin(x) 
  #

  float P1,P2,Q0,Q1 
  float y, g, r 
  float res 
  int i 

  P1=0.933935835E+0; P2=-0.504400557E+0 
  Q0=0.560363004E+1; Q1=-0.554846723E+1 

  y = LibeFabs(x) 
  if( y> 0.5):
    i = 1 
    if( y> 1.0): 
      LibeErrno=DOMAINERR 
      LibeErrstr="Absolute value of argument of arcsin > 1" 
      return(FMAX) 

    # reduce the input argument  
    g = (1.0-y)*0.5  
    r=LibeSqrt(g)  
    r=-r 
    y=r+r  
    
    # compute approximation  
    r=((P2*g+P1)*g)/((g+Q1)*g+Q0) 
    res=y+(y*r) 
  else:
    i=0 
    if( y<LibeSincoslim):
      res=y 
    else:
      g=y*y 
      # compute approximation  
      g=((P2*g+P1)*g)/((g+Q1)*g+Q0) 
      res=y+y*g       

  if(i==1):
    res=PIBYFOUR+(PIBYFOUR+res) 
  if(x <0.0): 
    res=-res 

  return(res) 

def float LibeArccos(float x) :

  # LibeArccos computes the arcsin function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   arccos(x) 
  #

  float P1,P2,Q0,Q1 
  float y, g, r 
  float res 
  int i 

  P1=0.933935835E+0; P2=-0.504400557E+0
  Q0=0.560363004E+1; Q1=-0.554846723E+1 

  y = LibeFabs(x) 
  if( y> 0.5):
    i = 0 
    if( y> 1.0): 
      LibeErrno=DOMAINERR 
      LibeErrstr="Absolute value of argument of arccos out of range" 
      return(FMAX) 

    # reduce the input argument  
    g = (1.0-y)*0.5  
    r=LibeSqrt(g)  
    r=-r 
    y=r+r  
    
    # compute approximation  

    r=((P2*g+P1)*g)/((g+Q1)*g+Q0) 
    res=y+(y*r) 
 
  else:

    i=1 
    if( y<LibeSincoslim):
      res=y 
    else:
      g=y*y 

      # compute approximation  
      g=((P2*g+P1)*g)/((g+Q1)*g+Q0) 
      res=y+y*g       

  if(x <0.0):
   if(i==0):
     res=PIHALF+(PIHALF+res) 
   else:
     res=PIBYFOUR+(PIBYFOUR+res) 
  else: 
    if(i==1):
      res=PIBYFOUR+(PIBYFOUR-res) 
    else:
     res=-res 
  return(res) 
 
def float LibeAtan(float f) :

  # LibeAtn computes the atan function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   atan(x) 
  #

  const PIBYTHREE = 1.04719755119659774615 
  const PIBYSIX   = 0.52359877559829887308 

  float rt32, rt3, a, P0, P1, Q0 
  int n  
  float res,g 

  rt32=0.26794919243112270647 
  rt3=1.73205080756887729353 
  a=rt3-1.0 
  P0=-0.4708325141E+0; P1=-0.5090958253E-1; Q0=0.1412500740E+1 

  if( f>1.0):
    f=1.0/f  
    n=2 
  else:
    n=0 
  
  # check if f should be scaled  
  if( f>rt32):
    f=(((a*f-0.5)-0.5)+f)/(rt3+f)  
    n=n+1 

  # check for underflow  
  if( LibeFabs(f)<LibeSincoslim):
   res=f 
  else:
    g=f*f  
    res=(P1*g+P0)*g/(g+Q0)  
    res=f+f*res 
  
  if( n>1):
    res=-res 
  
  if(n==1):
    res=res+PIBYSIX 
  else if(n==2):
    res=res+PIHALF 
  else if(n==3):
    res=res+PIBYTHREE 

  return(res) 
 
def float LibeArctan(float x) :

  # LibeArctan computes the arctan function
  #
  # Parameters:
  #   x    : float
  #
  # Returns :
  #   arctan(x) 
  #

  float rval 

  if( x<0.0):
    rval=LibeAtan(-x) 
    rval=-rval 
  else:
    rval=LibeAtan(x) 

  return(rval) 
 
def float LibePow(float base, float exponent) :

  #
  # LibePow computes the power function.
  #
  # Parameters:
  #   base    : base 
  #   exponent : exponent
  #
  # Returns :
  #    base to the power of exponent. 
  #

  return(LibeExp(exponent*LibeLn(base))) 
 
def int LibeMathinit() :

  # LibeMathinit performs initialization of math functions 
  #
  # Parameters : None
  #
  # Returns :
  #   OK

  LibeSincosmax  = LibeFscale2(1.0, MBITS-1) 
  LibeSincosmax = PI*LibeSqrt(LibeSincosmax) 
  LibeSincoslim = 1.0/LibeFscale2(1.0, MBITS/2) 
  LibeLnmax = LibeLn(FMAX) 
  LibeLnmin = LibeLn(FMIN) 
  return(OK) 

# String routines 
#
# Here is a collection of simple routines for character and
# string handling. A string is implemented as a character
# array terminated by an EOS character.

def int LibeStrlen(char [*] s) :
   
  # LibeStrlen returns the length of a string
  #
  # Parameters:
  #   s    : string
  #
  # Returns :
  #    Length of string.
  #
  # If the string is unterminated, the
  # lenght of the array is returned.

  int ls  # Length of s     
  int i   # Index variable  

  ls=len(s,0) 
  i=0 
  while((cast(int,s[i]) != EOS) && (i<ls)):
    i=i+1 
 
  return(i) 
    
def int LibeStrcmp(char [*] s, char [*] t) :

  # LibeStrcmp compares to strings.
  #
  # Parameters:
  #   s    : string
  #
  # Returns :
  #    OK if strings are equal
  #    ERR in all other cases

  int ls  # Length of s     
  int i  # Index variable  

  ls = len(s,0) 
  i=0 
  while((s[i] == t[i]) && (i <ls)):
    if(cast(int, s[i]) == EOS):
      return(OK) 
    i=i+1 
 
  return(ERR) 
 
def int LibeStrev(char [*] s) :

  # LibeStrev reverse a string. 
  #
  # Parameters:
  #   s    : string
  #
  # Returns :
  #    ERR if an error occured.
  #    OK in all other cases.

  char c  # Temporaries and index variables  
  int i,j 

  i = 0 
  j = LibeStrlen(s)-1 
  while (i < j):
    c = s[i] 
    s[i] = s[j] 
    s[j] = c 
    i = i + 1 
    j = j - 1 
      
  return(OK) 
 
def int LibeStrcpy(char [*] s, char [*] t) :

  # LibeStrcpy copies a string.
  #
  # Parameters:
  #   s    : string to copy
  #   t    : string to contain the copy
  #
  # Returns :
  #    ERR if an error occured.
  #    OK in all other cases.
  #

  int ls  # String length    
  int i   # Index variable   

  ls = LibeStrlen(s) 
  if(ls == 0):
    return(OK) 
  if(len(t,0) <=ls) return(ERR) 

  for(i=0; i<=ls; i=i+1):
    t[i] = s[i] 
      
  return(OK) 
    
def int LibeStrcat(char [*] s, char [*] t) :
  
  #  LibeStrcat appends one string to another.
  #  t string.
  #
  # Parameters:
  #   s    : string to app   
  #   t    : string to app    to
  #
  # Returns :
  #    ERR if an error occured.
  #    OK in all other cases.
  #


  int ls, lt  # String lengths   
  int i       # Index variable   

  ls = LibeStrlen(s) 
  lt = LibeStrlen(t) 
  if(len(t,0) < (lt+ls)) return(ERR) 
  for(i=lt; i<ls+lt;i=i+1):
    t[i] = s[i-lt] 
 
  t[ls+lt] = cast(char, EOS) 

  return(OK) 

def char [*] LibeStradd(char [*] t, char [*] s) :
  #
  # LibeStradd add a string s to the string t and returns a new string.
  #
  # Parameters:
  #   s    : string to app   
  #   t    : string to add to
  #
  # Returns :
  #   String with the concatenation of s and t.

  int ls, lt  # String lengths
  char [*] r  # Output string
  int i       # Index variable

  ls = LibeStrlen(s) 
  lt = LibeStrlen(t) 
  r = new(char[lt+ls+1]) 
  
  for(i=0; i<lt; i=i+1):
    r[i] = t[i] 
 
  for(i=lt; i<ls+lt;i=i+1):
    r[i] = s[i-lt] 
 
  r[ls+lt] = cast(char, EOS) 

  return(r) 
 
def char [*] LibeStrsave(char [*] s) :

  #
  # LibeStrsave copies the string s
  #
  # Parameters:
  #   s    : string to copy
  #
  # Returns :
  # String with copy of s.
  # NULL string in case of error.
  #

  int l 
  char [*] tmp 
  tmp=NULL 
  l=0 

  #l=len(s,0) 
  l=LibeStrlen(s) 
  tmp = new(char [l+1]) 
  if(tmp != NULL):
    LibeStrcpy(s,tmp) 
  return(tmp) 
 
def int LibeIsalhpa(int c) : 

  # LibeIsalpha checks if c is alphabetic
  # 
  # Parameters:
  #   c    : character to check.
  #
  # Returns :
  #   OK if c is alphanumeric.
  #   ERR otherwise.
  #
  # If the argument is an alphabetic character in the range
  # a-z or A-Z, OK is returned. 
  # In all other cases is ERR returned.

  if(((c>='a') && (c<='z')) || ((c>='A') && (c<= 'Z'))):
    return(OK) 
  else:
    return(ERR) 
    
 
def int LibeIsdigit(int c) :

  # LibeIsdigit checks if a character is a digit
  # 
  # Parameters:
  #   c    : character to check.
  #
  # Returns :
  #   OK if c is a digit.
  #   ERR otherwise.
  #
  # If the argument is a digit in the range 0-9, OK is returned, 
  # else ERR is returned.

  if((c >= '0') && (c<= '9')):
    return(OK) 
  else:
    return(ERR) 
    
 
def int LibeIsalnum(int c) :

  # LibeIsalnum checks if character is alphanumeric
  # 
  # Parameters:
  #   c    : character to check.
  #
  # Returns :
  #   OK if c is alphanumeric.
  #   ERR otherwise.
  #
  # If the argument is an alphabetic character in the range
  # a-z or A-Z, OK is returned. 
  # Also, if the argument is in the range 0-9, OK is returned.
  # In all other cases is ERR returned.

  if(((c>='a')&&(c<= 'z')) || ((c>='A')&&(c<='Z'))):
    return(OK) 
  else if((c >= '0') && (c <= '9')):
    return(OK) 
  else:
    return(ERR) 

#
# Conversion and formatting routines.
 
def int LibeAtoi(char [*] s) :

  # LibeAtoi converts an ascii string to integer.
  # 
  # Parameters:
  #  s    : string to convert.
  #
  # Returns :
  #   converted integer
  #

  int sign   # Sign of integer  
  int i      # Index variable   
  int n      # return value     

  # Skip white  

  i=0 
  while((s[i]==cast(char, ' ')) || (s[i]==cast(char,NL)) \
                                || (s[i] == cast(char,TAB))):
    i=i+1 

  # Get and skip sign  
  if(s[i] == cast(char,'-')):
    sign=-1 
    i=i+1 
  else if(s[i] == cast(char,'+')):
    sign = 1 
    i=i+1 
  else:
    sign=1 
  
  # Convert the string to a number  

  for(n=0; LibeIsdigit(cast(int,s[i])); i=i+1):
    n = 10 * n + cast(int, s[i]) - '0' 

  return (sign * n) 
 
def int LibeItoa(int n, char [*] s) :
  
  # Convert integer to ascii
  # 
  # Parameters:
  #  int n : Integer to convert
  #  s     : string with converted number
  #
  # Returns :
  #   OK in all acses.
  #
  # LibeItoa converts the integer n to an 
  # ascii string. The output ascii string is
  # contained in the  s character array.
  # The return value is always  OK.

  int sign    # Sign of the integer  
  int i       # Index variable       
	
  if(s==NULL) return (ERR) 

  if((sign = n) < 0):  # record sign  
    n = -n 

  i = 0 	
  s[0] = cast(char, LibeMod(n, 10)+ZERO) 
  while((n = n/10) > 0):
    if((i+1) > (len(s,0)-1)) return(ERR) 
    s[i = i + 1] =  cast(char, LibeMod(n, 10) + ZERO)    
  
  if (sign < 0):
    if((i+1) > (len(s,0)-1)) return(ERR) 
    s[i= i+1] = cast(char, MINUS) 
 
  if((i+1) > (len(s,0)-1)) return(ERR) 
  s[i= i+1] = cast(char, EOS) 
  LibeStrev(s) 

  return (OK) 
    
 
def int LibeItoh(int n, char [*] s) :

  # LibeItoh converts integer n to hex in ascii
  # 
  # Parameters:
  #  int n : Integer to convert
  #  s     : string with converted number
  #
  # Returns :
  #   OK in all cases.
  #
  # LibeItoh converts the integer n to an 
  # ascii string with containg an hex number. The output ascii string is
  # contained in the  s character array.
  # The return value is always  OK.
  #

  int i, sign 
	
  if((sign = n) < 0): # record sign  
    n = -n 

  i = 0 	
  if(LibeMod(n, 16) <= 9):
    s[0] = cast(char, LibeMod(n,16)+ZERO)    
 
  else:
    s[0] = cast(char, LibeMod(n,16)+'a'-10) 
 
  while((n = n/16) > 0):
    if(LibeMod(n, 16) <= 9):
      s[i=i+1] = cast(char, LibeMod(n,16)+ZERO)    
 
    else:
      s[i=i+1] = cast(char, LibeMod(n,16)+'a'-10) 
  
  if (sign < 0) :
    s[i= i+1] = cast(char, MINUS) 
     
  s[i= i+1] = cast(char, EOS) 
  LibeStrev(s) 

  return (0) 
 
def float LibeAtof(char [*] s) :

  # 
  # Parameters:
  #  s     : string to convert
  #
  # Returns :
  #   Float value
  #
  # This routine returns a floating point value corresponding
  # to the ascii string  s.

  float val,power 
  int exponent, sign, esign, i 

  sign = 1 
  val = 0.0 
  power = 1.0 
  exponent = 0 
  esign = 1 
  i=0 
  while(s[i] == cast(char, ' ')):
    i = i + 1 
  if((s[i] == cast(char,'+'))||(s[i] == cast(char,'-'))):
    if(s[i] == cast(char,'-')) sign = -1 
    i = i + 1 
 
  while(LibeIsdigit(cast(int,s[i]))):
    val = 10.0*val + cast(float,cast(int, s[i])-'0') 
    i = i + 1 
   
  if(s[i] == cast(char,'.')):
    i = i + 1 
    while(LibeIsdigit(cast(int,s[i]))):    
      val = 10.0*val + cast(float,cast(int, s[i])-'0') 
      i = i + 1       
      power = 10.0 * power 
        
  if((s[i] == cast(char,'e'))||(s[i] == cast(char,'E'))):
    i = i + 1 
    if((s[i] == cast(char,'+'))||(s[i] == cast(char,'-'))):
      if(s[i] == cast(char,'-')) esign = -1 
      i = i + 1 
 
    while(LibeIsdigit(cast(int,s[i]))):    
      exponent = 10*exponent + cast(int, s[i])-'0' 
      i = i + 1       
 
  return(LibeFscale(cast(float,sign)*val/cast(float,power),esign*exponent)) 
    
def int LibeFtoaf(int mant, int nexp, int nfield, int nfrac, char [*] s) :

  # LibeFtoaf converts float to ascii with fixed point format.
  #
  # Parameters : 
  #  mant  : Mantissa 
  #  nexp  : Exponent
  #  nfield : Total widt of output field
  #  nfrac  : No of fractional digits
  #
  # Returns: 
  #   OK
  #


  char [*] t 
  int sign 
  int i,tp 
  int l 

  if(mant < 0):
   sign = -1   
   mant = -mant 
  else:
   sign = 1 

  if(len(s,0) < nfield+1):
    return(ERR) 

  l = nexp+1+1+nfrac 
  if(sign < 0) l=l+1 

  if(nfield < l):
    for(i=0; i<nfield; i=i+1):
      s[i] = cast(char,'*') 
    s[nfield] = cast(char,EOS) 
    return(ERR) 
  else: 
   tp = nfield-l 

  t = new(char[MAXFDIG+1]) 
  LibeItoa(mant,t) 

  for(i=0;  i<tp; i=i+1):
    s[i] = cast(char,' ') 

  if(nexp >= 0):
    if(sign == -1):
      s[tp] = cast(char,'-') 
      tp = tp+1 
 
    for(i=0; i<=nexp; i=i+1):
      s[i+tp] = t[i] 
        
    if(nfrac > 0):
      s[tp+nexp+1] = cast(char,'.') 
 
    for(i=0; i<nfrac; i=i+1):
      if(mant == 0):
        s[tp+nexp+1+1+i] = cast(char,'0') 
      else:
        s[tp+nexp+1+1+i] = t[nexp+1+i] 
 
    if(nfrac>0):
      s[tp+nexp+1+1+nfrac] = cast(char,EOS) 
    else:
      s[tp+nexp+1] = cast(char,EOS) 
 
  else:
    nexp= -nexp 
    if(sign == -1):
      s[tp] = cast(char,'-') 
      tp = tp+1 
 
    s[tp] = cast(char,'0') 
    s[tp+1] = cast(char,'.') 
    for(i=0; i< nexp-1; i=i+1):
      s[i+tp+2] = cast(char,'0') 
 
    for(i=0; i<nfrac-nexp+1; i=i+1):
      s[tp+2+i+nexp-1] = t[i] 
 
    s[tp+2+nfrac] = cast(char,EOS) 
      
  return(OK) 
    

def int LibeFtoae(int mant, int nexp, int nfield, int nfrac, char [*] s) :

  # LibeFtoae converts float to ascii with exponential format.
  #
  # Parameters : 
  #  mant  : Mantissa 
  #  nexp  : Exponent
  #  nfield : Total widt of output field
  #  nfrac  : No of fractional digits
  #
  # Returns: 
  #   OK
  #


  int tp 
  int sign 
  int i,l 
  char [*] t 

  if(mant < 0):
   mant = -mant 
   sign = -1   
  else :
   sign = 1 
  
  # Allocate space for a string of the type
  #  "sx.yyyyyyyeszz" where s is either '+' or '-', x
  #  is either 1-9 and yyyyyyy are ndigit digits.
  #  e is the string 'e', while zz are two digits representing
  #  the exponent 

  if(len(s,0) < (1+1+1+nfrac+1+1+2+1)):
    return(ERR) 

  t = new(char[len(s,0)]) 

  l = 1+1+nfrac+1+1+2+1   
  if(sign < 0) l=l+1 
   
  if(nfield < l):
    for(i=0; i<nfield; i=i+1):
      s[i] = cast(char,'*') 

    s[nfield] = cast(char,EOS) 
    return(ERR) 
  else : 
   tp = nfield-l 
  
  for(i=0; i<tp; i=i+1):
    s[i] = cast(char,' ') 
      
  LibeItoa(mant,t) 

  if(sign <0):
   s[tp] = cast(char,'-') 
   tp=tp+1 

  s[tp] = t[0] 
  s[tp+1] = cast(char,'.') 
  
  for(i=0; i<nfrac; i=i+1): 
    s[tp+2+i] = t[i+1] 
 
  s[tp+2+nfrac] = cast(char,EOS) 

  # Then convert and format the exponent  
  sign=1 
  if(nexp < 0): 
    sign=-1 
    nexp=-nexp 
      
  LibeStrcat("e",s) 
  if(sign > 0):
    LibeStrcat("+",s)   
  else:
    LibeStrcat("-",s)   

  LibeItoa(nexp,t)  
  if(LibeStrlen(t)==1):
    LibeStrcat("0",s) 

  LibeStrcat(t,s) 
  delete(t) 
  return(OK) 
 
def int LibeFtoa(float f, char [*] fmt, char [*] s) :

  # LibeFtoa routine converts a floating point number into a string.
  #
  # Parameters : 
  #  f      : float number
  #  char   : Format string  
  #  s      : Output string
  #
  # Returns: 
  #   ERR in case of error
  #   OK otherwise.
  #
  # If The first character in the format string
  # is 'g' the format is set automatic. 
  #
  # If the first character of the format string is not 'g' 
  # it most consist of two numbers separated by a '.' followed 
  # by either 'f' or 'g'.
  #  
  # The first number is the total width
  # of the field to be printed.
  # The number after the period is the number of fractional
  # digits. 
  # The last character selects either the 'f' (fixed point) format
  # or the 'g' (exponential) format.
  #
  # Examples for the number 3.14:
  #   'g'    prints 3.14e+00
  #   '4.2f' prints 3.14
  #   '8.2g' prints 3.14e+00
  
  
  int nexp, mant 
  int c,p,q 
  int l 
  int mode 
  int ndigit 
  int nfield,nfrac 

  if(len(s,0) <len(fmt,0)):
    return(ERR) 

  l = len(fmt,0)-2 
  p = 0 
  q = 0 

  # Parse the format string  
  c = cast(int,fmt[p]) 

  if(c == 'g'):               
    mode = 'g' 
  else:
    if(LibeIsdigit(c)==OK):
      while(LibeIsdigit(c)==OK): 
        s[q] = fmt[p] 
        if((p = p+1) > l): 
          return ERR   
        q = q+1 
        c = cast(int,fmt[p]) 
      s[q] = cast(char,EOS) 
      nfield = LibeAtoi(s) 
    else:
      return(ERR) 
    
    if(c != '.'):
      return(ERR) 
  
    if((p = p+1) > l): 
     return ERR   
    c = cast(int,fmt[p]) 

    q=0 
    if(LibeIsdigit(c)==OK):
      while(LibeIsdigit(c)==OK): 
        s[q] = fmt[p] 
        if((p = p+1) > l): 
          return ERR   
        q = q+1 
        c = cast(int,fmt[p]) 
      s[q] = cast(char,EOS) 
      nfrac = LibeAtoi(s) 
    else:
      return(ERR) 

    if(c == 'f'):
      mode = 'f' 
    else if(c == 'e'):
      mode = 'e' 
    else :
      return(ERR) 

  # Do the appropriate formating  
     
  if(mode == 'g'):
    nfrac = LibeGetmaxdig(f) 
    nfield = 1+1+1+1+nfrac+1+1+2 
    ndigit = nfrac+1 
    mant = LibeGetfman(f,ndigit) 
    nexp = LibeGetfexp(f) 
    LibeFtoae(mant, nexp, nfield, nfrac, s) 
 
  else if(mode == 'e'):
    ndigit = nfrac+1 
    mant = LibeGetfman(f,ndigit) 
    nexp = LibeGetfexp(f) 
    LibeFtoae(mant, nexp, nfield, nfrac, s) 
 
  else if(mode == 'f'):
    nexp = LibeGetfexp(f) 
    ndigit = nexp+nfrac+1  
    mant = LibeGetfman(f,ndigit) 
    LibeFtoaf(mant, nexp, nfield, nfrac, s) 
      
 
  return(OK) 
    

# I/O routines
#
# The I/O routines takes care of buffering a number of characters
# for both read and write to minimize the number of system 
# calls.
# The most important data structure in the I/O library is an 
# array of struct's of type struct LibeFdescr.
# The array base is the 
# buffer and bufsize is the size of the buffer.
# cnt is the number of characters currently stored in the buffer.
# ptr is the next available
# position in the buffer where a character can be stored.
# The flags readflg and  writflg indicates wether
# the file is open for reading or writing, while the 
# unbflg and errflg flags indicate wether the
# file is buffered and wether an error condition has occured. 
# The eoflg indicates wether
# an    -of-file condition has occured or not.
 
struct LibeFdescr :
     int  cnt       # Character count                    
     int  ptr       # next character position in buffer  
     int  bufsize   # The size of the buffer             
     char [*] base  # Reference to buffer                
     int  readflg   # = OK  File is open for reading     
     int  writflg   # = OK  File is open for writing     
     int  unbflg    # = OK  File is unbuffered           
     int  errflg    # = ERR  An error has occured         
     int  eoflg     # = OK    EOF has occured            
     int  fd        # File descriptor                    
    
 
const LIBEFMAX = 40 

# The array LibeFarr contains structures
# of type LibeFdescr as elements. The constant LIBEFMAX determines
# the maximum number of elements of the array, and this also
# limits the numbers of files to be opened simultaneously.
# The constant BUFSIZE is the size of the buffer holding
# characters before reading or writing to a file.
 
struct LibeFdescr [*] LibeFarr    # Array containing all
                                  # File descriptors          
const BUFSIZE = 1024              # Size of character buffer 
                                  # referenced by the base 
                                  # variable in the file 
                                  # descriptor structure      
 
char [*] LibeTmpstr   # String temporary   

# The LibeTmpstr array are used by various io- and
# formatting routines for temporary storage.

def int LibeIoinit() :

  # LibeIoinit initialize the i/o routines.
  # 
  # Parameters : None
  #
  # Returns:
  # OK
  #
  # LibeIoinit initialize the elements of the LibeFarr 
  # array, making the I/O routines ready for operation.
  # The routine is straightforward, note the setup of elements
  # number 2,3 and 4 corresponding to file descriptors
  # 0,1 and 2. These are normally the standard input, standard 
  # output and standard error file descriptors refered to by the
  # macros stdin,stdout and stderr.
  # The return value is ERR in case of error and 
  # OK in all other cases. In case of error, LibeErrno
  # is set to IOINITERR.
  # This routine also initializes the LibeTmpstr temporary
  # array.
  # The ptr field contains the index in the buffer 
  # array of the next character 
  # to be read, while the cnt field counts the number of
  # unread characters characters left in the buffer.
  # The first character in the buffer has index equal to zero,
  # while the last character has index equal to $bufsize -1$.

  int i  # Index variable  
  const MAXTMPSTR = 64   # Max size of string temporary  

  LibeFarr = new(struct LibeFdescr [LIBEFMAX]) 
  if(LibeFarr == NULL):
    LibeErrno = IOINITERR 
    return(ERR) 
 
  for(i=0; i<LIBEFMAX; i=i+1):
    LibeFarr[i].cnt = 0 
    LibeFarr[i].ptr = 0 
    LibeFarr[i].bufsize = 0 
    LibeFarr[i].base = NULL 
    LibeFarr[i].readflg = ERR 
    LibeFarr[i].writflg = ERR 
    LibeFarr[i].unbflg = ERR 
    LibeFarr[i].errflg  = OK 
    LibeFarr[i].eoflg   = ERR 
    LibeFarr[i].fd      = 0 
 
  # Index 0 and 1 are never used  

  LibeFarr[0].fd = -1 
  LibeFarr[0].readflg = OK 
  LibeFarr[1].fd = -1 
  LibeFarr[1].readflg = OK 
  
  # Set up the standard input, output
  # and standard error files     

  LibeFarr[2].fd = 0 
  LibeFarr[2].readflg = OK 
  LibeFarr[3].fd = 1 
  LibeFarr[3].writflg = OK 
  LibeFarr[4].fd = 2 
  LibeFarr[4].writflg = OK 

  # Allocate a string temporary  

  LibeTmpstr = new(char [MAXTMPSTR] ) 
  if(LibeTmpstr == NULL):
    LibeErrno = IOINITERR 
    return(ERR) 
 
  return(OK) 

def int LibeFlushbuff(int fp) :

  # 
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK   in all other cases.
  #
  # The LibeFlush routine flushes remaining characters held in
  # the buffer to file.
  # If a buffer has not beeen allocated, the routine
  # attempts to allocate a buffer.
  # The runtime routine RunWrite is then called to empty
  # the buffer. 
  # The return value is OK if everything went well, or
  # ERR in case of an error.

  int st 
  int size 
    
  if(LibeFarr[fp].writflg != OK):
     LibeErrstr = "file not open for writing\n" 
     LibeErrno = FNOWRITERR 
     return (ERR) 
 
  if(LibeFarr[fp].unbflg == OK):
    LibeFarr[fp].bufsize = 1 
  else:
    LibeFarr[fp].bufsize = BUFSIZE 

  if(LibeFarr[fp].base == NULL):
    size = LibeFarr[fp].bufsize 
    if((LibeFarr[fp].base = new(char [size])) == NULL):
      LibeErrstr = "can not allocate buffer" 
      LibeErrno = ALLOCERR 
      return ERR 
 
  LibeFarr[fp].ptr = 0 
  st = RunWrite(LibeFarr[fp].fd, LibeFarr[fp].cnt, LibeFarr[fp].base) 
  if(st != LibeFarr[fp].cnt):
    LibeFarr[fp].errflg = OK 
    LibeErrstr = "write error" 
    LibeErrno = WRITERR 
    LibeFarr[fp].cnt = 0 
    LibeFarr[fp].ptr = 0 
    return (ERR) 
  else:              
    LibeFarr[fp].cnt = 0 
    LibeFarr[fp].ptr = 0 
    return (OK) 
      

def int LibeFillbuff(int fp) :
  # LibeFillbuff reads in a chunk of data from a file.
  # 
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK   in all other cases.
  #
  # If a buffer has not beeen allocated, the routine
  # attempts to allocate a buffer.
  # The runtime routine RunRead is then called to fill up
  # the buffer. The return value is the first character
  # available for reading or EOF in case of an error condition.

  int size 
  int rval 

  if(LibeFarr[fp].readflg != OK):
    LibeErrstr = "file not open for reading\n" 
    LibeErrno = FNOWRITERR 
    return (EOF) 
      
  if(LibeFarr[fp].unbflg == OK):
    LibeFarr[fp].bufsize = 1 
  else:
    LibeFarr[fp].bufsize = BUFSIZE 
  if(LibeFarr[fp].base == NULL):
    size = LibeFarr[fp].bufsize 
    if((LibeFarr[fp].base = new(char [size])) == NULL):
      LibeErrstr = "Can not allocate buffer" 
      LibeErrno = ALLOCERR 
      return EOF 
 
  LibeFarr[fp].ptr = 0 
  LibeFarr[fp].cnt = RunRead(LibeFarr[fp].fd, LibeFarr[fp].bufsize, \
                             LibeFarr[fp].base) 
  if(LibeFarr[fp].cnt <= 0):
    if(LibeFarr[fp].cnt == EOF):
      LibeFarr[fp].eoflg = OK 
      rval = EOF 
    else:
      LibeFarr[fp].errflg = OK 
      LibeErrstr = "read error" 
      LibeErrno = READERR 
      rval = EOF 
               
    LibeFarr[fp].cnt = 0 
    return (rval) 
      
  LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1 
  LibeFarr[fp].cnt = LibeFarr[fp].cnt - 1 
  return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr - 1]) 
    
def int LibeFlush(int fp) :     

  # The LibeFlush routine flushes remaining characters to file.
  # 
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK   in all other cases.
  #   The LibeFlush routine flushes remaining characters held in
  #   the buffer to file.
  #

  return(LibeFlushbuff(fp)) 
    
 
def int LibeOpen(char [*] name, char [*] mode) :

  # LibeOpen opens a file with name name. 
  # 
  # Parameters : 
  #   name : File name
  #   mode : "w","r" or "a".
  #
  # Returns:
  #   fd : File descriptor (small number)
  #   ERR  in case of error.
  #
  # LibeOpen opens a file with name name. The  mode
  # string is equal to either of "w", "r" or "a" which opens the 
  # file for reading, writing or app   ing.
  # The return value is a file descriptor of type int.
  # In case of an error, ERR is returned.
  # The routine searches the LibeFarr array for
  # an unused slot. If one is found, routines in the
  # runtime library (RunOpen, RunCreate) are used
  # to either open or create the file.
  # At the     of the routine the slot is marked as
  # opened for either reading or writing.
  # The routine will set the error variable LibeErrno
  # to  FDMODERR
  # in case of an illegal value of mode. If more than
  # LIBEFMAX files are opened, the error number is set to
  # FMAXERR. Whenever RunOpen or RunClose
  # reports a problem, the error number is set to  OPENERR. 

  int fd 
  int slot, i 
    
  # Check input for errors  
  if(mode[0] != cast(char, 'r')):  
    if(mode[0] != cast(char, 'w')): 
      if(mode[0] != cast(char, 'a')):
        LibeErrstr = "Unknown file mode\n" 
        LibeErrno=FMODEERR 
        return (ERR) 

  # Search for free slot  

  i = 0 
  slot = -1 
  while((slot <0 ) && (i < LIBEFMAX)):
    if((LibeFarr[i].readflg == ERR) && (LibeFarr[i].writflg == ERR)):
      slot = i 
    i = i + 1 

  # No slot found, too many files are open  

  if(slot < 0):
    LibeErrstr = "Too many open files\n" 
    LibeErrno=FMAXERR 
    return (ERR) 
     
  # Free slot found, open or create the file  

  if(cast(int, mode[0]) == 'w'):
    fd = RunCreate(name) 
  else if(cast(int, mode[0]) == 'a'):
    if((fd = RunOpen(name, mode)) == ERR):
      fd = RunCreate(name) 
    else:
      fd = RunOpen(name,mode) 
  else if(cast(int, mode[0]) == 'r'):
    fd = RunOpen(name,mode) 
  else:
    LibeErrstr = "Unknown file mode\n" 
    LibeErrno=FMODEERR 
    return(ERR)  

  # Unable to open file  

  if(fd == ERR):
    LibeErrstr = "Could not open file" 
    LibeErrno=OPENERR 
    return (ERR) 

  # Successfull open, store filedescriptor
  # obtained from RunOpen or RunCreate   

  LibeFarr[slot].fd = fd 
  LibeFarr[slot].cnt = 0 
  LibeFarr[slot].base = NULL 

  # Mark the slot as either opened for
  # reading or writing  

  if(cast(int, mode[0]) == 'r'):
    LibeFarr[slot].readflg = OK 
  else:
    LibeFarr[slot].writflg =  OK 
  return (slot) 

def int LibeClose(int fp) :

  # LibeClose closes file with filedescriptor fp.
  # 
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # In case of error is ERR returned, in case of
  # success is  OK returned.
  # The routine first flushes the buffer array pointed to by
  # buffer field,
  # to make sure no output is lost.
  # The RunClose function is then called to close the
  # file. If the file for some reason can not be closed, 
  # LibeErrno is set to CLOSERR.
  # Note that the errflg field is set to OK
  # when an error has occured.

  int fd 
  int stat 

  # Flush output buffer  

  if(LibeFarr[fp].base != NULL):
     LibeFlush(fp) 

  # Close the file  

  fd = LibeFarr[fp].fd 
  stat = RunClose(fd) 
  if(stat == ERR):
    LibeFarr[fp].errflg  = OK   # An error has occured                
    LibeErrstr = "Could not close file" 
    LibeErrno = CLOSERR 
    return (ERR) 

  # Clean up  

  LibeFarr[fp].cnt     = 0      # Characters left in buffer          
  LibeFarr[fp].ptr     = 0      # Next character position in buffer  
  LibeFarr[fp].bufsize = 0      # Buffer size                        
  if(LibeFarr[fp].base != NULL):# Deallocate buffer                  
    delete(LibeFarr[fp].base) 
      
  LibeFarr[fp].base    = NULL   # Pointer to buffer                  
  LibeFarr[fp].readflg = ERR    # = OK  File is open for reading     
  LibeFarr[fp].writflg = ERR    # = OK  File is open for writing     
  LibeFarr[fp].unbflg  = ERR    # = OK  File is unbuffered           
  LibeFarr[fp].errflg  = ERR    # = OK  An error has occured          
  LibeFarr[fp].eoflg   = ERR    # = OK    EOF has occured            
  LibeFarr[fp].fd = 0           # File descriptor                    
  return (OK) 
    
 
def int LibeGetc(int fp) :     

  # LibeGetc inputs a single character from a file.
  # 
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # The routine first check wether the cnt field is zero.
  # If this is the case LibeFillbuff is called to read
  # a chunk of data from the filesystem.
  # The return value of LibeFillbuff is the next available
  # character and is returned to the caller imediately.
  # If cnt is larger than zero, the character pointed to by
  # the ptr field is returned, and the  cnt field is
  # updated. ptr is advanced to point to the next available
  # character.

  if(LibeFarr[fp].cnt == 0):
    return(LibeFillbuff(fp)) 
  else:
    LibeFarr[fp].cnt = LibeFarr[fp].cnt - 1 
    LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1 
    return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr - 1]) 
      
 
def int LibeUngetc(int fp) : 

  # LibeUngetc pushes the last read character back onto the file.
  #
  # Parameters : 
  #   fp : File descriptor
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # A pushback of one character is guaranteed
  # to work.
  # The return value is the pushed back character.
  # The routine works by moving the ptr field one character
  # backwards, and increasing the number of characters stored
  # in the buffer by one (the cnt field).
  # When the last character in the buffer has been read, the
  # ptr field will be equal to the value of the bufsize
  #field, meaning that the ptr field contains a non-valid
  # index. (The last index in the buffer array is equal to $bufsize-1$.)
  # This makes some extra testing necessary. 

  # Some subtle interaction takes place between this routine,
  # the LibeGetc routine and the LibeFillbuff routine.
  # Imagine what happens when the last character in the buffer pointed 
  # has been read by the LibeGetc routine. The logical
  # action to perform would be to fill up the buffer imediately,
  # i.e. the LibeGetc routine should call
  # LibeFillbuff as soon as the cnt field reaches zero.
  # However, if LibeUngetc is called after the buffer 
  # has been filled, but before any characters have been read,
  # the last character could not be pushed back by increasing
  # ptr field. It would have been necessary 
  # to save pushback characters in seperate storage.
  # To avoid this 
  # the call to LibeFillbuff is delayed until the next
  # time LibeGetc attempts to read a character. In this way
  # is the last read character always present in the buffer.

  # Are we at the  EOF of a file ?  
  if(LibeFarr[fp].eoflg == OK): 
    return (EOF) 

  # Have any characters been read ?  

  if(LibeFarr[fp].cnt < LibeFarr[fp].bufsize):
    LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1 
    LibeFarr[fp].ptr = LibeFarr[fp].ptr - 1 
 
    # Is this the last character in the buffer ?  

    if(LibeFarr[fp].ptr == LibeFarr[fp].bufsize-1):
      return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr]) 
    else:
      return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr + 1]) 
  else:
    LibeErrstr = "Pushback error" 
    LibeErrno = PUSHERR 
    return (EOF) 
 

def int LibeGetw(int fp, char [*] text) :

  #
  # Parameters : 
  #   fp   : File descriptor
  #   text : String delimited by white space
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # LibeGetw reads in the next string delimited by white space
  # into the text array. 
  # The return value is normally equal to OK, but an ERR
  # is returned in case of read errors, or in case the text
  # array is too small.

  int p 
  int ch 
  int lim 
  
  lim = len(text,0) 
  p = 0 
  LibeClearerr() 
  while(((ch=LibeGetc(fp)) == SPACE) || (ch == TAB) || (ch == NL)):
    p = 0 
  LibeUngetc(fp) 
  while(((ch = LibeGetc(fp))!= EOF) && (p < lim)):
    if((ch == SPACE) || (ch == TAB) || (ch == NL)):
      LibeUngetc(fp) 
      text[p] = cast(char, EOS)          
      return(OK) 
    else:
      text[p] = cast(char, ch)  
      p = p + 1 
    
  if(p >= lim):
    return(ERR) 
      
 
  else if(ch == EOF):
    return(EOF) 
  else:
    return(OK) 
    
 
def int LibePutc(int fp, int c) :

  #
  # Parameters : 
  #   fp : File descriptor
  #   c  : Character to write
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # LibePutc writes a single character to a file with the
  # fp EFILE reference. The return value is 
  # OK if everything went well, and ERR if an
  # error condition occured.
  # The routine first check whether the  cnt field is 
  # equal to the size of the buffer. 
  # If this is the case LibeFlushbuff is called to write
  # a chunk of data to the filesystem.
  # If cnt is smaller than bufsize, the character pointed to by
  # the ptr field is returned, and the cnt field is
  # updated. ptr is advanced to point to the next available
  # character.

  int rval 

  if(LibeFarr[fp].cnt == 0) LibeFlushbuff(fp)     
 
  if(LibeFarr[fp].cnt == LibeFarr[fp].bufsize):
    rval = LibeFlushbuff(fp) 
    LibeFarr[fp].base[LibeFarr[fp].ptr] = cast(char, c) 
    LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1 
    LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1 
    return (rval) 
  else:
     LibeFarr[fp].base[LibeFarr[fp].ptr] = cast(char, c) 
     LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1 
     LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1 
     return (OK) 
 
def int LibePuts(int fp, char [*] s) :      
 
  # LibePuts prints a string to a file.
  #
  # Parameters : 
  #   s  : String to print
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # The LibePuts routine outputs a string to a file
  # via the fp EFILE reference. 
  # The routine is uncomplicated and uses the LibePutc
  # routine to perform the output.
  # The return value is normaly zero, but equal to
  # ERR in case of write errors.

  int ls  # String lenght   
  int i   # Index variable  

  ls = len(s,0) 
  i = 0 
  while((cast(int,s[i]) != EOS) && (i<ls)):
    if(LibePutc(fp, cast(int,s[i])) == ERR):
      LibeErrstr = "write error" 
      LibeErrno = ERR  
      return (ERR) 
    else :
      i = i + 1 
 
  # Flush buffer
  LibeFlushbuff(fp) 

  return(OK) 
    
def int LibePuti(int fp, int ival) :      
  
  # The LibePuti routine prints an integer to file.
  # Parameters : 
  #   int  : integer to print.
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # The routine is uncomplicated and uses the LibePuts and The LibeItoa
  # routines to perform the output.
  # The LibeTmpstr is used for temporary storage.

  LibeItoa(ival,LibeTmpstr) 
  return (LibePuts(fp, LibeTmpstr)) 
    
 
 
def int LibePutf(int fp, float fval, char[*] form):     

  # LibePutf prints a float to a file
  #
  # Parameters : 
  #   fp    : File descriptor
  #   fval  : Float to print
  #   form  : String with floating point format.
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #
  # The form string formats the float number as follows:
  #  n.mf : prints n digits with m digits after the period. 
  #         Example "3.2f" will print "3.14"
  #           
  #  ng : prints float in exponential notation with n digits.
  #         Example "8g" will print "3.14e+02"
  #           
  # The routine is uncomplicated and uses the LibePuts and The LibeFtoa
  # routines to perform the output. The LibeTmpstr
  # used for temporary storage.

  LibeFtoa(fval,form, LibeTmpstr) 
  return (LibePuts(fp, LibeTmpstr)) 
    
 

def int LibePs(char [*] s):

  # LibePs prints a string to standard output.
  #
  # Parameters : 
  #   s  : String tow ritw
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #

  LibePuts(stdout,s)   
  return(OK) 
    
 

def int LibePi(int n):

  # LibePi prints an integer to standard output.
  #
  # Parameters : 
  #   n  : Integer to write
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #

  LibePuti(stdout,n)   
  return(OK) 
    
 

def int LibePf(float r):

  # LibePf prints a float to standard output.
  #
  # Parameters : 
  #   r  : Float to write
  #
  # Returns:
  #   ERR  in case of error.
  #   OK in all other cases.
  #

  LibePutf(stdout,r,"g")   
  return(OK) 
    
 
def int LibeRead(int fp, int n, char [*] buffer) :
  
  # LibeRead reads unbuffered from file.
  # Parameters : 
  #   fp     : File descriptor
  #   n      : No of chars to read
  #   buffer : Array with chars
  #
  # Returns:
  #   No of bytes read.
  #   EOF in case of reading past     of file
  #   ERR in case of error
  #
  # LibeRead is used for unbuffered read into the
  # character array buffer. Maximum  n characters
  # are read. Note that
  # the return value is the number of read characters, or
  # EOF in case of an error or an    -of-file condition.
  # ERR is returned in the case of file not open for reading,
  # the buffer array is too small, or in case of an unspecified 
  # error. 
  # Use the LibeGeterrstr routine to print the error message.
  #

  int rval  # Return value  

  if(LibeFarr[fp].readflg != OK):
    LibeErrstr = "File not open for reading" 
    LibeErrno = FNOREADERR 
    return (EOF) 
 
  if(n > len(buffer,0)):
    LibeErrno = MEMORYERR 
    LibeErrstr = "The buffer array is too small" 
    return(ERR) 
 
  rval = RunRead(LibeFarr[fp].fd, n, buffer) 
  if(rval == EOF):
    LibeFarr[fp].eoflg = OK 
    rval = EOF 
 
  else if(rval == ERR):
    LibeFarr[fp].errflg = OK 
    LibeErrstr = "read error" 
    LibeErrno = ERR 
    LibeFarr[fp].errflg = ERR 
    rval = ERR 
      
               
  return (rval) 

 
def int LibeWrite(int fp, int n, char [*] buffer) :

  # LibeWrite writes unbuffered to file.
  #
  # Parameters :
  #   fp       : File descriptor
  #   n        : no of characters to write
  #   buffer   : data (char) to write   
  #
  # Returns    :
  #   No of chars written
  #   ERR in case of error.
  #
  # Returns:
  #   No of bytes written.
  #   ERR in case of error
  #
  # LibeWrite is used for unbuffered write from the
  # character array buffer. Maximum  n characters
  # are written. Note that
  # the return value is the number of written characters, or
  # ERR in case of an error.
  # ERR is returned in the case of file not open for reading,
  # the buffer array is too small, or in case of an unspecified 
  # write error error. 
  # Use the LibeGeterrstr routine to print the error message.
  #

  int rval 

  if(n > len(buffer,0)):
    LibeErrno = MEMORYERR 
    LibeErrstr = "The buffer array is too small" 
    return(ERR) 
      
 
  if(LibeFarr[fp].writflg != OK):
   LibeErrstr = "file not open for writing" 
   LibeErrno = FNOWRITERR 
   return (ERR) 
      
 
  rval = RunWrite(LibeFarr[fp].fd, n, buffer) 
  if(rval == ERR):
    LibeFarr[fp].errflg = OK 
    LibeErrstr = "write error" 
    LibeErrno = ERR 
    LibeFarr[fp].errflg = ERR 
    rval = ERR 
      
               
  return (rval) 
    
 
def int LibeSeek(int fp, int pos, int flag) :

  # LibeSeek positions the file pointer.
  # 
  # Parameters : 
  #   fp       : File descriptor
  #   pos      : Offset 
  #   flag     : =1  Offset from start
  #              =-1 Offset from    
  # Returns:
  # OK
  #
  int rval 

  rval = RunSeek(LibeFarr[fp].fd, pos, flag) 
  if(rval == ERR):
    LibeFarr[fp].errflg = OK 
    LibeErrstr = "Seek error" 
    LibeErrno = ERR 
    LibeFarr[fp].errflg = ERR 
    rval = ERR 
               
  return (rval) 
 
def int LibeIodelete() :

  # LibeIodelete closes all open files and deletes all buffers.
  # 
  # Parameters : None
  #
  # Returns:
  # OK
  #

  int stat 
  int fd 
  int i 

  # Delete string temporary
  delete(LibeTmpstr) 

  # Flush all remaining buffers,
  # close files and delete buffers.
  # Standard input standard output and stderr
  # are not closed.
  stat=OK 
  for(i=0; i<LIBEFMAX; i=i+1):
    if(LibeFarr[i].base != NULL) :
      if(i > 4):        # Close file except 
                        # stdio,stdout and stderr
        fd = LibeFarr[i].fd 
        stat = RunClose(fd) 
        if(stat==ERR):
          LibeErrstr = "Could not close file" 
          LibeErrno = CLOSERR 
      stat=LibeFlush(i) 
      delete(LibeFarr[i].base) 
  # Delete array of structs to hold file state info
  delete(LibeFarr) 

  return(stat) 
    
# Blocks and Threads for GPU
#

# Globals for no of blocks and threads
int NBLOCKS 
int NTHREADS 

def int LibeSetnb(int nb) :
  
  # LibeSetnb sets the number of blocks
  #
  # Parameters : 
  #   nb : Number of blocks
  #
  # Returns :
  #   OK

  NBLOCKS = nb 
  return(OK) 
    
def int LibeSetnt(int nt) :

  # LibeSetnt sets the number of threads.
  #
  # Parameters : 
  #   nt : Number of threads
  #
  # Returns :
  #   OK

  NTHREADS = nt 
  return(OK) 

def int LibeGetnb() :

  # LibeGetnb gets the number of blocks
  #
  # Parameters : None
  #
  # Returns :
  #   Number of blocks

  return(NBLOCKS) 
    
def int LibeGetnt():

  # LibeGetnt gets the number of threads
  #
  # Parameters : None 
  #
  # Returns :
  #   Number of threads

  return(NTHREADS) 


def int LibeArrayex(int line, char [*] name, int ival, int index, int bound) :
               
  # LibeArrayex handles out of array bounds errors.
  #
  # Parameters:
  #   line : Line no
  #   name : Name of routine
  #   ival : Value of index
  #   index : dimension (0,1,2..)
  #   bound : Upper bound on ival  
  #
  # The LibeArray function is called whenever an array out
  # of bounds condition occurs.
  # The definition of input parameters is obvious.

  LibePuts(stderr,"Array index out of bond at line no: ") 
  LibePuti(stderr,line); LibePuts(stderr,"\n") 
  LibePuts(stderr,"Array name: ") 
  LibePuts(stderr, name); LibePuts(stderr,"\n") 
  LibePuts(stderr,"Index no: ") 
  LibePuti(stderr,index); LibePuts(stderr,"\n") 
  LibePuts(stderr,"Index value: ") 
  LibePuti(stderr,ival); LibePuts(stderr,"\n") 
  LibePuts(stderr,"Index bound: 0-") 
  LibePuti(stderr,bound-1); LibePuts(stderr,"\n") 
  LibeFlush(stderr) 

  RunExit()   # Routine defined in the run module.  
  return(OK) 
 
def int LibeSystem(char [*] cmd) :

  # LibeSystem executes a shell command
  #
  # Parameter
  #   cmd: Shell coomand string
  # 
  # Returns:
  # OK if no errors occured.
  # ERR otherwise.
  #

  int rval 
  
  rval = RunSystem(cmd) 

  return(rval) 
    
def int LibeInit() :

  # This is the initialization routine for the library.
  # LibeIoinit and LibeMathinit are
  # private routines defined in the section on Io and
  # math functions. LibeErrinit is defined in
  # the error section above.
  # Return values are OK if everything went well,
  # and ERR in all other cases.

  int rval 

  rval = LibeErrinit()   # Error initialization routine  
  rval = LibeIoinit() 
  rval = LibeMathinit() 
  rval = LibeSetnb(NB) 
  rval = LibeSetnt(NT) 
  return(rval) 
    

def int LibeExit() :

  # The LibeExit function closes all open files and then exits.
  #
  # Parameters: None
  #
  # Returns : None
  #
  # LibeExit aborts the program.

  RunExit() 
  return(OK) 
    
