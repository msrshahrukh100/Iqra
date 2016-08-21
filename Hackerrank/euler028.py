t = int(input())
while t:
	t = t-1
	N = int(input())
	n = (N+1) / 2
	sum = 0
	i = 1
	j = 0
	while i <= N:
		k = i ** 2
		sum += k
		if i > 1 :
			sum += k - 2 * (j)
			sum += k - 4	* (j)
			sum += k - 6 * (j)

		i += 2
		j += 1

	print sum 

