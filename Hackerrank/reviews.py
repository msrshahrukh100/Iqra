start = 1465948800
end = 1468540800

t = input().split(" ")
n , m = int(t[0]), int(t[1])

passions = []
passionscore = {}
for i in range(n) :
	name = input()
	passions.append(name)
	passionscore[name] = {"score" : 0 , "id" : -1}

userscore = {}

users = []

for i in range(m) :
	t = input()
	x = t.split(" ")
	try : 
		rid = int(x[0])
		tt = int(x[1])
	except :
		x = t.split("  ")
		rid = int(x[0])
		tt = int(x[1])


	if rid not in users :
		users.append(rid)
		userscore[rid] = {}

	tempscore = 0
	if tt >= start and tt <= end :
		tempscore = tempscore + 20
	else :
		tempscore = tempscore + 10

	body = input()
	if len(body) >= 100 :
		tempscore = tempscore + 20
	else : 
		tempscore = tempscore + 10

	bodysplit = body.split(" ")

	for i in passions :
		checked = []
		for j in bodysplit :
			if i.lower() == j.lower() and i not in checked:
				try:
					userscore[rid][i] = userscore[rid][i] + tempscore
				except :
					userscore[rid][i] = tempscore

				checked.append(i)


	for i in passions :
		for j in users :
			try :

				if passionscore[i]["score"] < userscore[j][i] :
					passionscore[i]["score"] = userscore[j][i]
					passionscore[i]["id"] = j

				elif (passionscore[i]["score"] == userscore[j][i]) and passionscore[i]["id"] > j:
					passionscore[i]["id"] = j

			except :
				pass


for i in passions :
	print (passionscore[i]["id"])










