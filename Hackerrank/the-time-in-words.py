import sys
time = {    
'1':'one', 	
'2':'two',	
'3':'three', 	
'4':'four', 	
'5':'five', 	
'6':'six',	
'7':'seven', 	
'8':'eight', 	
'9':'nine', 	
'10':'ten', 
'11':'eleven', 	
'12':'twelve', 	
'13':'thirteen', 	
'14':'fourteen', 	
'15':'fifteen', 	
'16':'sixteen', 	
'17':'seventeen', 	
'18':'eighteen', 	
'19':'nineteen', 	
'20':'twenty', 
'21':'twenty one', 	
'22':'twenty two', 	
'23':'twenty three', 	
'24':'twenty four', 	
'25':'twenty five', 	
'26':'twenty six', 	
'27':'twenty seven', 	
'28':'twenty eight', 	
'29':'twenty nine'}

hour = int(input())
minute = int(input())

if minute == 0:
	print (time[str(hour)] + " o' clock")
	sys.exit()

p = ""
if minute % 15 == 0:
	s = minute/15
	if s == 1 or s == 3:
		p = "quarter"
	elif s == 2:
		p = "half"
temp = minute
if temp > 30:
	temp = 60 - temp
if p == "" :
	if temp != 1:
		p = time[str(temp)] + " minutes"
	else:
		p = time[str(temp)] + " minute"

if minute <= 30:
	print (p+" past "+time[str(hour)])
else:
	if hour == 12:
		next = 1
	else :
		next = hour + 1
	print(p + " to "+time[str(next)])





