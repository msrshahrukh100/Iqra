n = int(input())
a = input()
indices = [i for i,x in enumerate(a) if x == a[a.index(max(a))] ]
substrings = []
for i in range(len(indices)) :
	if i == (len(indices) - 1):
		substrings.append(a[indices[i]:])
	else :
		substrings.append(a[indices[i]:indices[i+1]])
		substrings.append(a[indices[i]:])

print(max(substrings))

