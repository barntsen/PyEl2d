#
# Run -- eps interface for the run time library
# The run time library is written in C, so this is just
# the eps interface. Most of the routines in the library
# are unix system calls and math functions.
 
#
# RunCreate -- create a file
#def int RunCreate(char [*] name):
#  pass
forward int RunCreate(char [*] name)
 
#
# RunClock-- measure elapsed time
#def float RunClock():
#  pass
forward float RunClock()
 
#
# RunOpen -- open a file 
 
#def int RunOpen(char [*] name, char [*] mode):
#  pass
forward int RunOpen(char [*] name, char [*] mode)
 
#
# RunClose -- close a file
#def int RunClose(int fd):
#  pass
forward int RunClose(int fd)
 
#def int RunRead(int fd, int lbuff, char [*] buffer):
#  pass
forward int RunRead(int fd, int lbuff, char [*] buffer)
 
#RunRead reads in  lbuff characters into the
#buffer array from a file with descriptor  fd.
#The return value is the number of characters actually read.
#If an error has occured ERR will be returned.
#
#def int RunWrite(int fd, int lbuff, char [*] buffer):
#  pass
forward int RunWrite(int fd, int lbuff, char [*] buffer)
#
#RunWrite writes lbuff from the buffer array.
#The return value is the number of characters actually written.
# ERR is returned whenever an error has occured.
 
#def int RunSeek(int fd, int pos, int flag):
#  pass
forward int RunSeek(int fd, int pos, int flag)
#
# RunSeek sets the file position to pos bytes
# relative to the start of the file (flag=0), to the current position
# (flag=1) or relative to the end of the file (flag=2).
#  ERR is returned whenever an error has occured.
# Otherwise is the file position returned.
#
#def char [*] RunGetenv(char [*] name):
# pass
forward char [*] RunGetenv(char [*] name)
# RunGetenv returns the value of the environment
# variable contained in the string name.

# RunGetnt gets the number of threads from the
# environment variable NTHREADS.
#def int RunGetnt():
#  pass
forward int RunGetnt()

# RunGetnb gets the number of threads from the
# environment variable NTHREADS.
#def int RunGetnb():
#  pass
forward int RunGetnb()
 
#
# RunStrcmp -- compare strings
#def int RunStrcmp(char [*] s, char [*] t):
#  pass
forward int RunStrcmp(char [*] s, char [*] t)
 
#
# RunStrlen -- string length
#def int RunStrlen(char [*] s):
#  pass
forward int RunStrlen(char [*] s)

#
# RunExit cleans up and exits.
#def int RunExit():
#  pass
forward int RunExit()
 
# RunSystem
#def int RunSystem(char[*] cmd):
#  pass
forward int RunSystem(char[*] cmd)

# RunDate
# def char [*] RunDate():
#  pass
forward char [*] RunDate()
#  pass
 
