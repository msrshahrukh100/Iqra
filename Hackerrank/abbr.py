import re

q = int(input())
for i in range(q) :	
	a = input()
	b = input()
	a = a.upper()
	match = re.search(b,a)
	if match :
		print ("YES")
	else :
		print ("NO")

