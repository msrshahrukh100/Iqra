n,q = input().split()
n,q = int(n),int(q)
row = [n for i in range(n)]
col = [n for i in range(n)]

while q > 0:
	q = q-1
	query = input()
	if query[3]=='S':
		if query[0]=='R' :
			query = query.split(" ")
			if query[2] == "1":
				row[int(query[1])-1] = 0
				for i in range(n):
					if col[i] > 0:
						col[i] = col[i] - 1
			else :
				row[int(query[1])-1] = n;
				for i in range(n):
					if col[i] < n:
						col[i] = col[i] + 1


		elif query[0] == 'C':
			query = query.split(" ")
			if query[2] == "1":
				col[int(query[1])-1] = 0
				for i in range(n):
					if row[i] > 0:
						row[i] = row[i] - 1
			else :
				col[int(query[1])-1] = n;
				for i in range(n):
					if row[i] < n:
						row[i] = row[i] + 1

	elif query[3]=='Q':
		if query[0] == 'R':
			query = query.split(" ")
			print (row[int(query[1])-1])

		if query[0] == 'C':
			query = query.split(" ")
			print (col[int(query[1])-1])
