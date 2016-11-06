a,b = input().split(" ")
a = input().split(" ")
b = input().split(" ")
flag = 1
# for i in b :
# 	if i not in a :
# 		flag = 0
# 		break
# 	else :
# 		a.remove(i)
# if flag :
# 	print ("Yes")
# else :
# 	print ("No")

# creating a hash table 

a_hash_table = {}
b_hash_table = {}
for i in a :
	a_hash_table[i] = a.count(i)
	a = [x for x in a if x != i]

for i in b :
	b_hash_table[i] = b.count(i)
	b = [x for x in b if x != i]

for i in b_hash_table :
	if(a_hash_table[i] < b_hash_table[i]) :
		flag = 0
		break;

if flag :
	print ("Yes")
else :
	print ("No")