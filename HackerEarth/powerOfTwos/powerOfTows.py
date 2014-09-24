import math
t = input()
for i in range(t):
	n=input()
	srt = int(math.sqrt(n))
	r=0
	for i in range(1,srt+1):
		r += n/i
	print 2*r - (srt**2 +n)

