
def power(a , b):

	if b == 0:
		return 1

	temp = power(a,b//2)  
	if (b % 2) == 0:
		return temp * temp % 1000000007
	else :
		return a * temp * temp % 1000000007

 

l = list(map(int, input().split()))
a = l[0]
b = l[1]
t =  l[2]
print (int(power(((a + b)/2),t)))


