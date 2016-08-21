for i in range(int(input())):
	s = input()
	a = []
	count = 0
	for j in s:
		if j not in a:
			a.append(j)
			count += 1
	print (count)
			