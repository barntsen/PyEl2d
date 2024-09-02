

def f(**kwargs) :
  if('a' in kwargs) : 
    print(kwargs['a'])
  else :
   print("a not in kwargs") 


print(f(b=5.0))
    

