import re
t = int(input())
for z in range(t) :
	n,m,x = input().split(" ")
	n,m,x = int(n),int(m),int(x)
	number_string = '1'
	max_number = '9'
	for i in range(n-1) :
		number_string += '0'
		max_number += '9'
	start_number = ''
	for l in range(int(number_string) , int(max_number) + 1 ) :
		if l % m == 0 :
			start_number = str(l)
			break;
	prohibited = []
	for l in range(x):
		a,b = input().split()
		prohibited.append(a+b)
		prohibited.append(b+a)

	# print (prohibited)
	answer = 0
	for l in range(int(start_number),int(max_number) + 1, m) :
		flag = 0
		for i in range(len(prohibited)) :
			if (re.search(prohibited[i],str(l))) :
				flag = 1
				break
		if flag == 0 :
			answer += 1
			answer = answer % 1000000007

	print (answer)

		



