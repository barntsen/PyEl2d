#!/bin/sh

# Script for smoothing velocity models
GO3D=/home/barn/Dropbox/Projects/Fwi-OBS-S-Wave/Models/GO_3D_OBS_SAMP

cp $GO3D/vp_ws_1001.su xaa.su
cp $GO3D/vs_ws_1001.su xab.su
cp $GO3D/rho_ws_1001.su xac.su

#Resample to 100 m gridspacing
sustrip < xaa.su >xaa.bin
regrid3 ni1=1201 ni2=7001 ni3=1 no1=301 no2=1750 no3=1 <xaa.bin > yaa.bin
suaddhead ns=301 <yaa.bin|sushw key=d1,d2,dt a=100,100,100 >vp.su
sustrip <vp.su>zaa.bin
transp n1=301 <zaa.bin>vp.bin


sustrip < xab.su >xab.bin
regrid3 ni1=1201 ni2=7001 ni3=1 no1=301 no2=1750 no3=1 <xab.bin > yab.bin
suaddhead ns=301 <yab.bin|sushw key=d1,d2,dt a=100,100,100 >vs.su
sustrip <vs.su >zaa.bin
transp n1=301 <zaa.bin>vs.bin

sustrip < xac.su >xac.bin
regrid3 ni1=1201 ni2=7001 ni3=1 no1=301 no2=1750 no3=1 <xac.bin > yac.bin
suaddhead ns=301 <yac.bin|sushw key=d1,d2,dt a=100,100,100 >rho.su
sustrip <rho.su >zaa.bin
transp n1=301 <zaa.bin>rho.bin

rm xaa.su xab.su xac.su 
