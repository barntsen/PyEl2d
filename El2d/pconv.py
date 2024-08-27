#!/usr/bin/python3

import sys
fin=sys.argv[1]

f = open(fin, "r")
text = f.read()

instring = False
p=0
for i in range(0,len(text)) :

  c=text[p]

  #First find out if we are in a string
  if(c == '"') :
    if(instring == True) :
      instring = False
    else :
      instring = True
  
  if(c=='/'):
    if text[p+1] =='/' :
      out='#'
      p=p+1
    else :
      out=c

  elif (c == '\n'):
    out='\n'

  elif (c == '{') :     
    if(instring == False) :
      out = ':'
    else :
      out = c
  elif (c == '}') :
    if(instring == False) :
      out = 'end'
    else :
      out = c
  else :
      out = c

  if(p < len(text)-1) :
    p=p+1

  print(out,end='')
