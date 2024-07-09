/*
%============================================================
\section{Run.i -- eps interface for the run time library}
%============================================================
The run time library is written in C, so this is just
the eps interface. Most of the routines in the library
are unix system calls and math functions.
%============================================================
\section{RunMalloc -- Allocate memory}
%============================================================
\begin{verbatim}
*/
//char [*] RunMalloc(int nb){}
/*
\end{verbatim}
%============================================================
\section{RunFree -- Deallocate memory}
%============================================================
\begin{verbatim}
*/
//char [*] RunFree(int nb){}
/*
\end{verbatim}
%============================================================
\section{RunCreate -- create a file}
%============================================================
\begin{verbatim}
*/
int RunCreate(char [*] name){}
/*
\end{verbatim}
/*
%============================================================
\section{RunClock-- measure elapsed time}
%============================================================
\begin{verbatim}
*/
float RunClock(){}
/*
\end{verbatim}
%============================================================
\section{RunOpen -- open a file}
%============================================================
\begin{verbatim}
*/
int RunOpen(char [*] name, char [*] mode){}
/*
\end{verbatim}
/*
%============================================================
\section{RunClose -- close a file}
%============================================================
\begin{verbatim}
*/
int RunClose(int fd){}
/*
\end{verbatim}
/*
%============================================================
\section{RunRead -- read a file}
%============================================================
\begin{verbatim}
*/
int RunRead(int fd, int lbuff, char [*] buffer){}
/*
\end{verbatim}
{\tt RunRead} reads in {\tt lbuff} characters into the
{\tt buffer} array from a file with descriptor {\tt fd}.
The return value is the number of characters actually read.
If an error has occured {\tt ERR} will be returned.
/*
%============================================================
\section{RunWrite -- write a file}
%============================================================
\begin{verbatim}
*/
int RunWrite(int fd, int lbuff, char [*] buffer){}
/*
\end{verbatim}
{\tt RunWrite} writes {\tt lbuff} from the {\tt buffer} array.
The return value is the number of characters actually written.
{\tt ERR} is returned whenever an error has occured.
\end{verbatim}
%============================================================
\section{RunSeek -- Seek a file}
%============================================================
\begin{verbatim}
*/
int RunSeek(int fd, int pos, int flag){}
/*
\end{verbatim}
{\tt RunSeek} sets the file position to {\tt pos} bytes
relative to the start of the file (flag=0), to the current position
(flag=1) or relative to the end of the file (flag=2).
{\tt ERR} is returned whenever an error has occured.
Otherwise is the file position returned.
\end{verbatim}
%============================================================
\section{RunGetenv -- Get environment variable}
%============================================================
\begin{verbatim}
*/
char [*] RunGetenv(char [*] name){}
/*
\end{verbatim}
{\tt RunGetenv} returns the value of the environment
variable contained in the string {\tt name}.

// RunGetnt gets the number of threads from the
// environment variable NTHREADS.
int RunGetnt(){}

// RunGetnb gets the number of threads from the
// environment variable NTHREADS.
int RunGetnb(){}

%============================================================
\section{RunStrcmp -- compare strings}
%============================================================
\begin{verbatim}
*/
int RunStrcmp(char [*] s, char [*] t){}
/*
\end{verbatim}
%============================================================
\section{RunStrlen -- string length}
%============================================================
\begin{verbatim}
*/
int RunStrlen(char [*] s){}
/*
\end{verbatim}
%============================================================
\section{RunExit -- exit}
%============================================================
\begin{verbatim}
*/
int RunExit(){}
/*
\end{verbatim}
{\tt RunExit} cleans up and exits.
\end{document}
*/
// RunSystem
int RunSystem(char [*] cmd){}

