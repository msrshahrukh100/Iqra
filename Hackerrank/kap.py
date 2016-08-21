def kapr(a,i):
	s = str(a)
	l = len(s)
	r = 0
	if l == 1:
		if a == i:
			return True
		else :
			return False
		
	if l % 2 == 0:
		r = int(l/2)
	else:
		r = int((l+1)/2)
	b = s[-r:]
	c = s[:-r]
	if i == (int(b) + int(c)):
		return True
	return False
solution = []
for i in range(100000):
	if (kapr(i*i,i)):
		solution.append(i)


lower = int(input())
higher = int(input())
flag = 0
for i in solution:
	if i >= lower and i <=higher:
		print (i,end=" ")
		flag = 1
	elif i >higher:
		break
		
if flag == 0:
	print("INVALID RANGE")
	