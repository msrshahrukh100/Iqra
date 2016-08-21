t = int(input())
def mul(a,b):
	return a*b;

while t > 0:
	t = t-1;
	m,s = input().split()
	m = int(m)
	s = s.split('*')
	result = 1
	for i in range(len(s)):
		if s[i] == '':
			s[i-1],s[i],s[i+1] = 1,(int(s[i-1])**int(s[i+1])),1

	for i in s:
		result = result * int(i)

	result = result % m

	
	print (result)



