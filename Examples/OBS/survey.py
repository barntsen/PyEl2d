import numpy as np
import segy
import matplotlib.pyplot as pl
import rss as rs


def main() :


  ## Reading su file 

  fin  ='vp.su'
  # Open the input su file
  fd = open(fin,"rb")
  #Read the file
  trhds,vp = segy.readtrs(fd,-1,"su")
  fd.close()

  ntr=len(trhds)
  seafloor = np.zeros(ntr)
  ns = trhds[0].ns

  for j in range(0,ntr) :
    picked=False
    for i in range(0,ns) :
      if (vp[j,i] > 1600.0) and (picked == False)  :
        seafloor[j] = i
        picked = True
  
  d1 = trhds[0].d1/1000.0
  d2 = trhds[0].d2/1000.0
  n1 = ntr
  n2 = ns
  o1=0
  o2=0
  seafloor = seafloor*d1

  print(" ")
  print("survey *** ")
  print(" n1: ",n1)
  print(" d1: ",d1)

  x=np.zeros(n1)
  x=np.linspace(o1,o1+d1*n1,n1)
  fig =pl.figure()
  pl.xmin=o1
  pl.xmax=o1+d1*n1
  pl.ymin=o2
  pl.ymax=o2+d2*o2
  cmin=1500.0
  cmax=9000.0
  im=pl.imshow(vp.transpose(),clim=(cmin,cmax),cmap='jet',
          extent=[o1,o1+d1*n1,o2+d2*n2,o2])
  ar=2.5
  ax=pl.gca()
  asr = 1.0/(ax.get_data_ratio()*ar)
  pl.Axes.set_aspect(ax,asr)

  #Plot Seafloor
  pl.plot(x,seafloor,'r')
  pl.savefig('survey.pdf')
  #pl.show()

  # Output to rss

  ## Survey (source and receiver positions)
  
  # Units are now in meters
  d1=d1*1000
  d2=d2*1000
  seafloor = seafloor*1000

  # First compute the number of receivers
  dg = 200.0   #Distance between receivers
  lmodel = n1*d1   #Total length of model

  # Next compute no of receivers
  # We use reciprocity and change physical shots to receivers

  dg=200             # 200 m between each receiver
  nreceivers = int(lmodel/dg)  
  ds=1000.0            # 1000m between each shot
  nsources   = int(lmodel/ds)
  
  print(" nreceivers: ", nreceivers)
  print(" nsources: ", nsources)

  data = np.ones([1, nsources*nreceivers]);
  surveyfile = rs.RSSdata(data,2); # 2 for 2D or 3 for 3D
  count=0;
  for i in range(0,nsources):
    sx = i*ds             # Set shot x-coord
    isx = int(sx/d1)      # Get index for seafloor depth
    sz = seafloor[isx]    # Set shot z-coord
    for j in range(0,nreceivers):
        rx = j*dg         # Set receiver x-coord
        rz = 25.0         # Set receiver z-coord
        surveyfile.srcX[count] = sx;
        surveyfile.srcZ[count] = sz;
        surveyfile.GroupX[count] = rx;
        surveyfile.GroupZ[count] = rz;
        count = count+1;
        print("sx,sz: ", sx,sz)

  surveyfile.write('survey.rss');


#--Usual python magic
if __name__ == "__main__" :
  main()


