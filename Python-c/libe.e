// Libe
// The libe module is a small library to support the eps 
// compilers.

// The include file {\tt libe.i} contains the definition
// of the public interface of the library, while the include
// file {\tt m.i} contain machine specific constants.
// The runtime library {\tt run.e} declares it's public interface
//  in the {\tt run.i} include file.

include"libe.i"
include"m.i"
include"run.i"
//
// Error routines  
// The routines provided in this section reports
// error numbers and strings containing the error messages.
// The two global and private variables {\tt LibeErrno}
// and {\tt LibeErrstr} is used for communication between
// the routines. For definition of possible error numbers
// and strings see the {\tt libe.i} include file.
int      LibeErrno;   // Error return number 
char [*] LibeErrstr;  // Error message      


/*
%-----------------------------------------------------------
\subsection{LibeErrinit -- Initialize error routines}
%-----------------------------------------------------------
\begin{verbatim}
*/
int LibeErrinit(){} /* The prototype must always be supplied */
int LibeErrinit()
{
  LibeErrno = OK;
  LibeErrstr = NULL;
  return(OK);
}
/*
\end{verbatim}
%-----------------------------------------------------------
\subsection{LibeGeterrno -- return error no}
%-----------------------------------------------------------
{\tt LibeGeterrno} just returns the value of
{\tt LibeErrno}.
\begin{verbatim}
*/
int LibeGeterrno()
{
  return(LibeErrno);
}
/*
\end{verbatim}
%-----------------------------------------------------------
\subsection{LibeClearerr -- clear error no}
%-----------------------------------------------------------
{\tt LibeClearerr} simply clears the error number.
\begin{verbatim}
*/
int LibeClearerr()
{
  LibeErrno = OK;
  return(OK);
}
/*
\end{verbatim}
%-----------------------------------------------------------
\subsection{LibeGeterrstr -- return error string}
%-----------------------------------------------------------
{\tt LibeGeterrstr} reports the value of the error string.
\begin{verbatim}
*/
char [*] LibeGeterrstr()
{
  return(LibeErrstr);
}
/*
\end{verbatim}
%-----------------------------------------------------------
\subsection{LibeGetenv -- return environment variable}
%-----------------------------------------------------------
{\tt LibeGetenv} returns the value of the environment variable
contained in {\tt name}.
\begin{verbatim}
*/
char [*] LibeGetenv(char [*] name)
{
  return(RunGetenv(name));
}
/*
\end{verbatim}
%-----------------------------------------------------------
\subsection{LibeArrayex  -- Array exception}
%-----------------------------------------------------------
The LibeArray function is called whenever an array out
of bounds condition occurs.
The definition of input parameters is obvious.
The {\tt RunExit} routine is defined in the {run.i}
include file.
\begin{verbatim}
*/
int LibeArrayex(int line, char [*] name, int ival, 
               int index, int bound)
{
  LibePuts(stderr,"Array index out of bond at line no: ");
  LibePuti(stderr,line); LibePuts(stderr,"\n");
  LibePuts(stderr,"Array name: ");
  LibePuts(stderr, name); LibePuts(stderr,"\n");
  LibePuts(stderr,"Index no: ");
  LibePuti(stderr,index); LibePuts(stderr,"\n");
  LibePuts(stderr,"Index value: ");
  LibePuti(stderr,ival); LibePuts(stderr,"\n");
  LibePuts(stderr,"Index bound: 0-");
  LibePuti(stderr,bound-1); LibePuts(stderr,"\n");
  LibeFlush(stderr);

  RunExit();  /* Routine defined in run.e */
  return(OK);
}
/*
\end{verbatim}
%============================================================
\section{Initialization and exit}  
%============================================================
%------------------------------------------------------------
\subsection{LibeInit -- initialization}
%------------------------------------------------------------
This is the initialization routine for the library.
{\tt LibeIoinit} and {\tt LibeMathinit} are
private routines defined in the section on Io and
math functions. {\tt LibeErrinit} is defined in
the error section above.
Return values are {OK} if everything went well,
and {\tt ERR} in all other cases.
\begin{verbatim}
*/
int LibeIoinit(){}    /* Io initialization rutine    */
int LibeMathinit(){}  /* Math initialization routine */
int LibeInit()
{
  int rval;

  rval = LibeErrinit();  /* Error initialization routine */
  rval = LibeIoinit();
  rval = LibeMathinit();
  rval = LibeSetnb(NB);
  rval = LibeSetnt(NT);
  return(rval);
}

int LibeIodelete(){} //Clean up Io  
// LibeDelete removes allocated memory
int LibeDelete()
{
  LibeIodelete();
  return(OK);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeExit  -- exit function}
%---------------------------------------------------------------
The LibeExit function closes all open files and then exits.
\begin{verbatim}
*/
int LibeExit()
{
  RunExit();
  return(OK);
}
/*
%============================================================
\section{I/O--input and output}  
%============================================================
The I/O library takes care of buffering a number of characters
for both read and write to minimize the number of system 
calls.
The most important data structure in the I/O library is an 
array of struct's of type {\tt struct LibeFdescr}.
The array {\tt base} is the 
buffer and {\tt bufsize} is the size of the buffer.
{\tt cnt} is the number of characters currently stored in the buffer.
{\tt ptr} is the next available
position in the buffer where a character can be stored.
The flags {\tt readflg} and  {\tt writflg} indicates wether
the file is open for reading or writing, while the 
{\tt unbflg} and {\tt errflg} flags indicate wether the
file is buffered and wether an error condition has occured. 
The {\tt eoflg} indicates wether
an end-of-file condition has occured or not.
\begin{verbatim}
*/
struct LibeFdescr {
     int  cnt;      /* Character count                   */
     int  ptr;      /* next character position in buffer */
     int  bufsize;  /* The size of the buffer            */
     char [*] base; /* Reference to buffer               */
     int  readflg;  /* = OK; File is open for reading    */
     int  writflg;  /* = OK; File is open for writing    */
     int  unbflg;   /* = OK; File is unbuffered          */
     int  errflg;   /* = ERR; An error has occured       */ 
     int  eoflg;    /* = OK;   EOF has occured           */
     int  fd;       /* File descriptor                   */
}
const LIBEFMAX = 40;
/*
\end{verbatim}
The array {\tt LibeFarr} contains structures
of type {\tt LibeFdescr as elements}. The constant LIBEFMAX determines
the maximum number of elements of the array, and this also
limits the numbers of files to be opened simultaneously.
The constant BUFSIZE is the size of the buffer holding
characters before reading or writing to a file.
\begin{verbatim}
*/
struct LibeFdescr [*] LibeFarr;   /* Array containing all
                                     File descriptors         */
const BUFSIZE = 1024;             /* Size of character buffer 
                                     referenced by the base 
                                     variable in the file 
                                     descriptor structure     */
/*
\end{verbatim}
The following functions are for internal use only, and
are only called for flushing or filling character buffers.
\begin{verbatim}
*/
int   LibeFillbuff(int fp){}  /* Fill buffer               */
int   LibeFlushbuff(int fp){} /* Flush buffer              */
/*
\end{verbatim}
The argument to {\tt LibeFillbuff} and {\tt LibeFlushbuff}
are a variable of type EFILE.
\begin{verbatim}
*/
char [*] LibeTmpstr ; /* String temporary  */
/*
The {\tt LibeTmpstr} array are used by various io- and
formatting routines for temporary storage.
\end{verbatim}
%------------------------------------------------------------
\subsection{LibeIoinit -- Initialization}
%------------------------------------------------------------
{\tt LibeIoinit} initialize the elements of the {\tt LibeFarr} 
array, making the I/O routines ready for operation.
The routine is straightforward, note the setup of elements
number 2,3 and 4 corresponding to file descriptors
0,1 and 2. These are normally the standard input, standard 
output and standard error file descriptors refered to by the
macros {\tt stdin,stdout} and {\tt stderr}.
The return value is {\tt ERR} in case of error and 
{\tt OK} in all other cases. In case of error, {\tt LibeErrno}
is set to {\IOINITERR}.
This routine also initializes the {\tt LibeTmpstr} temporary
array.
The {\tt ptr field} contains the index in the {\tt buffer} 
array of the next character 
to be read, while the {\tt cnt} field counts the number of
unread characters characters left in the buffer.
The first character in the buffer has index equal to zero,
while the last character has index equal to $bufsize -1$.
\begin{verbatim}
*/
int LibeIoinit()
{
  int i; /* Index variable */
  const MAXTMPSTR = 64;  /* Max size of string temporary */

  LibeFarr = new(struct LibeFdescr [LIBEFMAX]);
  if(LibeFarr == NULL){
    LibeErrno = IOINITERR;
    return(ERR);
  }
  for(i=0; i<LIBEFMAX; i=i+1){
    LibeFarr[i].cnt = 0;
    LibeFarr[i].ptr = 0;
    LibeFarr[i].bufsize = 0;
    LibeFarr[i].base = NULL;
    LibeFarr[i].readflg = ERR;
    LibeFarr[i].writflg = ERR;
    LibeFarr[i].unbflg = ERR;
    LibeFarr[i].errflg  = OK;
    LibeFarr[i].eoflg   = ERR;
    LibeFarr[i].fd      = 0;
  }
 /* Index 0 and 1 are never used */

  LibeFarr[0].fd = -1;
  LibeFarr[0].readflg = OK;
  LibeFarr[1].fd = -1;
  LibeFarr[1].readflg = OK;
  
  /* Set up the standard input, output
     and standard error files    */

  LibeFarr[2].fd = 0;
  LibeFarr[2].readflg = OK;
  LibeFarr[3].fd = 1;
  LibeFarr[3].writflg = OK;
  LibeFarr[4].fd = 2;
  LibeFarr[4].writflg = OK;

 /* Allocate a string temporary */


  LibeTmpstr = new(char [MAXTMPSTR] );
  if(LibeTmpstr == NULL){
    LibeErrno = IOINITERR;
    return(ERR);
  }
  return(OK);
}

// LibeIodelete closes all 
// open files and deletes all buffers.
int LibeIodelete()
{
  int stat;
  int fd;
  int i;

  // Delete string temporary
  delete(LibeTmpstr);

  // Flush all remaining buffers,
  // close files and delete buffers.
  // Standard input standard output and stderr
  // are not closed.
  stat=OK;
  for(i=0; i<LIBEFMAX; i=i+1){
    if(LibeFarr[i].base != NULL)
    {
      if(i > 4)         // Close file except 
      {                 // stdio,stdout and stderr
        fd = LibeFarr[i].fd;
        stat = RunClose(fd);
        if(stat==ERR){
          LibeErrstr = "Could not close file";
          LibeErrno = CLOSERR;
        }
      }
      stat=LibeFlush(i);
      delete(LibeFarr[i].base);
    }
  }

  // Delete array of structs to hold file state info
  delete(LibeFarr);

  return(stat);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeOpen -- open a file} 
%---------------------------------------------------------------
{\tt LibeOpen} opens a file with name {\tt name}. The {\tt mode}
string is equal to either of "w", "r" or "a" which opens the 
file for reading, writing or appending.
The return value is a file descriptor of type {\tt int}.
In case of an error, {\tt ERR} is returned.

The routine searches the {\tt LibeFarr} array for
an unused slot. If one is found, routines in the
runtime library ({\tt RunOpen, RunCreate}) are used
to either open or create the file.
At the end of the routine the slot is marked as
opened for either reading or writing.
The routine will set the error variable {\tt LibeErrno}
to {\tt FDMODERR}
in case of an illegal value of {\tt mode}. If more than
{\tt LIBEFMAX} files are opened, the error number is set to
{\tt FMAXERR}. Whenever {\tt RunOpen} or {\tt RunClose}
reports a problem, the error number is set to {\tt OPENERR}. 
\begin{verbatim}
*/
int LibeOpen(char [*] name, char [*] mode)
{
  int fd;
  int slot, i;
    
  /* Check input for errors */

  if(mode[0] != cast(char, 'r'))  
    if(mode[0] != cast(char, 'w')) 
      if(mode[0] != cast(char, 'a')){
        LibeErrstr = "Unknown file mode\n";
        LibeErrno=FMODEERR;
        return (ERR);
      }

  /* Search for free slot */

  i = 0;
  slot = -1;
  while((slot <0 ) && (i < LIBEFMAX)){
    if((LibeFarr[i].readflg == ERR) && (LibeFarr[i].writflg == ERR))
      slot = i;
    i = i + 1;
  }

  /* No slot found, too many files are open */

  if(slot < 0){
    LibeErrstr = "Too many open files\n";
    LibeErrno=FMAXERR;
    return (ERR);
  }    
  /* Free slot found, open or create the file */

  if(cast(int, mode[0]) == 'w')
    fd = RunCreate(name);
  else if(cast(int, mode[0]) == 'a'){
    if((fd = RunOpen(name, mode)) == ERR)
      fd = RunCreate(name);
    else
      fd = RunOpen(name,mode);
  }
  else if(cast(int, mode[0]) == 'r'){
    fd = RunOpen(name,mode);
  }
  else{
    LibeErrstr = "Unknown file mode\n";
    LibeErrno=FMODEERR;
    return(ERR); 
  }

  /* Unable to open file */

  if(fd == ERR){
    LibeErrstr = "Could not open file";
    LibeErrno=OPENERR;
    return (ERR);
  }

  /* Successfull open, store filedescriptor
     obtained from RunOpen or RunCreate */ 

  LibeFarr[slot].fd = fd;
  LibeFarr[slot].cnt = 0;
  LibeFarr[slot].base = NULL;

  /* Mark the slot as either opened for
     reading or writing */

  if(cast(int, mode[0]) == 'r')
    LibeFarr[slot].readflg = OK;
  else
    LibeFarr[slot].writflg =  OK;
  return (slot);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeClose -- close a file} 
%---------------------------------------------------------------
A file with filedescriptor {\tt fp} is closed.
In case of error is {\tt ERR} returned, in case of
success is {\tt OK} returned.
The routine first flushes the buffer array pointed to by
the {\tt buffer} field,
to make sure no output is lost.
The {\tt RunClose} function is then called to close the
file. If the file for some reason can not be closed, 
{\tt LibeErrno} is set to {\tt CLOSERR}.
Note that the {\tt errflg} field is set to {\tt OK}
when an error has occured.
\begin{verbatim}
*/
int LibeClose(int fp)
{
  int fd;
  int stat;

  /* Flush output buffer */

  if(LibeFarr[fp].base != NULL){
     LibeFlush(fp);
  }

  /* Close the file */

  fd = LibeFarr[fp].fd;
  stat = RunClose(fd);
  if(stat == ERR){
    LibeFarr[fp].errflg  = OK;  /* An error has occured              */ 
    LibeErrstr = "Could not close file";
    LibeErrno = CLOSERR;
    return (ERR);
  }

  /* Clean up */

  LibeFarr[fp].cnt     = 0;     /* Characters left in buffer         */
  LibeFarr[fp].ptr     = 0;     /* Next character position in buffer */
  LibeFarr[fp].bufsize = 0;     /* Buffer size                       */
  if(LibeFarr[fp].base != NULL){/* Deallocate buffer                 */
    delete(LibeFarr[fp].base);
  }
  LibeFarr[fp].base    = NULL;  /* Pointer to buffer                 */
  LibeFarr[fp].readflg = ERR;   /* = OK; File is open for reading    */
  LibeFarr[fp].writflg = ERR;   /* = OK; File is open for writing    */
  LibeFarr[fp].unbflg  = ERR;   /* = OK; File is unbuffered          */
  LibeFarr[fp].errflg  = ERR;   /* = OK; An error has occured        */ 
  LibeFarr[fp].eoflg   = ERR;   /* = OK;   EOF has occured           */
  LibeFarr[fp].fd = 0;          /* File descriptor                   */
  return (OK);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeGetc -- get a character}  
%---------------------------------------------------------------
LibeGetc inputs a single character from a file with the
{\tt fp} EFILE reference.
The routine first check wether the {\tt cnt} field is zero.
If this is the case {\tt LibeFillbuff} is called to read
a chunk of data from the filesystem.
The return value of {\tt LibeFillbuff} is the next available
character and is returned to the caller imediately.
If {\tt cnt} is larger than zero, the character pointed to by
the {ptr} field is returned, and the {\tt cnt} field is
updated. {\tt ptr} is advanced to point to the next available
character.
\begin{verbatim}
*/
int LibeGetc(int fp)      /*  Return a character */
{
  if(LibeFarr[fp].cnt == 0)
    return(LibeFillbuff(fp));
  else{
    LibeFarr[fp].cnt = LibeFarr[fp].cnt - 1;
    LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1;
    return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr - 1]);
  }
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeUngetc -- push a character back}  
%---------------------------------------------------------------
LibeUngetc pushes the last read character back onto the file
referenced by {\tt fp}. A pushback of one character is guaranteed
to work.
The return value is the pushed back character.
The routine works by moving the {\tt ptr} field one character
backwards, and increasing the number of characters stored
in the buffer by one (the {\tt cnt} field).
When the last character in the buffer has been read, the
{\tt ptr} field will be equal to the value of the {\tt bufsize}
field, meaning that the {\tt ptr field} contains a non-valid
index. (The last index in the buffer array is equal to $bufsize-1$.)
This makes some extra testing necessary. 

Some subtle interaction takes place between this routine,
the {\tt LibeGetc} routine and the {\tt LibeFillbuff} routine.
Imagine what happens when the last character in the buffer pointed 
has been read by the {\tt LibeGetc} routine. The logical
action to perform would be to fill up the buffer imediately,
i.e. the {\tt LibeGetc} routine should call
{\tt LibeFillbuff} as soon as the {\tt cnt} field reaches zero.
However, if {\tt LibeUngetc} is called after the buffer 
has been filled, but before any characters have been read,
the last character could not be pushed back by increasing
the {\tt ptr} field. It would have been necessary 
to save pushback characters in seperate storage.
To avoid this 
the call to {\tt LibeFillbuff} is delayed until the next
time {\LibeGetc} attempts to read a character. In this way
is the last read character always present in the buffer.
\begin{verbatim}
*/
int LibeUngetc(int fp)      /*  Return a character */
{
  /* Are we at the end of a file ? */

  if(LibeFarr[fp].eoflg == OK) 
    return (EOF);

  /* Have any characters been read ? */

  if(LibeFarr[fp].cnt < LibeFarr[fp].bufsize){
    LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1;
    LibeFarr[fp].ptr = LibeFarr[fp].ptr - 1;
 
    /* Is this the last character in the buffer ? */

    if(LibeFarr[fp].ptr == LibeFarr[fp].bufsize-1){
      return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr]);
    }else
      return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr + 1]);
  }
  else{
    LibeErrstr = "Pushback error";
    LibeErrno = PUSHERR;
    return (EOF);
  }
}
/*
\end{verbatim}
%-----------------------------------------------------------------
\subsection{LibeGetw  -- get a word} 
%-----------------------------------------------------------------
{\tt LibeNgetw} reads in the next string delimited by white space
into the {\tt text} array. 
The return value is normally equal to {\tt OK}, but an {\tt ERR}
is returned in case of read errors, or in case the {\tt text}
array is too small.
\begin{verbatim}
*/
int LibeGetw(int fp, char [*] text)
{
  int p;
  int ch;
  int lim;
  
  lim = len(text,0);
  p = 0;
  LibeClearerr();
  while(((ch=LibeGetc(fp)) == SPACE) || (ch == TAB) || (ch == NL))
    p = 0;
  LibeUngetc(fp);
  while(((ch = LibeGetc(fp))!= EOF) && (p < lim)){
    if((ch == SPACE) || (ch == TAB) || (ch == NL)){
      LibeUngetc(fp);
      text[p] = cast(char, EOS);         
      return(OK);
    }
    else{
      text[p] = cast(char, ch); 
      p = p + 1;
    }
  }   
  if(p >= lim){
    return(ERR);
  }
  else if(ch == EOF){
    return(EOF);
  }
  else
    return(OK);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibePutc -- write a character}  
%---------------------------------------------------------------
LibePutc writes a single character to a file with the
{\tt fp} EFILE reference. The return value is 
{\tt OK} if everything went well, and {\tt ERR} if an
error condition occured.
The routine first check wether the {\tt cnt} field is 
equal to the size of the buffer. 
If this is the case {\tt LibeFlushbuff} is called to write
a chunk of data to the filesystem.
If {\tt cnt} is smaller than {\tt bufsize}, the character pointed to by
the {ptr} field is returned, and the {\tt cnt} field is
updated. {\tt ptr} is advanced to point to the next available
character.
\begin{verbatim}
*/
int LibePutc(int fp, int c)      /*  Write a character  */
{
  int rval;

  if(LibeFarr[fp].cnt == 0){LibeFlushbuff(fp);}
  if(LibeFarr[fp].cnt == LibeFarr[fp].bufsize){
    rval = LibeFlushbuff(fp);
    LibeFarr[fp].base[LibeFarr[fp].ptr] = cast(char, c);
    LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1;
    LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1;
    return (rval);
  }
  else{
     LibeFarr[fp].base[LibeFarr[fp].ptr] = cast(char, c);
     LibeFarr[fp].cnt = LibeFarr[fp].cnt + 1;
     LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1;
     return (OK);
  }
}

// LibePs prints a string to standard output.
int LibePs(char [*] s){
  LibePuts(stdout,s);  
  return(OK);
}

// LibePi prints an integer to standard output.
int LibePi(int n){
  LibePuti(stdout,n);  
  return(OK);
}

// LibePf prints a float to standard output.
int LibePf(float r){
  LibePutf(stdout,r,"g");  
  return(OK);
}

//
// LibePuts writes a string to a file.
// The {\tt LibePuts} routine outputs a string to a file
// via the {\tt fp} EFILE reference. 
// The routine is uncomplicated and uses the LibePutc
// routine to perform the output.
// The return value is normaly zero, but equal to
// {\tt ERR} in case of write errors.
int LibePuts(int fp, char [*] s)      
{
  int ls; /* String lenght  */
  int i;  /* Index variable */

  ls = len(s,0);
  i = 0;
  while((cast(int,s[i]) != EOS) && (i<ls)){
    if(LibePutc(fp, cast(int,s[i])) == ERR){
      LibeErrstr = "write error";
      LibeErrno = ERR; 
      return (ERR);
    }
    else
      i = i + 1;
  }
  // Flush buffer
  LibeFlushbuff(fp);
  return(OK);
}

/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibePuti -- write an integer}  
%---------------------------------------------------------------
The {\tt LibePuti} routine outputs an integer to a file
via the {\tt fp} EFILE reference. 
The routine is uncomplicated and uses the LibePuts and The LibeItoa
routines to perform the output.
The {\tt LibeTmpstr} is used for temporary storage.
\begin{verbatim}
*/
int LibePuti(int fp, int ival)      
{
  LibeItoa(ival,LibeTmpstr);
  return (LibePuts(fp, LibeTmpstr));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibePutf -- write a float}  
%---------------------------------------------------------------
The {\tt LibePutf} routine outputs a float to a file
via the {\tt fp} EFILE reference. 
The routine is uncomplicated and uses the LibePuts and The LibeFtoa
routines to perform the output. The {\tt LibeTmpstr} is
used for temporary storage.
\begin{verbatim}
*/
int LibePutf(int fp, float fval, char[*] form)      
{
  LibeFtoa(fval,form, LibeTmpstr);
  return (LibePuts(fp, LibeTmpstr));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeRead -- read array from file}  
%---------------------------------------------------------------
This routine is used for unbuffered read into the
character array {\tt buffer}. Maximum {\tt n} characters
are read. Note that
the return value is the number of read characters, or
{\tt EOF} in case of an error or an end-of-file condition.
\begin{verbatim}
*/
int LibeRead(int fp, int n, char [*] buffer)
{
  int rval; /* Return value */

  if(LibeFarr[fp].readflg != OK){
    LibeErrstr = "File not open for reading";
    LibeErrno = FNOREADERR;
    return (EOF);
  }
  if(n > len(buffer,0)){
    LibeErrno = MEMORYERR;
    LibeErrstr = "The buffer array is too small";
    return(ERR);
  }
  rval = RunRead(LibeFarr[fp].fd, n, buffer);
  if(rval == EOF){
    LibeFarr[fp].eoflg = OK;
    rval = EOF;
  }
  else if(rval == ERR){
    LibeFarr[fp].errflg = OK;
    LibeErrstr = "read error";
    LibeErrno = ERR;
    LibeFarr[fp].errflg = ERR;
    rval = ERR;
  }              
  return (rval);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeWrite -- write array to file}  
%---------------------------------------------------------------
This is the corresponding routine for unbuffered write.
\begin{verbatim}
*/
int LibeWrite(int fp, int n, char [*] buffer)
{
  int rval;

  if(n > len(buffer,0)){
    LibeErrno = MEMORYERR;
    LibeErrstr = "The buffer array is too small";
    return(ERR);
  }
  if(LibeFarr[fp].writflg != OK){
   LibeErrstr = "file not open for writing";
   LibeErrno = FNOWRITERR;
   return (ERR);
  }
  rval = RunWrite(LibeFarr[fp].fd, n, buffer);
  if(rval == ERR){
    LibeFarr[fp].errflg = OK;
    LibeErrstr = "write error";
    LibeErrno = ERR;
    LibeFarr[fp].errflg = ERR;
    rval = ERR;
  }              
  return (rval);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeSeek -- file positioning}  
%---------------------------------------------------------------
{\tt LibeSeek} 
\begin{verbatim}
*/
int LibeSeek(int fp, int pos, int flag)
{
  int rval;

  rval = RunSeek(LibeFarr[fp].fd, pos, flag);
  if(rval == ERR){
    LibeFarr[fp].errflg = OK;
    LibeErrstr = "Seek error";
    LibeErrno = ERR;
    LibeFarr[fp].errflg = ERR;
    rval = ERR;
  }              
  return (rval);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFlush -- Flush buffer to file}  
%---------------------------------------------------------------
The {\tt LibeFlush} routine flushes remaining characters held in
the buffer to file.
\begin{verbatim}
*/
int LibeFlush(int fp)      
{
  return(LibeFlushbuff(fp));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFillbuff -- allocate and fill input buffer} 
%---------------------------------------------------------------
{\tt LibeFillbuff} reads in a chunk of data from a file.
If a buffer has not beeen allocated, the routine
attempts to allocate a buffer.
The runtime routine {\tt RunRead} is then called to fill up
the buffer. The return value is the first character
available for reading or EOF in case of an error condition.
\begin{verbatim}
*/
int LibeFillbuff(int fp)
{
  int size;
  int rval;

  if(LibeFarr[fp].readflg != OK){
    LibeErrstr = "file not open for reading\n";
    LibeErrno = FNOWRITERR;
    return (EOF);
  }
  if(LibeFarr[fp].unbflg == OK)
    LibeFarr[fp].bufsize = 1;
  else
    LibeFarr[fp].bufsize = BUFSIZE;
  if(LibeFarr[fp].base == NULL){
    size = LibeFarr[fp].bufsize;
    if((LibeFarr[fp].base = new(char [size])) == NULL){
      LibeErrstr = "Can not allocate buffer";
      LibeErrno = ALLOCERR;
      return EOF;
    }
  }
  LibeFarr[fp].ptr = 0;
  LibeFarr[fp].cnt = RunRead(LibeFarr[fp].fd, LibeFarr[fp].bufsize, 
                             LibeFarr[fp].base);
  if(LibeFarr[fp].cnt <= 0){
    if(LibeFarr[fp].cnt == EOF){
      LibeFarr[fp].eoflg = OK;
      rval = EOF;
    }
    else{
      LibeFarr[fp].errflg = OK;
      LibeErrstr = "read error";
      LibeErrno = READERR;
      rval = EOF;
    }              
    LibeFarr[fp].cnt = 0;
    return (rval);
  }
  LibeFarr[fp].ptr = LibeFarr[fp].ptr + 1;
  LibeFarr[fp].cnt = LibeFarr[fp].cnt - 1;
  return cast(int, LibeFarr[fp].base[LibeFarr[fp].ptr - 1]);
}
/*
\end{verbatim}
%===============================================================
\subsection{LibeFlushbuff -- allocate and flush output buffer} 
%===============================================================
{\tt LibeFlushbuff} writes a chunk of data to a file. 
If a buffer has not beeen allocated, the routine
attempts to allocate a buffer.
The runtime routine {\tt RunWrite} is then called to empty
the buffer. 
The return value is OK if everything went well, or
ERR in case of an error.
\begin{verbatim}
*/
int LibeFlushbuff(int fp)
{
  int st;
  int size;
    
  if(LibeFarr[fp].writflg != OK){
     LibeErrstr = "file not open for writing\n";
     LibeErrno = FNOWRITERR;
     return (ERR);
  }
  if(LibeFarr[fp].unbflg == OK)
    LibeFarr[fp].bufsize = 1;
  else
    LibeFarr[fp].bufsize = BUFSIZE;

  if(LibeFarr[fp].base == NULL){
    size = LibeFarr[fp].bufsize;
    if((LibeFarr[fp].base = new(char [size])) == NULL){
      LibeErrstr = "can not allocate buffer";
      LibeErrno = ALLOCERR;
      return ERR;
    }
  }
  LibeFarr[fp].ptr = 0;
  st = RunWrite(LibeFarr[fp].fd, LibeFarr[fp].cnt, LibeFarr[fp].base);
  if(st != LibeFarr[fp].cnt){
    LibeFarr[fp].errflg = OK;
    LibeErrstr = "write error";
    LibeErrno = WRITERR;
    LibeFarr[fp].cnt = 0;
    LibeFarr[fp].ptr = 0;
    return (ERR);
  }
  else{              
    LibeFarr[fp].cnt = 0;
    LibeFarr[fp].ptr = 0;
    return (OK);
  }
}
// String routines 
//Here is a collection of simple routines for character and
//string handling. A string is implemented as a character
//array terminated by an EOS character.

// LibeStrlen returns the length of a string
// If the string is unterminated, the
// lenght of the array is returned.
int LibeStrlen(char [*] s)
{   
  int ls; /* Length of s    */
  int i;  /* Index variable */

  ls=len(s,0);
  i=0;
  while((cast(int,s[i]) != EOS) && (i<ls)){
    i=i+1;
  }
  return(i);
}

// LibeStrcmp compares to strings contained in the
// s and t arrays. If the two strings are
// equal OK is returned, in all other cases is
// ERR returned.
int LibeStrcmp(char [*] s, char [*] t)
{   
  int ls; /* Length of s    */
  int i; /* Index variable */

  ls = len(s,0);
  i=0;
  while((s[i] == t[i]) && (i <ls)){
    if(cast(int, s[i]) == EOS){
      return(OK);
    }
    i=i+1;
  }
  return(ERR);
}
/*
\end{verbatim}
%-------------------------------------------------------------
\subsection{LibeStrev  -- reverse string}
%-------------------------------------------------------------
This function reverses a string. 
\begin{verbatim}
*/
int LibeStrev(char [*] s)
{ 
  char c; /* Temporaries and index variables */
  int i,j;

  i = 0;
  j = LibeStrlen(s)-1;
  while (i < j){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    i = i + 1;
    j = j - 1;
  }
  return(OK);
}
/*
\end{verbatim}
%-------------------------------------------------------------
\subsection{LibeStrcpy  -- string copy}
%-------------------------------------------------------------
This function copies the {\tt s} string into the
{\tt t} string.
\begin{verbatim}
*/
int LibeStrcpy(char [*] s, char [*] t)
{ 
  int ls; /* String length   */
  int i;  /* Index variable  */

  ls = LibeStrlen(s);
  if(ls == 0)
    return(OK);
  if(len(t,0) <=ls) return(ERR);

  for(i=0; i<=ls; i=i+1){
    t[i] = s[i];
  }
  return(OK);
}
/*
\end{verbatim}
%-------------------------------------------------------------
\subsection{LibeStrcat  -- string concatenation}
%-------------------------------------------------------------
This function appends the {\tt s} string to the
{\tt t} string.
\begin{verbatim}
*/
int LibeStrcat(char [*] s, char [*] t)
{ 
  int ls, lt; /* String lengths  */
  int i;      /* Index variable  */

  ls = LibeStrlen(s);
  lt = LibeStrlen(t);
  if(len(t,0) < (lt+ls)) return(ERR);
  for(i=lt; i<ls+lt;i=i+1){
    t[i] = s[i-lt];
  }
  t[ls+lt] = cast(char, EOS);
  return(OK);
}

//Stradd add a string s to the string t and returns a new string.
char [*] LibeStradd(char [*] t, char [*] s)
{ 
  int ls, lt; // String lengths
  char [*] r; // Output string
  int i;      // Index variable

  ls = LibeStrlen(s);
  lt = LibeStrlen(t);
  r = new(char[lt+ls+1]);
  
  for(i=0; i<lt; i=i+1){
    r[i] = t[i];
  }
  for(i=lt; i<ls+lt;i=i+1){
    r[i] = s[i-lt];
  }
  r[ls+lt] = cast(char, EOS);
  return(r);
}
/*
\end{verbatim}
%-------------------------------------------------------------
\subsection{LibeStrsave  -- string save}
%-------------------------------------------------------------
This function copies the {\tt s} string into a safe place
and returns a reference to the new string.
\begin{verbatim}
*/
char [*] LibeStrsave(char [*] s)
{ 
  int l;
  char [*] tmp;
  tmp=NULL;
  l=0;

  //l=len(s,0);
  l=LibeStrlen(s);
  tmp = new(char [l+1]);
  if(tmp != NULL)
    LibeStrcpy(s,tmp);
  return(tmp);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeIsalpha -- test for alphabetic character} 
%---------------------------------------------------------------
If the argument is an alphabetic character in the range
a-z or A-Z, OK is returned. 
In all other cases is ERR returned.
\begin{verbatim}
*/
int LibeIsalpha(int c)
{   
  if(((c>='a') && (c<='z')) || ((c>='A') && (c<= 'Z')))
    return(OK);
  else
    return(ERR);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{LibeIsdigit -- test for decimal number} 
%---------------------------------------------------------------
If the argument is a digit in the range 0-9, OK is returned, 
else ERR is returned.
\begin{verbatim}
*/
int LibeIsdigit(int c)
{   
  if((c >= '0') && (c<= '9'))
    return(OK);
  else
    return(ERR);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeIsalnum -- test for alphanumeric character} 
%---------------------------------------------------------------
If the argument is an alphabetic character in the range
a-z or A-Z, OK is returned. 
Also, if the argument is in the range 0-9, OK is returned.
In all other cases is ERR returned.
\begin{verbatim}
*/
int LibeIsalnum(int c)
{   
  if(((c>='a')&&(c<= 'z')) || ((c>='A')&&(c<='Z')))
    return(OK);
  else if((c >= '0') && (c <= '9'))
    return(OK);
  else
    return(ERR);
}
/*
\end{verbatim}
%===============================================================
\section{Conversion} 
%===============================================================
This section contains conversion and formatting routines.
/*
\begin{verbatim}
*/
int LibeFtoaf(int mant, int nexp, int nfield, int nfrac, char [*] s){}
int LibeFtoae(int mant, int nexp, int nfield, int nfrac, char [*] s){}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeAtoi -- ascii to integer conversion} 
%---------------------------------------------------------------
{\tt LibeAtoi} returns an integer corresponding to the ascii 
character string {\tt s}. 
\begin{verbatim}
*/
int LibeAtoi(char [*] s)
{   
  int sign;  /* Sign of integer */
  int i;     /* Index variable  */
  int n;     /* return value    */

  /* Skip white */

  i=0;
  while((s[i]==cast(char, ' ')) || (s[i]==cast(char,NL)) 
                                || (s[i] == cast(char,TAB))){
    i=i+1;
  }

  /* Get and skip sign */

  if(s[i] == cast(char,'-')){
    sign=-1;
    i=i+1;
  }
  else if(s[i] == cast(char,'+')){
    sign = 1;
    i=i+1;
  }
  else
    sign=1;
  
  /* Convert the string to a number */

  for(n=0; LibeIsdigit(cast(int,s[i])); i=i+1){
    n = 10 * n + cast(int, s[i]) - '0';
  } 
  return (sign * n);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeItoa -- integer to ascii conversion} 
%---------------------------------------------------------------
{\tt LibeItoa} converts the integer n to an 
ascii string. The output ascii string is
contained in the {\tt s} character array.
The return value is always {\tt OK}.
\begin{verbatim}
*/
int LibeItoa(int n, char [*] s)
{   
  int sign;   /* Sign of the integer */
  int i;      /* Index variable      */
	
  if(s==NULL) return (ERR);

  if((sign = n) < 0){  /* record sign */
    n = -n;
  }
  i = 0;	
  s[0] = cast(char, LibeMod(n, 10)+ZERO);
  while((n = n/10) > 0){
    if((i+1) > (len(s,0)-1)) return(ERR);
    s[i = i + 1] =  cast(char, LibeMod(n, 10) + ZERO);   
  } 
  if (sign < 0){
    if((i+1) > (len(s,0)-1)) return(ERR);
    s[i= i+1] = cast(char, MINUS);
  }
  if((i+1) > (len(s,0)-1)) return(ERR);
  s[i= i+1] = cast(char, EOS);
  LibeStrev(s);
  return (OK);
}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection{itoh  -- Integer to hex}
%------------------------------------------------------------
\begin{verbatim}
*/
int LibeItoh(int n, char [*] s)
{ 
  int i, sign;
	
  if((sign = n) < 0)  /* record sign */
    n = -n;

  i = 0;	
  if(LibeMod(n, 16) <= 9){
    s[0] = cast(char, LibeMod(n,16)+ZERO);   
  }
  else{
    s[0] = cast(char, LibeMod(n,16)+'a'-10);
  }
  while((n = n/16) > 0){
    if(LibeMod(n, 16) <= 9){
      s[i=i+1] = cast(char, LibeMod(n,16)+ZERO);   
    }
    else{
      s[i=i+1] = cast(char, LibeMod(n,16)+'a'-10);
    }
  } 
  if (sign < 0)
    s[i= i+1] = cast(char, MINUS);
  s[i= i+1] = cast(char, EOS);
  LibeStrev(s);
  return (0);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{Atof -- Ascii to float conversion} 
%---------------------------------------------------------------
This routine returns a floating point value corresponding
to the ascii string {\tt s}.
\begin{verbatim}
*/
float LibeAtof(char [*] s)
{   
  float val,power;
  int exponent, sign, esign, i;

  sign = 1;
  val = 0.0;
  power = 1.0;
  exponent = 0;
  esign = 1;
  i=0;
  while(s[i] == cast(char, ' '))
    i = i + 1;
  if((s[i] == cast(char,'+'))||(s[i] == cast(char,'-'))){
    if(s[i] == cast(char,'-')) sign = -1;
    i = i + 1;
  }
  while(LibeIsdigit(cast(int,s[i]))){
    val = 10.0*val + cast(float,cast(int, s[i])-'0');
    i = i + 1;
  }  
  if(s[i] == cast(char,'.')){
    i = i + 1;
    while(LibeIsdigit(cast(int,s[i]))){    
      val = 10.0*val + cast(float,cast(int, s[i])-'0');
      i = i + 1;      
      power = 10.0 * power;
    }  
  } 
  if((s[i] == cast(char,'e'))||(s[i] == cast(char,'E'))){
    i = i + 1;
    if((s[i] == cast(char,'+'))||(s[i] == cast(char,'-'))){
      if(s[i] == cast(char,'-')) esign = -1;
      i = i + 1;
    }
    while(LibeIsdigit(cast(int,s[i]))){    
      exponent = 10*exponent + cast(int, s[i])-'0';
      i = i + 1;      
    }  
  }
  return(LibeFscale(cast(float,sign)*val/cast(float,power),esign*exponent));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFtoa -- Float to ascii conversion} 
%---------------------------------------------------------------
This routine converts a floating point number into a
string.
\begin{verbatim}
*/
int LibeFtoa(float f, char [*] fmt, char [*] s)
{   
  int nexp, mant;
  int c,p,q;
  int l;
  int mode;
  int ndigit;
  int nfield,nfrac;

  if(len(s,0) <len(fmt,0))
    return(ERR);

  l = len(fmt,0)-2;
  p = 0;
  q = 0;


  /* Parse the format string */

  c = cast(int,fmt[p]);

  if(c == 'g'){               
    mode = 'g';
  } 
  else{
    if(LibeIsdigit(c)==OK){
      while(LibeIsdigit(c)==OK){ 
        s[q] = fmt[p];
        if((p = p+1) > l) 
          return ERR;  
        q = q+1;
        c = cast(int,fmt[p]);
      }
      s[q] = cast(char,EOS);
      nfield = LibeAtoi(s);
    }
    else
      return(ERR);
    
    if(c != '.')
      return(ERR);
  
    if((p = p+1) > l) 
     return ERR;  
    c = cast(int,fmt[p]);

    q=0;
    if(LibeIsdigit(c)==OK){
      while(LibeIsdigit(c)==OK){ 
        s[q] = fmt[p];
        if((p = p+1) > l) 
          return ERR;  
        q = q+1;
        c = cast(int,fmt[p]);
      }
      s[q] = cast(char,EOS);
      nfrac = LibeAtoi(s);
    }
    else
      return(ERR);

    if(c == 'f'){
      mode = 'f';
    }
    else if(c == 'e'){
      mode = 'e';
    }
    else
      return(ERR);
  }

  /* Do the appropriate formating */
     
  if(mode == 'g'){
    nfrac = LibeGetmaxdig(f);
    nfield = 1+1+1+1+nfrac+1+1+2;
    ndigit = nfrac+1;
    mant = LibeGetfman(f,ndigit);
    nexp = LibeGetfexp(f);
    LibeFtoae(mant, nexp, nfield, nfrac, s);
  }
  else if(mode == 'e'){
    ndigit = nfrac+1;
    mant = LibeGetfman(f,ndigit);
    nexp = LibeGetfexp(f);
    LibeFtoae(mant, nexp, nfield, nfrac, s);
  }
  else if(mode == 'f'){
    nexp = LibeGetfexp(f);
    ndigit = nexp+nfrac+1; 
    mant = LibeGetfman(f,ndigit);
    LibeFtoaf(mant, nexp, nfield, nfrac, s);
  }
  return(OK);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFtoae -- Float to ascii with exponential notation} 
%---------------------------------------------------------------
\begin{verbatim}
*/
int LibeFtoae(int mant, int nexp, int nfield, int nfrac, char [*] s)
{   

  int tp;
  int sign;
  int i,l;
  char [*] t;

  if(mant < 0){
   mant = -mant;
   sign = -1;  
  }
  else
   sign = 1;
  
  /* Allocate space for a string of the type
    "sx.yyyyyyyeszz" where s is either '+' or '-', x
    is either 1-9 and yyyyyyy are ndigit digits.
    e is the string 'e', while zz are two digits representing
    the exponent 
  */

  if(len(s,0) < (1+1+1+nfrac+1+1+2+1))
    return(ERR);

  t = new(char[len(s,0)]);

  l = 1+1+nfrac+1+1+2+1;  
  if(sign < 0) l=l+1;
   
  if(nfield < l){
    for(i=0; i<nfield; i=i+1){
      s[i] = cast(char,'*');
    }
    s[nfield] = cast(char,EOS);
    return(ERR);
  }
  else 
   tp = nfield-l;
  
  for(i=0; i<tp; i=i+1){
    s[i] = cast(char,' ');
  }

  LibeItoa(mant,t);

  if(sign <0){
   s[tp] = cast(char,'-');
   tp=tp+1;
  }

  s[tp] = t[0];
  s[tp+1] = cast(char,'.');
  
  for(i=0; i<nfrac; i=i+1){ 
    s[tp+2+i] = t[i+1];
  }
  s[tp+2+nfrac] = cast(char,EOS);

  /* Then convert and format the exponent */

  sign=1;
  if(nexp < 0){ 
    sign=-1;
    nexp=-nexp;
  }

  LibeStrcat("e",s);
  if(sign > 0){
    LibeStrcat("+",s);  
  } 
  else
    LibeStrcat("-",s);  

  LibeItoa(nexp,t); 
  if(LibeStrlen(t)==1)
    LibeStrcat("0",s);

  LibeStrcat(t,s);
  delete(t);
  return(OK);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFtoaf -- Float to ascii with fixed point} 
%---------------------------------------------------------------
\begin{verbatim}
*/
int LibeFtoaf(int mant, int nexp, int nfield, int nfrac, char [*] s)
{   
  char [*] t;
  int sign;
  int i,tp;
  int l;

  if(mant < 0){
   sign = -1;  
   mant = -mant;
  }
  else
   sign = 1;

  if(len(s,0) < nfield+1){
    return(ERR);
  }

  l = nexp+1+1+nfrac;
  if(sign < 0) l=l+1;

  if(nfield < l){
    for(i=0; i<nfield; i=i+1){
      s[i] = cast(char,'*');
    }
    s[nfield] = cast(char,EOS);
    return(ERR);
  }
  else 
   tp = nfield-l;
  

  t = new(char[MAXFDIG+1]);
  LibeItoa(mant,t);

  for(i=0; i<tp; i=i+1){
    s[i] = cast(char,' ');
  }

  if(nexp >= 0){
    if(sign == -1){
      s[tp] = cast(char,'-');
      tp = tp+1;
    }
    for(i=0; i<=nexp; i=i+1){
      s[i+tp] = t[i];
    }
    if(nfrac > 0){
      s[tp+nexp+1] = cast(char,'.');
    }
    for(i=0; i<nfrac; i=i+1){
      if(mant == 0)
        s[tp+nexp+1+1+i] = cast(char,'0');
      else
        s[tp+nexp+1+1+i] = t[nexp+1+i];
    }
    if(nfrac>0){
      s[tp+nexp+1+1+nfrac] = cast(char,EOS);
    }else{
      s[tp+nexp+1] = cast(char,EOS);
    }
  }
  else{
    nexp= -nexp;
    if(sign == -1){
      s[tp] = cast(char,'-');
      tp = tp+1;
    }
    s[tp] = cast(char,'0');
    s[tp+1] = cast(char,'.');
    for(i=0; i< nexp-1; i=i+1){
      s[i+tp+2] = cast(char,'0');
    }
    for(i=0; i<nfrac-nexp+1; i=i+1){
      s[tp+2+i+nexp-1] = t[i];
    }
    s[tp+2+nfrac] = cast(char,EOS);
  }
  return(OK);
}
/*
\end{verbatim}
%===============================================================
\section{Floating point routines} 
%===============================================================
Here is a collection of routines for manipulating
floating point numbers.
%---------------------------------------------------------------
\subsection{LibeMach -- Get floating point constants} 
%---------------------------------------------------------------
This routine provides access to the machine floating
point characteristics. The routine simply returns the
constants defined in the {\tt m.i} include file. 
\begin{verbatim}
*/
float LibeMach(int flag)
{   
  if(flag == MFMIN)      /* Minimum floating point value */
    return(FMIN);
  else if(flag == MFMAX) /* Maximum floating point value */
    return(FMAX);
  else if(flag == MEPSMIN) /* Minimum floating point accuracy */
    return(EPSMIN);
  else if(flag == MEPSMAX) /* Maximum floating point accuracy */
    return(EPSMAX);
  else if(flag == MLOG2)   /* value of ln(2)                  */
    return(LOG2);
  else 
    return(cast(float,ERR));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeFabs -- Get absolute value of float} 
%---------------------------------------------------------------
\begin{verbatim}
*/
float LibeFabs(float x)
{   
  if(x < 0.0) 
    return(-x);
  else
    return(x);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeFscale2 -- compute floating point number} 
%-------------------------------------------------------------------
{\tt LibeGetfscale2} computes the value of $x 2^n$. 
\begin{verbatim}
*/
float LibeFscale2(float x, int n)
{   
  int i;
  float rval;

  if(n == 0)
    return(x);
  rval = 1.0;
  if(n > 0){
    for(i=0; i<n; i=i+1){
      rval = rval*2.0;
    }
  }
  else{
    n = -n;
    for(i=0; i<n; i=i+1){
      rval = rval*0.5;
    }
  }
  return(rval*x);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeGetfman2 -- Get mantissa of a floating point number} 
%-------------------------------------------------------------------
A floating point number $x$ can be written 
as $x = y 2^{-n}$, where $1/2 \gt y \le 1$. 
This routine computes the value of $y$ when $x$ is known.
\begin{verbatim}
*/
float LibeGetfman2(float x)
{   
  float absx;
  int n;

  absx = LibeFabs(x);
  n = 0;

  if(x == 0.0)
    return(0.0);

  while(absx < 0.5){
    n = n-1;
    absx = absx*2.0;
  }

  while(absx >= 1.0 ){
    n = n+1;
    absx = absx*0.5;
  }
  if(x < 0.0)
    return(-absx);
  else
    return(absx);
}
/*
\end{verbatim}
%--------------------------------------------------------------------
\subsection{LibeGetfexp2 -- Get exponent of a floating point number} 
%--------------------------------------------------------------------
A floating point number $x$ can be written 
as $x = y 2^{-n}$, where $1/2 \gt y \le 1$. 
This routine computes the value of $n$ when $x$ is known.
\begin{verbatim}
*/
int LibeGetfexp2(float x)
{   
  float absx;
  int n;

  absx = LibeFabs(x);
  n = 0;

  if(x == 0.0)
    return(0);

  while(absx < 0.5){
    n = n-1;
    absx = absx*2.0;
  }

  while(absx >= 1.0 ){
    n = n+1;
    absx = absx*0.5;
  }
  return(n);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeFscale -- compute floating point number} 
%-------------------------------------------------------------------
{\tt LibeGetfscale} computes the value of $x 10^n$. 
\begin{verbatim}
*/
float LibeFscale(float x, int n)
{   
  int i;
  float rval;

  rval = 1.0;
  if(n == 0)
    return(x);

  if(n > 0){
    for(i=0; i<n; i=i+1){
      rval = rval*10.0;
    }
  }
  else{
    n = -n;
    for(i=0; i<n; i=i+1){
      rval = rval*0.1;
    }
  }
  return(rval*x);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeGetfman -- Get mantissa of a floating point number} 
%-------------------------------------------------------------------
A floating point number $x$ can be written 
as $x = y 10^{-n}$, where $0.1 \gt y \le 1$. 
This routine computes the value of $y$ when $x$ is known.
\begin{verbatim}
*/
int LibeGetfman(float f, int maxdig)
{   
  int   sign; /* Sign of the float   */
  int   nexp; /* Exponent            */
  int n;
  int i;

  /* Record sign */

  if(f==0.0) return(0);

  sign=1;
  if(f< 0.0){  
    f=-f;
    sign=-sign;
  }

 /* Normalize such that  1.0 <= f < 10.0 */
 
  nexp = 0;	
  if(((f/10.0)+EPS) >= 1.0){
    while(((f/10.0)+EPS) >= 1.0){
      f = f/10.0;
      nexp = nexp+1; 
    } 
  }
  else if((f+EPS) < 1.0){
    while((f+EPS) < 1.0){
      f = f*10.0;
      nexp = nexp-1; 
    } 
  } 
 
 /* Convert the float to an integer with maxdig
    significant digits after the decimal point */

  for(i=0; i<maxdig-1; i=i+1){
    f=f*10.0;
  }
  n=cast(int,f+0.5);
  if(sign <0) n=-n;
  return(n);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeGetffman -- Get mantissa of a floating point number} 
%-------------------------------------------------------------------
A floating point number $x$ can be written 
as $x = y 10^{-n}$, where $0.1 \gt y \le 1$. 
This routine computes the value of $y$ when $x$ is known.
\begin{verbatim}
*/
float LibeGetffman(float f)
{   
  int   sign; /* Sign of the float   */
  int   nexp; /* Exponent            */

  /* Record sign */

  if(f==0.0) return(0.0);

  sign=1;
  if(f< 0.0){  
    f=-f;
    sign=-sign;
  }

 /* Normalize such that  1.0 <= f < 10.0 */
 
  nexp = 0;	
  if(((f/10.0)+EPS) >= 1.0){
    while(((f/10.0)+EPS) >= 1.0){
      f = f/10.0;
      nexp = nexp+1; 
    } 
  }
  else if((f+EPS) < 1.0){
    while((f+EPS) < 1.0){
      f = f*10.0;
      nexp = nexp-1; 
    } 
  } 
  return(f);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeGetmaxdig -- Get number of significant digits} 
%-------------------------------------------------------------------
\begin{verbatim}
*/
int LibeGetmaxdig(float f)
{   
  int   sign; /* Sign of the float   */
  int   nexp; /* Exponent            */
  int i;      /* Loop variable       */
  int loop;
  float r;

  /* Record sign */

  if(f==0.0) return(0);

  sign=1;
  if(f< 0.0){  
    f=-f;
    sign=-sign;
  }

 /* Normalize such that  1.0 <= f < 10.0 */
 
  nexp = 0;	
  if(((f/10.0)+EPS) >= 1.0){
    while(((f/10.0)+EPS) >= 1.0){
      f = f/10.0;
      nexp = nexp+1; 
    } 
  }
  else if((f+EPS) < 1.0){
    while((f+EPS) < 1.0){
      f = f*10.0;
      nexp = nexp-1; 
    } 
  } 
 
 /* Convert the float to an integer with maxdig
    significant digits after the decimal point */
  
  i=0;
  loop=1;
  while(loop){
    r=f-cast(float,cast(int,f));
    if(r < EPS)
      loop=0;
    else
      f=f*10.0;
    i=i+1; 
    if(i >= 10)loop=0; 
  }
  return(i);
}
/*
\end{verbatim}
%-------------------------------------------------------------------
\subsection{LibeGetfexp -- Get exponent of a floating point number} 
%--------------------------------------------------------------------
A floating point number $x$ can be written 
as $x = y 10^{-n}$, where $0.1 \gt y \le 1$. 
This routine computes the value of $n$ when $x$ is known.
\begin{verbatim}
*/
int LibeGetfexp(float f)
{   
  int   nexp;   /* Exponent             */

 /* Normalize such that  1.0 < f <= 10.0 */
 
  if(f==0.0) return(0);

  nexp = 0;	
  if(f <  0.0)
   f = -f;
  if(((f/10.0)+EPS) >= 1.0){
    while(((f/10.0)+EPS) >= 1.0){
      f = f/10.0;
      nexp = nexp+1; 
    } 
  }
  else if((f+EPS) < 1.0){
    while((f+EPS) < 1.0){
      f = f*10.0;
      nexp = nexp-1; 
    } 
  } 
  return(nexp);
}
/*
\end{verbatim}
%===============================================================
\section{Time functions} 
%===============================================================
This section contains time and date functions.
%---------------------------------------------------------------
\subsection{LibeClock -- elapsed time}
%---------------------------------------------------------------
{\tt LibeClock} returns the elapsed time since the program started.
\begin{verbatim}
*/
float LibeClock()
{
  return(RunClock());
}

//
// Blocks and Threads for GPU
//

// Globals for no of blocks and threads
int NBLOCKS;
int NTHREADS;

// LibeSetnb sets the number of blocks
int LibeSetnb(int nb)
{
  NBLOCKS = nb;
  return(OK);
}

// LibeSetnt sets the number of threads
int LibeSetnt(int nt)
{
  NTHREADS = nt;
  return(OK);
}

// LibeGetnb gets the number of blocks
int LibeGetnb()
{
  return(NBLOCKS);
}

// LibeGetnt gets the number of threads
int LibeGetnt()
{
  return(NTHREADS);
}


/*
\end{verbatim}
%===============================================================
\section{Math functions} 
%===============================================================
Here is a collection of math routines.
Most of these routines are translated from the math library
of the oberon-to-c compiler from th oo2c project.
Michael Griebling wrote the library.
The numerical approximations are taken from "Software manual for
elementary functions" by Cody and Waite and "Computer approximations"
by Hart et al.
\begin{verbatim}
*/
const LN2  =   0.693147180559945309417232;
const LN2INV =   1.4426950408889634073;
const SQRTHALF = 0.70710678118654752440;
const PI       = 3.1415926535897932384626433832795028841972;
const PIINV    = 0.31830988618379067154;
const PIHALF   = 1.57079632679489661923132;  
const PIBYFOUR = 0.78539816339744830962;

float LibeSincosmax; /* Max value for sin/cos argument   */
float LibeSincoslim; /* Min value for sin/cos argument   */
float LibeLnmax;     /* Max value for logarithm argument */
float LibeLnmin;     

float LibeSincos(float x, float y, float sign){}
float LibeAtan(float f){}
/*
\end{verbatim}
%--------------------------------------------------------------
\subsection{LibeMathinit -- initialization of math functions} 
%--------------------------------------------------------------
\begin{verbatim}
*/
int LibeMathinit()
{
  LibeSincosmax  = LibeFscale2(1.0, MBITS-1);
  LibeSincosmax = PI*LibeSqrt(LibeSincosmax);
  LibeSincoslim = 1.0/LibeFscale2(1.0, MBITS/2);
  LibeLnmax = LibeLn(FMAX);
  LibeLnmin = LibeLn(FMIN);
  return(OK);
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeSqrt -- Square root} 
%------------------------------------------------------------------
This is the routine computing an approximation to the square root
of a floating point number. 
\begin{verbatim}
*/
float LibeSqrt(float x)
{
  float f, yest, z;
  int n;

  const P0 = 0.41731;
  const P1 = 0.59016;

  if(x==0.0) return (0.0);
  if(x < 0.0){ 
    LibeErrno = DOMAINERR;
    LibeErrstr = "Sqrt input argument < 0 ";
    return(0.0);
  }

  /* Reduce x to the range 0 <x < 0.5 */
  f=LibeGetfman2(x);
  n=LibeGetfexp2(x);

  /* Initial estimate of square root  */
  yest = P0+P1*f;

  /* Perform two Newton iterations    */
  z = yest+f/yest;
  yest = 0.25*z+f/z;

  if(LibeMod(n,2) != 0){
    yest = yest*SQRTHALF;
    n = n+1;
  }
  return(LibeFscale2(yest, n/2));
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeLn -- natural logarithm} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeLn(float x)
{
  float f;    /* Mantissa of x */
  int   n;    /* Exponent of x */
  float z,zn,zd;
  float w,r;
  float xn;

  const A0 = -0.5527074855E+0; 
  const B0 = -0.6632718214E+1; 
  const c1 = 0.69335938;
  const c2 = -2.121944400546905827679E-4; 
  
  if(x <= 0.0){
    LibeErrno=DOMAINERR;
    LibeErrstr = "Ln input argument < 0 ";
    return(FMAX);
  }
  f=LibeGetfman2(x);
  n=LibeGetfexp2(x);

  if( f>SQRTHALF){ 
    zn = (f-0.5)-0.5;
    zd = f*0.5 + 0.5;
  } 
  else{
    zn = f-0.5; 
    zd = zn*0.5+0.5;
    n = n-1;
  }
 
  z = zn/zd;
  w = z*z;
  r = z + z*(w*A0/(w+B0)); 

  xn = cast(float,n);
  return((xn*c2+r)+xn*c1);
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeExp -- Exponential function} 
%------------------------------------------------------------------
The argument, {\tt x}, of the exponential function is divided into
a fractional part $g$ and an integer part $n$ according to
\begin{eqnarray}
  x = n + g. 
          \label{eq:exp1}
\end{eqnarray}
To compute $\exp(x)$ one must evaluate
%
\begin{eqnarray}
  y = \exp(x) = \exp(n+g) = \exp(n)\exp(x),
           \label{eq:exp2}
\end{eqnarray}
%
which can be rewritten as
%
\begin{eqnarray}
  y =  2^{n/\ln(2)}\exp(g).
           \label{eq:exp2}
\end{eqnarray}
%
\begin{verbatim}
*/
float LibeExp(float x)
{
  int n;  
  float g; 
  float z,p,q;
  float xn;
  float P0,P1,Q1;
  float rval; /* Return value */
 
  P0 = 0.24999999950E+0; 
  P1 = 0.41602886268E-2;
  Q1 = 0.49987178778E-1;
 
 if(x >= LibeLnmax){
   LibeErrno=RANGERR;
   LibeErrstr="Overflow in exp function";
   return(FMAX);
 }
 if(x < LibeLnmin){
   LibeErrno=RANGERR;
   LibeErrstr="Underflow in exp function";
   return(0.0);
 }
 n = cast(int, x*LN2INV);
 xn=cast(float,n);
 g = x - xn*LN2;
 z = g*g;
 p = (P1*z + P0)*g; 
 q = Q1*z+0.5;  
 rval = 0.5 +p/(q-p);
 return (LibeFscale2(rval, n+1));
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeSincos -- Sin and cosine function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeSincos(float x, float y, float sign)
{
  int n;
  float xn;
  float f,g;
  float R1,R2,R3,R4;

  R1 = -0.1666665668E+0;
  R2 =  0.8333025139E-2;
  R3 = -0.1980741872E-3;
  R4 =  0.2601903036E-5;
  
  if(y > LibeSincosmax){
    LibeErrno=RANGERR;
    LibeErrstr="Loss of accuracy in sin/cos function"; 
    return(0.0);
  }
  n = cast(int, y*PIINV+0.5); 
  xn =cast(float,n);
  if(LibeMod(n,2) != 0){
    sign = -sign;
  }

  x = LibeFabs(x);
  if(x != y){
    xn = xn - 0.5; 
  }
  f = LibeFabs(x)-xn*PI;  
  if(LibeFabs(f) < LibeSincoslim){
    return(sign*f);
  }
  g = f*f;
  g = (((R4*g+R3)*g+R2)*g+R1)*g;
  g = f+f*g;
  return(sign*g);
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeSin -- Sin function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeSin(float x)
{
  if(x < 0.0)
    return(LibeSincos(x, -x, -1.0));
  else
    return(LibeSincos(x, x, 1.0));
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeCos -- cos function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeCos(float x)
{
  return(LibeSincos(x, LibeFabs(x)+PIHALF, 1.0));
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeTan -- tan function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeTan(float x)
{
const TWOBYPI = 0.63661977236758134308;

  float P1,Q1,Q2;
  int n;
  float y, xn, f, xnum, xden, g;

  P1= -0.958017723E-1; 
  Q1= -0.429135777E+0; 
  Q2=  0.971685835E-2;

  y = LibeFabs(x);

  if (y > LibeSincosmax){
    LibeErrno = RANGERR;
    LibeErrstr = "Loss of accuracy in tan function";
    return(0.0);
  } 

  n = cast(int, x*TWOBYPI); 
  xn = cast(float,n);
  f = x-xn*PIHALF;
  
  if(LibeFabs(f)<LibeSincoslim){ 
    xnum = f; 
    xden = 1.0;
  }
  else{
    g = f*f; 
    xnum = P1*g*f+f; 
    xden = (Q2*g+Q1)*g+0.5+0.5;
  } 

  if(LibeMod(n,2)!=0){
    return(xden/(-xnum));
  }
  else{ 
    return(xnum/xden);
  }
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeAsincos-- Arcsine function} 
%-------------------------------------------------------------------
\begin{verbatim}
*/
float LibeArcsin(float x)
{
  float P1,P2,Q0,Q1;
  float y, g, r;
  float res;
  int i;

  P1=0.933935835E+0; P2=-0.504400557E+0;
  Q0=0.560363004E+1; Q1=-0.554846723E+1;

  y = LibeFabs(x);
  if( y> 0.5){
    i = 1;
    if( y> 1.0){ 
      LibeErrno=DOMAINERR;
      LibeErrstr="Absolute value of argument of arcsin > 1";
      return(FMAX);
    }

    /* reduce the input argument */

    g = (1.0-y)*0.5; 
    r=LibeSqrt(g); 
    r=-r;
    y=r+r; 
    
    /* compute approximation */

    r=((P2*g+P1)*g)/((g+Q1)*g+Q0);
    res=y+(y*r);
  }
  else{
    i=0;
    if( y<LibeSincoslim)
      res=y;
    else{
      g=y*y;

      /* compute approximation */

      g=((P2*g+P1)*g)/((g+Q1)*g+Q0);
      res=y+y*g;      
    }
  }

  if(i==1)
   res=PIBYFOUR+(PIBYFOUR+res);
  if(x <0.0) 
   res=-res;
  return(res);
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeArccos-- Arccos function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeArccos(float x)
{
  float P1,P2,Q0,Q1;
  float y, g, r;
  float res;
  int i;

  P1=0.933935835E+0; P2=-0.504400557E+0;
  Q0=0.560363004E+1; Q1=-0.554846723E+1;

  y = LibeFabs(x);
  if( y> 0.5){
    i = 0;
    if( y> 1.0){ 
      LibeErrno=DOMAINERR;
      LibeErrstr="Absolute value of argument of arccos out of range";
      return(FMAX);
    }

    /* reduce the input argument */

    g = (1.0-y)*0.5; 
    r=LibeSqrt(g); 
    r=-r;
    y=r+r; 
    
    /* compute approximation */

    r=((P2*g+P1)*g)/((g+Q1)*g+Q0);
    res=y+(y*r);
  }
  else{
    i=1;
    if( y<LibeSincoslim)
      res=y;
    else{
      g=y*y;

      /* compute approximation */

      g=((P2*g+P1)*g)/((g+Q1)*g+Q0);
      res=y+y*g;      
    }
  }

  if(x <0.0){
   if(i==0)
     res=PIHALF+(PIHALF+res);
   else
     res=PIBYFOUR+(PIBYFOUR+res);
  }   
  else{ 
    if(i==1)
      res=PIBYFOUR+(PIBYFOUR-res);
    else
     res=-res;
  }
  return(res);
}
/*
\end{verbatim}
%------------------------------------------------------------------
\subsection{LibeAtan-- Arctan function} 
%------------------------------------------------------------------
\begin{verbatim}
*/
float LibeAtan(float f)
{
const PIBYTHREE = 1.04719755119659774615;
const PIBYSIX   = 0.52359877559829887308;

  float rt32, rt3, a, P0, P1, Q0;
  int n; 
  float res,g;

  rt32=0.26794919243112270647;
  rt3=1.73205080756887729353;
  a=rt3-1.0;
  P0=-0.4708325141E+0; P1=-0.5090958253E-1; Q0=0.1412500740E+1;

  if( f>1.0){
    f=1.0/f; 
    n=2;
  }
  else
    n=0;
  
  /* check if f should be scaled */

  if( f>rt32){
    f=(((a*f-0.5)-0.5)+f)/(rt3+f); 
    n=n+1;
  } 

  /* check for underflow */

  if( LibeFabs(f)<LibeSincoslim)
   res=f;
  else{
    g=f*f; 
    res=(P1*g+P0)*g/(g+Q0); 
    res=f+f*res;
  } 
  if( n>1)
    res=-res;
  
  if(n==1)
    res=res+PIBYSIX;
  else if(n==2)
    res=res+PIHALF;
  else if(n==3)
    res=res+PIBYTHREE;
 
  return(res);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeArctan  -- Arctan function}
%---------------------------------------------------------------
\begin{verbatim}
*/
float LibeArctan(float x)
{
  float rval;

  if( x<0.0){
    rval=LibeAtan(-x);
    rval=-rval;
  }
  else
    rval=LibeAtan(x);

  return(rval);
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibePow  -- Power function}
%---------------------------------------------------------------
\begin{verbatim}
*/
float LibePow(float base, float exponent)
{
  return(LibeExp(exponent*LibeLn(base)));
}
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{LibeMod  -- modulus function}
%----------------------------------------------------------------
{\tt LibeMod} computes the r-modulus of the
integer {\tt n}.
The modulus is computed using the formula
%
\begin{eqnarray}
  n - (n/r)r \nonumber
\end{eqnarray}
%
where the division is an integer division.
\begin{verbatim}
*/
int LibeMod(int n, int r)
{ 
  if(r==0) return (n);
  return ( n - (n/r) * r );
}
// LibeSystem executes a shell command
int LibeSystem(char [*] cmd)
{
  int rval;
  
  rval = RunSystem(cmd);

  return(rval);
}  
