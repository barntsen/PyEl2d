# A bit risky to use a global data structure
# but avoids passing an extra argument 
# I use a dictionary to store the eps array
# pointer in a dictionary with the numpy array id
# as a key in the descr ("eps array descriptor address")
# dictionary.
# The nparr dictionary stores the numpy array with
# the numpy array id as a key.
# The whole idea is to have available both
# the numpy array and the eps array at all times.

pylib="void"
descr={}
nparr={}
