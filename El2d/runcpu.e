// The run time library is written in C.
// Most of the routines in the library
// are wrappers to unix system calls and the c library.

#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define OK   1
#define ERR  0
#define EOF (-1)


#define PERMS 0666
#define MAXRANK 1

typedef struct nctempchar1 { int d[MAXRANK]; char *a;} nctempchar1; 
struct MainArg {nctempchar1 *arg;};
struct nctempMainArg1 {int d[MAXRANK]; struct MainArg *a; };
int Main (struct nctempMainArg1 *MainArgs);
//
// main is the start up c function 
//
int main(int argc, char ** argv)
{
  // Interface to eps command line 
  struct nctempMainArg1 *cmlargs;
  int i;
  int rval;

  cmlargs = (struct nctempMainArg1*)malloc(sizeof(struct nctempMainArg1));
  cmlargs->a = (struct MainArg*) malloc(argc*sizeof(struct MainArg));
  cmlargs->d[0] = argc;
  for(i=0; i<argc; i=i+1){
    cmlargs->a[i].arg = (struct nctempchar1*)malloc(sizeof(struct nctempchar1));
    cmlargs->a[i].arg->a = argv[i]; 
    cmlargs->a[i].arg->d[0] = strlen(argv[i])+1;
  }
  rval = Main(cmlargs);
  if(rval == ERR) 
    rval = -1;
  else
    rval = 0;

  for(i=0; i<argc; i=i+1){
    free(cmlargs->a[i].arg); 
  }
  free(cmlargs->a);
  free(cmlargs);
  return(rval);
}

// Runmalloc is a wrapper to malloc
//
//   Parameters: nb
//     No of bytes to allocate
//
//   Returns:
//     Pointer to allocated memeory
//     or NULL in case of error.
//
void * RunMalloc(int nb)
{
    return((void *)malloc(nb));
}

// RunFree is a wrapper to free
//
// Returns always OK
//
int RunFree(void* p)
{
    free(p);
    return(OK);
}

// RunClock is an interface to C timing routines
//
// Return:
//   Time in seconds from the Unix epoch 
//
float RunClock()
{
  struct timespec tp;
  clock_gettime(CLOCK_MONOTONIC, &tp);
  return (float)((double)tp.tv_sec + (double)tp.tv_nsec*1.0e-9) ;
}

// RunCreate is a wrapper for the unix syscall create
//
// Parameters:
//   name: File name to create
//
// Returns:
//   File descriptor or ERR in case of error.
//
int RunCreate(nctempchar1* name)
{
  int rval;
  
  rval = creat(name->a, PERMS);
  if(rval == -1)
    return(ERR);
  else
    return(rval);
}
// RunOpen is a wrapper for unix syscall open
//
// Parameters:
//
//   name: File name
//   mode; File mode
//         which is one of 'r', 'w', 'a'. 
//
// Returns:
//   File descriptor
//
int RunOpen(nctempchar1 *name, nctempchar1 *mode)
{
  int rval;
  int flag;

  if(*(mode->a) == 'r')
    flag=O_RDONLY;
  else if(*(mode->a) == 'w')
    flag = O_WRONLY;
  else if(*(mode->a) == 'a')
    flag = O_RDWR | O_APPEND;
  else
    return(ERR);

  rval = open(name->a, flag);
  if(rval == -1)
    return(ERR);
  else
    return (rval);
}

// Runclose is a wrapper for unix syscall close
// 
// Parameters:
//   fd: File descriptor
//
// Returns:
//   Err in case of error, OK otherwise. 
int RunClose(int fd)
{
  int rval;
  
  rval = close(fd);
  if(rval == -1)
    return(ERR);
  else
    return(OK);
}
// {\tt RunRead} reads in {\tt lbuff} characters into the
// {\tt buffer} array from a file with descriptor {\tt fd}.
// The return value is the number of characters actually read.
// If an error has occured {\tt ERR} will be returned.
// If the end of a file is reached, {\tt EOF} will
// be returned.
// The {\tt read} routine is a standard UNIX system call.
//
int RunRead(int fd, int lbuff, nctempchar1 *buffer)
{
  int rval;
  rval = (int)read(fd, (void *)buffer->a, (size_t)lbuff);
  if(rval == 0){
    rval=EOF;
  }
  else if(rval == -1){
    rval = ERR;
  }

  return(rval);
}

// RunWrite writes lbuff from the buffer array
// into a file with file descriptor {\tt fd}.
// {\tt bufferdesc} is an integer array containg the length
// of the {\tt buffer} array.
// The return value is the number of characters actually written.
// {\tt ERR} is returned whenever an error has occured.
// The {\tt write} routine is a standard UNIX system call.
//
int RunWrite(int fd, int lbuff, nctempchar1 *buffer)
{
  int rval;
  if(lbuff==0)return(0);
  rval = (int)write(fd, (void *)buffer->a, (size_t)lbuff);
  if(rval == -1)rval=ERR;
  return(rval);
}


// RunSeek sets the position of the file pointer to {\tt pos} 
// bytes relative to the beginning of the file if flag equals 0, or
// relative to the current position if {\tt flag} equals 1 or relative 
// to the end of the file if {\tt flag} equals 2.
//
int RunSeek(int fd, int flag, int pos)
{
  int rval;
  int fflag;

  if(flag == 0)
    fflag=SEEK_SET;
  else if(flag == 1)
    fflag=SEEK_CUR;
  else if(flag == 2)
    fflag=SEEK_END;
  else
    return(-1);

  rval = (int)lseek(fd, (off_t) pos, fflag);
  if(rval == -1)return(-1);
  return(rval);
}


nctempchar1 *RunGetenv(nctempchar1* str)
{
  nctempchar1* rval=(nctempchar1*)malloc(sizeof(nctempchar1));
  rval->a=getenv(str->a); 
  rval->d[0] = strlen(rval->a);
  return(rval);
}

// RunExit is a wrapper around the unix syscall exit
//
// Returns:
//   OK always
//
int RunExit()
{
  exit(-1);
  return(OK);
}

// RunSystem is a wrapper around the C system routine
//
// Parameters:
//   cmd: Command line to execute
// 
// Returns:
//   0 in case of success, non-zero otherwise
//
int RunSystem (nctempchar1 *cmd)
{
  int rval;
  rval = system(cmd->a);
  return(rval);
}

// RunDate returns the current data
//
// Returns:
//   The return value is a string of the type
//   "Thu Sep 15 21:18:23 2016"
//
nctempchar1 *RunDate()
{ 

  time_t current_time;
  char* c_time_string;

  // Eps array descriptor
  nctempchar1 *date;

  // Allocate memeory for descriptor
  date=malloc(sizeof(nctempchar1));
  
  // Obtain current time.
  current_time = time(NULL);

  if (current_time == ((time_t)-1)) {
      return NULL;
  }

  // Convert to local time format. 
  c_time_string = ctime(&current_time);

  if (!c_time_string) {
    return NULL;
  }
  date->d[0]=strlen(c_time_string)+1;
  date->a=c_time_string;
  
  // Return eps array reference
  return(date);
}
  
