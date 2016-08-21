def subsets(s):
	length = len(s)
	return [s[i:j+1] for i in range(length) for j in range(i,length)]


def uniques(s):
	temp = []
	for i in s :
		if i not in temp:
			temp.append(i)
	return len(temp)


k = int(input())
s = input()
count = 0
temp = subsets(s)
for i in temp :
	if(uniques(i) == k) :
		count += 1

print (count)


