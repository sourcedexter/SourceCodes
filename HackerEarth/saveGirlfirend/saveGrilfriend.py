import math

def fact(n):
    i=1
    count=0 
    while n%2==0:
        n=n/2;
        count=count+1
    i=i*(count+1)
    for j in range(3,int(math.sqrt(n))+1,2):
        count=0
        while n%j==0:
            n=n/j
            count=count+1
        i=i*(count+1)
    if n>2:
        i=i*2
    return i


tc  =int( raw_input())
for z in range(tc):
    a,b = [int(each)for each in raw_input().split()]
    cur=0
    max1=0
    count=0
    for each in range(a,b+1):
    	if each%2==0 and each>2:
    		pass
    	else:
    		continue
        cur=fact(each)
        if max1 < cur:
            max1=cur
            count=1
        elif cur == max1:
            count=count+1

    print count+1
