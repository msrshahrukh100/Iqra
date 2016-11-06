s = input()
n = int(input())
count = s.count('a')
count = count * int(n/len(s))
if n%len(s) != 0 :
    s = s[:(n%len(s))]
    count += s.count('a')
print(count)