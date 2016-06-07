min=1
max=10
num=[]
for num in range(1,max+1):
 if(num>1):
  for i in range(2,num):
   if(num%2==0):
    break
   else:
    print(num)
