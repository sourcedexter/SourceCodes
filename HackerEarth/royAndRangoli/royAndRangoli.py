import math
num=int(input())
count=0

for i in range(num):
    flag=1
    for j in range(num):
        n=i+j
        if n % 2 == 0 and n > 2: 
            flag=0
        for m in range(3, int(math.sqrt(n)) + 1, 2):
            if n % m == 0:
                flag=0
        if flag==1 and n>1:
            count=count+1
print (count)
