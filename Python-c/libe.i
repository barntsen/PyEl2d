/*
\documentstyle{article}
\begin{document}
%
%         ***********************************************
%         *                                             *
           \title{Libe.i -- eps library interface}
%         *                                             *
%         ***********************************************
%
\author{B\o rge Arntsen}
\maketitle
\tableofcontents
\abstract{This file contain documentation and source code 
          for the interface of a small library meant 
          to support the eps  compiler.}
%===========================================================
\section{Introduction}
%===========================================================
First I define some usefull constants which are actually used
throughout all my code. {\tt OK} is the standard return value
when everything is fine, while {\tt ERR} is used to signal
an error. {\tt NULL} is equal to zero, and is mainly used
to indicate that a reference is referencing nothing.
{\tt EOF} is the end-of-file indicator, while
{\tt EOS} is the end-of-string mark.
{\tt NL} is the new line character, while
{\tt TAB} and {\tt SPACE} are the tab and space characters.
\begin{verbatim}
*/
const ZERO = 48;  /* Zero              */
const EOS  =  0;  /* End of string     */
const NULL =  0;  /* Null              */
const NL   = 10;  /* New line          */
const TAB  =  9;  /* Tab character     */
const SPACE = 32; /* Space             */
/*
\end{verbatim}
 I also define names for some common characters.
\begin{verbatim}
*/
const PLUS  = 43;       /* '+'  */
const MINUS = 45;       /* '-'  */
const STAR  = 42;      /* '*'  */
const LP    = 40;      /* '('  */
const RP    = 41;      /* ')'  */
const LB    = 91;      /* '['  */
const RB    = 93;      /* ']'  */
const LBR   = 123;     /* '{'  */
const RBR   = 125;     /* '}'  */
const COLON =  58;     /* ':'  */
const SEMICOLON = 59;  /* ';'  */
const COMMA = 44;      /* ','  */
const LT    = 60;      /* '<'  */
const GT    = 62;      /* '>'  */
const SLASH = 47;      /* '/'  */
const BSLASH = 92;     /* '\'  */
const ADRESS = 38;     /* '&'  */
const ASSIGN = 61;     /* '='  */
const VBAR   = 124;    /* '|'  */
const EXLAM  = 33;     /* '!'  */
const POINT  = 46;     /* '.'  */
const DFN    = 34;     /* '"'  */
const SFN    = 39;     /* '''  */
const HASH   = 35;     /* '#'  */
/*
\end{verbatim}
{\tt EFILE} is short hand for int, and only provided
because I may change this to some other type in
the future.
The macros {\tt stdin, stdout} and {\tt stderr} are shorthand
for the corresponding elements in {\tt LibeFarr} containing
entries for the standard input, the standard output and standard
error (2,3,4) file descriptors.
\begin{verbatim}
*/
const stdin = 2;   /* Standard  input   */
const stdout= 3;   /* Standard  output  */
const stderr= 4;   /* Standard  error   */
/*
\end{verbatim}
%============================================================
\section{Error handling}
%============================================================
\begin{verbatim}
*/
int LibeArrayex(int line, char [*] name, int ival, 
               int index, int bound){}
int LibeClearerr(){}
int LibeGeterrno(){}
char [*] LibeGeterrstr(){}
/*
\end{verbatim}
The normal return value for functions in this library is 
{\tt OK}, signaling that everything went well and the call
was successfull.
If an error occured this is signaled by returning the
value {\tt ERR} except if otherwise is noted. 
Further information is obtained by 
calling {\tt LibeGeterrno} which returns an error number.
At the moment the following errors are defined
\begin{verbatim}
*/
const OK  =  1;     /* No error                        */
const ERR =  0;     /* An error occured                */
const EMPTY =  2;   /* No information                  */
const EOF   = -1;   /* End-of-file                     */
const IOINITERR = -100; /* Io could not be initialized  */ 
const DOMAINERR = -101;/* Math domain error            */     
const RANGERR   = -102;/* Math range error             */
const FMODEERR  = -103;/* Unknown file mode            */ 
const FMAXERR   = -104;/* Too many open files          */
const OPENERR   = -105;/* Could not open file          */
const CLOSERR   = -106;/* Could not close file         */
const PUSHERR   = -107;/* Too many pushbacks           */
const MEMORYERR = -108;/* Buffer array is too small    */
const FNOREADERR= -109;/* File is not open for read    */
const FNOWRITERR= -110;/* File is not open for write   */
const READERR   = -111;/* Read error                   */
const WRITERR   = -112;/* Write error                  */
const ALLOCERR  = -113; /* Can not allocate buffer      */
/*
{\tt LibeArrayex} is called whenever an array out-of-bonds
condition is detected at run-time. 
The routine is normally supplied by the library, but
a user defined routine could be written and linked into
a program. 
{\tt line} is the line number where the exception occured,
{\tt name} is the array causing the exception, {\tt ival}
is the value of the offending index, {\tt index} is the
index dimension (0,1,2, ...) of the offending index, while
{\tt bound} is the upper bound of the offending index.
{\tt LibeGetterrno} returns the error number of the last
error.
%===========================================================
\section{Main -- the main function}
%===========================================================
This is the interface to the Main function which always starts
a program. The command line arguments are stored in a
character array as part of an array of structures.
\begin{verbatim}
*/
struct MainArg {char [*] arg;} 

int Main(struct MainArg [*] MainArgs){}
/*
\end{verbatim}
%===========================================================
\section{Initialization and exit}
%===========================================================
\begin{verbatim}
*/
int   LibeInit(){}               
int   LibeDelete(){}
int   LibeExit(){}
char[*] LibeGetenv(char [*] name){}
/*
\end{verbatim}
{\tt LibeInit} performs initialization of the
library and must be called before any other function.
In case of failure the routine returns {\tt ERR}
and sets the error flag to {\tt IOINITERR}. 
{\tt LibeExit} cleans up and exits and never returns.
{\tt LibeGetenv} returns the value of the
environment variable contained in {\tt name}.
LibeDelete cleans up and removes allocated memory.
%============================================================
\section{I/O-routines}
%============================================================
\begin{verbatim}
*/
int   LibeOpen(char [*] name, char [*] mode ){}   
int   LibeClose(int fp ){}   
int   LibeGetc(int fp ){}   
int   LibeUngetc(int fp ){}
int   LibeGetw(int fp, char [*] text ){}   
int   LibePs(char [*] s){}
int   LibePi(int n){}
int   LibePf(float r){}
int   LibePutf(int fp, float r, char [*] form){}  
int   LibePutc(int fp, int c){}     
int   LibePuts(int fp, char [*] s){} 
int   LibePuti(int fp, int ival){} 
int   LibeRead(int fp, int n, char [*] array){} 
int   LibeWrite(int fp, int n, char [*] array){} 
int   LibeSeek(int fp, int pos, int flag){} 
int   LibeFlush(int fp){} 
/*
\end{verbatim}
The {\tt LibeOpen} routine opens a file with name {\tt name}
for either reading ({\tt mode = 'r'}), writing ({\tt mode='w'})
or appending at the end of the file ({\tt mode='a'}).
The return value is a file descriptor to be used by the
other io-routines or, in case of error, {\tt ERR}.
The {\tt LibeClose} routine closes a file with descriptor
{\tt fp} and returns {\tt OK} or, in case of error, {\tt ERR}.
{\tt LibeGetc} returns a single character from a file with
descriptor {\tt fp} or {\tt EOF} in case an end-of-file
has been reached. Note that {\tt LibeGetc} returns {\tt EOF}
also in case an error has been detected. {\tt LibeGeterrno}
then returns {\tt OK} if an error did not occur, or in the
case of an error, the actual error number.
{\tt LibeUngetc} pushes the last read character back onto
the input stream. The return value is the pushed back
character or {\tt EOF} if an error condition has occured or
an end-of-condition has occured. The {\tt LibeGeterrno} must
be used to distinguish an error from an end-of-file condition.
{\tt LibeGetw} reads a ``word'', i.e. a string delimited by
white space ({\tt NL, SPACE, TAB}) into the {\tt text} array.
If the string is longer than the lenght of {\tt text}, the string
is truncated.
{\tt LibePutc}, {\tt LibePuts}, {\tt LibePuti} and 
{\tt LibePutf} outputs a single character, a string, an
integer and a floating point number, respectively.
%============================================================
\section{String routines}
%============================================================
A string is implemented as a an array of characters
terminated by {\tt EOS}.
\begin{verbatim}
*/
int LibeStrlen( char [*] s){}
int LibeStrcmp( char [*] s, char [*] t){}
int LibeStrev( char [*] s){}
char [*] LibeStrsave( char [*] s){}
int LibeStrcpy( char [*] s, char [*] t){}
int LibeStrcat( char [*] s, char [*] t){}
char [*] LibeStradd( char [*] t, char [*] s){}
int LibeIsalpha(int c){}
int LibeIsdigit(int c){}
int LibeIsalnum(int c){}
/*
The normal return values for these routines are {\tt OK} 
and {\tt ERR} in case of an error.
{\tt LibeStrlen} returns the length of the string 
argument {\tt s}. 
{\tt LibeStrcmp} returns {\tt OK} if the strings
{\tt s} and {\tt s} are equal, and {\tt ERR} 
otherwise. {\tt LibeStrev} reverses the characters
in {\tt s} and will always return {\tt OK}.
{\tt LibeStrcpy} copies the string contained in
{\tt s} into {\tt t}. The return value is
{\tt ERR} if the {\tt t} array is too small to
hold the copy of {\tt s}.
{\tt LibeStrcat} appends the
string contained in {\tt s} to {\tt t} and returns {\tt ERR}
if the {\tt t} array is too small to hold the resulting string.

The {\tt LibeIsalpha} routine
returns {\tt OK} if {\tt c} contains a character in the 
range a-z or A-Z, {\tt ERR} otherwise.
\end{verbatim}
%============================================================
\section{Conversion routines}
%============================================================
\begin{verbatim}
*/
int LibeAtoi( char [*] s){}
int LibeItoa( int n, char [*] s){}
int LibeItoh( int n, char [*] s){}
float LibeAtof(char [*] s){}
int LibeFtoa( float f, char [*] fmt, char [*] s){}
/*
\end{verbatim}
{\tt LibeAtoi} converts the ascii string contained
in {\tt s} into an integer, while {\tt LibeItoa} converts
the integer {\tt n} into an ascii-string stored in {\tt s}.
{\tt LibeItoh} converts the integer {\tt n} into 
a hexadecimal string contained in {\tt s}.
If the lenght of {\tt s} is too small to hold the string,
{\tt ERR} is returned. In all other cases is {\tt OK}
returned.

{\tt LibeAtof} converts the ascii string contained
in {\tt s} into a floating point number, while {\tt LibeFtoa} converts
the floating point number {\tt f} into an ascii-string stored in {\tt s}.
The format of the output string is controlled by the
If the lenght of {\tt s} is too small to hold the string,
{\tt ERR} is returned. In all other cases is {\tt OK}
returned.
%============================================================
\section{Floating point routines}
%============================================================
\begin{verbatim}
*/
const MFMIN = 1;  
const MFMAX = 2; 
const MEPSMIN = 3;
const MEPSMAX = 4; 
const MLOG2 =  5; 

float  LibeMach(int flag){}
float  LibeFabs(float x){}
float  LibeFscale2( float x, int n){}
float  LibeGetfman2( float x){}
int    LibeGetfexp2( float x){}
float  LibeFscale( float x, int n){}
int    LibeGetfman( float f, int maxdig){}
float  LibeGetffman( float f){}
int    LibeGetmaxdig( float f){}
int    LibeGetfexp( float f){}
/*
{\tt LibeMach} returns floating point characteristics
according to the value of the {\tt flag} argument.
A flag value of {\tt MFMIN} returns the minimum floating
point value, a value of {\tt MFMAX} returns the maximum
floating point value, a value of {\tt MEPSMIN} returns
the minimum floating point accuracy, while a value
of {\tt MEPSMAX} returns the maximum floating point
accuracy. A value of {\tt MLOG2} returns the logarithm
of 2.
{\tt LibeFabs} returns the absolute value of the floating
point value {\tt x}.
{\tt LibeScale2} returns the value $2^n x}$.
A floating point number $x$ can be written as $x = y 2^{-n}$, 
where $0.5 \gt y
\le 1$. {\tt LibeGetfman2} and {\tt LibeGetfexp2} computes
$y$ and $n$, respectively, when $x$ is known. 
The routines {\tt LibeScale}, {\tt LibeGetfman} and 
{\tt LibeGetfexp} computes the corresponding values when
the base is equal to 10.
\end{verbatim}
%============================================================
\section{Time functions
%============================================================
\begin{verbatim}
*/
float LibeClock(){}

// Threads and Blocks for GPU

// LibeSetnb sets the number of blocks
int LibeSetnb(int n){}
// LibeSetnt sets the number of threads
int LibeSetnt(int n){}

// LibeGetnb gets the number of blocks
int LibeGetnb(){}
// LibeGetnt gets the number of threads
int LibeGetnt(){}

/*
\end{verbatim}
%============================================================
\section{Elementary functions}
%============================================================
\begin{verbatim}
*/
int LibeMod( int n, int r){}
/*
\end{verbatim}
{\tt LibeMod} returns the r modulus of the integer n.
The modulus is computed by
%
\begin{eqnarray}
  mod(n,r) = n -(n/r)r \nonumber,
\end{eqnarray}
%
where the division is an integer division.
\begin{verbatim}
*/
float  LibeSqrt( float x){}
float  LibeLn( float x){}
float  LibeExp( float x){}
float  LibeSin( float x){}
float  LibeCos( float x){}
float  LibeTan( float x){}
float  LibeArcsin( float x){}
float  LibeArccos( float x){}
float  LibeArctan( float x){}
float  LibePow(float base, float exponent){}
/*
\end{verbatim}
*/
// LibeSystem executes a shell command
int LibeSystem(char [*] cmd){}

