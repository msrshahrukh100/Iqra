import math
import operator


guests = int(input())
passions = []
for i in range(guests):
	temp = input().split(" ")
	for j in range(int(temp[0])):
		if temp[j + 1] not in passions :
			passions.append(temp[j + 1])

numberofplaces = int(input())
placecoordinates = {}
placecount = {}
for i in range(numberofplaces) :
	temp = input().split(" ")
	c = 0
	for j in range(int(temp[3])) : 
		if temp[4 + j] in passions : 
			c = c + 1

	placecoordinates[temp[0]] =  (float(temp[1]), float(temp[2]))
	placecount[temp[0]] = c

sudoanswer = sorted(placecount.items(),key = operator.itemgetter(1))


# place for def 
def distance_between(point1, point2):
	EARTH_RADIUS = 6371
	point1_lat_in_radians  = math.radians(placecoordinates[point1][0])
	point2_lat_in_radians  = math.radians(placecoordinates[point1][1])
	point1_long_in_radians  = math.radians(placecoordinates[point2][0])
	point2_long_in_radians  = math.radians(placecoordinates[point2][1])

	return math.acos( math.sin( point1_lat_in_radians ) * math.sin( point2_lat_in_radians ) +math.cos( point1_lat_in_radians ) * math.cos( point2_lat_in_radians )*math.cos( point2_long_in_radians - point1_long_in_radians) ) * EARTH_RADIUS


answer = []
same = 0
if sudoanswer[len(sudoanswer)-1] == sudoanswer[len(sudoanswer)-2] == sudoanswer[len(sudoanswer)- 3] :
	for j in reversed(range(1,len(sudoanswer))) :
		if sudoanswer[j] == sudoanswer[j - 1] :
			same = same + 1
	min_distance = 999999999999
	a = 0
	b = 0
	for i in range(len(sudoanswer) - 1 , len(sudoanswer) - same, -1) :
		for j in range(i+1 , len(sudoanswer) - same, -1) :
			temp = distance_between(sudoanswer[i][0] , sudoanswer[j][0])
			if temp < min_distance :
				min_distance = temp
				a = i
				b = j

	answer.append(sudoanswer[a])
	answer.append(sudoanswer[b])

else : 
	answer.append(sudoanswer[len(sudoanswer)-1])
	answer.append(sudoanswer[len(sudoanswer)-2])

finalanswer = sorted(answer, key = operator.itemgetter(0)) 

for j in finalanswer : 
	print (j[0], end = " ")

 
