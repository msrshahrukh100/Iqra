n,k = input().split()
l = []
k = int(k)
while k > 0:
	k = k-1
	event = input()
	if event[6] is 'L':
		l[:] = []
	else :
		event = event[6:]
		if event in l:
			l.remove(event)
		else:
			l.append(event)
	print (len(l))



