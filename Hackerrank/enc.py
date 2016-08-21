import math
sen = input()
l = len(sen)
sq = math.sqrt(l)
sq_int = int(sq)

if(sq == sq_int):
	length = sq_int
	breadth = sq_int
	for i in range(breadth):
		for x in range(i,l,length):
			print (sen[x],end="")
		print (" ",end="")
else:
	length = sq_int
	breadth = sq_int + 1

	for i in range(breadth):
		for x in range(i,l,length+1):
			print (sen[x],end="")
		print (" ",end="")
