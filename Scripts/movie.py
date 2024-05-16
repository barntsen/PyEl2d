#!/usr/bin/python3


'''Make video movie

This scripts reads a binary file of frames (snapshots) and outputs
an animated video (mp4) file. It is mainly designed for snapshots
from seismic modeling programs.
'''

import matplotlib
#matplotlib.use('TKAgg')
import sys
import argparse
import numpy as np
import matplotlib.pyplot as plt
import babin as ba
import matplotlib.animation as animation
import parula
import bacolmaps
from pltcom import *

def updatefig(*args):
    ''' Callback function for updating each frame

    Arguments: 
        *args: provided by callback 
    
    Returns
        None
'''

    global cnt        #Framenumber
    global inc        #Frame increment
    global animrun    #Stop/Run animation flag    
    global background #Plot background image if True

    if(animrun == True) :
        cnt = cnt+inc
        if(cnt > n3-1) :
            cnt = 0
        if(cnt < 0 ) :
            cnt = n3-1

    img = data[cnt,:,:] #Get the next frame
    
    im.set_array(img)    #Plot the frame
    if background == True: #Plot background image
        vl.set_array(bg)
        return (im,vl) 
    else :
        return(im,)

#===================================================================
# Main script
#===================================================================
def onkey(event):
    ''' Callback function for keyboard press

    Arguments:
       event : Object containing keyboard events and info
              
    Returns:
       None
'''

    global animrun
    global cnt
    global inc

    #Stop or start  movie runnung forward
    if(event.key == 'v') :
        sys.stdout.flush()
        if inc < 0 :
            inc = - inc 
        if animrun == True :
           animrun = False
        else :
           animrun = True

    # Start/Stop running backwards
    if(event.key == 'b') :
        sys.stdout.flush()
        if inc > 0 :
            inc = - inc 
        if animrun == True :
            animrun = False
        else :
            animrun = True

    #Single step
    if(event.key == 'n') :
        animrun=False
        if inc < 0 :
           inc = -inc
        cnt = cnt+inc
        if(cnt > n3-1):
            cnt = 0
        if(cnt < 0 ):
            cnt = n3-1

    if(event.key == 'm') :
        animrun=False
        if inc > 0 :
           inc = -inc
        cnt = cnt+inc
        if(cnt > n3-1):
            cnt = 0
        if(cnt < 0 ):
            cnt = n3-1

#---------------------------------------------------------------------
#Get coomand line options
#---------------------------------------------------------------------

#Hack for negative floats as option
for i, arg in enumerate(sys.argv):
  if (arg[0] == '-') and arg[1].isdigit(): sys.argv[i] = ' ' + arg
#---------------------------------------------------------------------
parser = argparse.ArgumentParser(description='''Animation program for 3D 
           binary data cube''')
parser.add_argument("-noshow",dest="noshow",action='store_true',
           help="turn off plotting to screen if this option is present")
parser.add_argument("-colorbar",dest="colorbar",action='store_true',
           help="Plot colorbar if this option is present")
parser.add_argument("-o",dest="out",
           help="output graphics file")
parser.add_argument("-title",dest="title",
           help="Title of plot, default: None")
parser.add_argument("-cbtitle",dest="cbtitle",
           help="Color bar title, default: None")
parser.add_argument("-xlabel",dest="xlabel",
           help="x-axis label, default: None")
parser.add_argument("-ylabel",dest="ylabel",
           help="y-axis label, default: None")
parser.add_argument("-cmax",dest="cmax",type=float,
           help="Maximum clip value")
parser.add_argument("-cmin",dest="cmin",type=float,
           help="Minimum clip value")
parser.add_argument("-cbmax",dest="cbmax",type=float,
           help="Maximum background velocity")
parser.add_argument("-cbmin",dest="cbmin",type=float,
           help="Minimum background velocity")
parser.add_argument("-ar",dest="ar",type=float,
           help="Aspect ratio, default: 1.0")
parser.add_argument("fname",
           help='''input binary file , format is 
                 float numbers interpreted as a 3D array.''')
parser.add_argument("-fbg",dest="fbg",
           help="input binary velocity file")
parser.add_argument("-bias",dest="bias",default=0.0,type=float,
           help="add a constant to the data, default: 0.0")
parser.add_argument("-colormap",dest="colormap",default="gray",
           help="Color map, default: grey scale")
parser.add_argument("-bgcolormap",dest="bgcolormap",default="jet",
           help="Background color map, default: jet")
parser.add_argument("-pclip",dest="pclip",type=float,
           help="percentile clip in percent (default 99 percent)")
parser.add_argument("-clip",dest="clip",type=float,
           help="clip in percent of absolute value")
parser.add_argument("-n1",dest="n1",type=int,
           help="first dimension of data")
parser.add_argument("-n2",dest="n2",type=int,
           help="second dimension of data")
parser.add_argument("-n3",dest="n3",type=int,
           help="third dimension of data, animation direction")
parser.add_argument("-d1",dest="d1",type=float,default=1.0,
           help="first dimension sampling interval, default: 1.0")
parser.add_argument("-d2",dest="d2",type=float,default=1.0,
           help="second dimension sampling interval, default: 1.0")
parser.add_argument("-d3",dest="d3",type=float,default=1.0,
           help="third dimension sampling interval, default: 1.0")
parser.add_argument("-o1",dest="o1",type=float,default=0.0,
           help="first dimension origo, default: 0.0")
parser.add_argument("-o2",dest="o2",type=float,default=0.0,
           help="second dimension origo, default 0.0")
parser.add_argument("-o3",dest="o3",type=float,default=0.0,
           help="third dimension origo, defaullt 0.0")
parser.add_argument("-mfs",dest="mfs",type=int,default=100,
           help="delay between frames, default: 100")
parser.add_argument("-fps",dest="fps",type=int,default=5,
           help="frames per second default: 5")
parser.add_argument("-flip",dest="flip",
           help="flip y-axis, default: None")
parser.add_argument("-trans",dest="trans",type=float,default=0.25,
           help="transparency default: 0.25")

#Parse arguments
args = parser.parse_args()

print(" keyboard controls: 'v': stop/run forward 'b': stop/run backward 'n': single step forward 'm': Single step backward")

# Axis
if args.n1 is not None:
    n1 = args.n1
else :
    print("Missing n1!")

if args.d1 is not None:
    d1 = args.d1
else :
    d1 = 1.0

if args.o1 is not None:
    o1 = args.o1
else :
    o1 = 0.0

if args.n2 is not None:
    n2 = args.n2
else :
    print ("Missing n2!")

if args.d2 is not None:
    d2 = args.d2
else :
    d2 = 1.0

if args.o2 is not None:
    o2 = args.o2
else :
    o2 = 0.0

if args.n3 is not None:
    n3 = args.n3
else :
    print ("Missing n3!")

if args.d3 is not None:
    d3 = args.d3
else :
    d3 = 1.0

if args.o3 is not None:
    o3 = args.o3
else :
    o3 = 0.0

if args.flip is not None:
    flip = 1
else :
    flip = 0
    
#First install custom colormaps
bacolmaps.cmap('crust')
parula.setcolors()

#Get the data
fin = ba.bin(args.fname)
data=fin.read((n3,n2,n1))

#Get the bacxkground data
if args.fbg is not None :
    fin = ba.bin(args.fbg)
    bg=fin.read((n2,n1))
    background = True
else :
    background = False
#
#Get scaling parameters
#

#Print min,max and absmax of data set:
amps = absmax(data)
mindata = amps[0]
maxdata = amps[1]
absdata = amps[2]

if background is True:
  cbg = absmax(bg);

  if(args.cbmin == None):
    cbmin = cbg[0]
  else :
    cbmin=args.cbmin

  if(args.cbmax == None):
    cbmax = cbg[1]
  else :
    cbmax = args.cbmax
  print( "=== min,max,absmax values of velocity:", cbg)

print( "=== min,max,absmax values of data:", amps)

#Default scaling of data is perecentile clip at 99%
cmin,cmax = pclip(data,99.0)
print("default pclip cmin,cmax: ", cmin,cmax)

if  args.pclip is not None:
    cmin,cmax = pclip(data,args.pclip)
    print( "pclip cmin,cmax: ", cmin,cmax)
if  args.clip is not None:
    cmax = (args.clip/100.0)*absdata
    cmin = -cmax
    print( "clip cmin,cmax: ", cmin,cmax)
if args.cmin is not None:
    cmin = args.cmin
if args.cmax is not None:
    cmax = args.cmax
if args.ar is not None:
    ar = args.ar
else :
    ar = 1.0

print ("=== Final clip values cmin,cmax: ", cmin,cmax)

#Add bias
if args.bias is not None:
    data = data+args.bias


cnt = 0 #No of frames
inc = 1 #Increment between frames

#---------------------------------------------------------------------------
# Animation
#---------------------------------------------------------------------------
animrun=True   #If true, movie runse
#Figure to animate


fig = plt.figure()

#Colors

img = data[cnt,:,:]

#Setup for keyclick
kid = fig.canvas.mpl_connect('key_press_event',onkey)

#Plot frame no 0
im=plt.imshow(img,interpolation='nearest',clim=(cmin,cmax),
              cmap=args.colormap,extent=[o1,o1+d1*n1,o2+d2*n2,o2],animated=True)

#Plot background model
if background == True :
    print(args.bgcolormap)
    vl=plt.imshow(bg,interpolation='nearest',clim=(cbmin,cbmax),alpha=args.trans,
    extent=[o1,o1+d1*n1,o2+d2*n2,o2],cmap=args.bgcolormap, animated=True)

#Set sensible aspcet ratio (The logic behind the aspect ratio this is weird)
ax=plt.gca()
asr = 1.0/(ax.get_data_ratio()*ar)
plt.Axes.set_aspect(ax,asr)

if args.title is not None :
    plt.title(args.title)
if args.xlabel is not None:
    plt.xlabel(args.xlabel)
if args.ylabel is not None:
    plt.ylabel(args.ylabel)
#if args.cbtitle is not None:
#   cbar.ax.set_title(args.cbtitle)

#
# Start the animation loop, frames are updated by calling updatefig
#

if args.out is not None :
    rep = False
else :
    rep = True

ani = animation.FuncAnimation(fig, updatefig, frames=n3-1, repeat=rep, interval=args.mfs, blit=True)


#Output the animation in mp4 format.
if args.out is not None:
   ani.save(args.out, writer='ffmpeg', fps=args.fps)

if args.noshow == False :
    plt.show() #Show each frame

