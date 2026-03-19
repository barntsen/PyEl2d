
delay = 0.1
vp=2000.0
d = 450-250
tp0 = d/vp + delay
print("Direct p: ",tp0)

vs=1150.0
d = 450-250
ts0 = d/vs + delay
print("direct s: ",ts0)

ts = 2*((620-250)/vs)
print("reflected s: ",ts)
