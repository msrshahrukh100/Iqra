import cv2
import numpy as np
from PIL import Image

cascadePath = "haarcascade_frontalface_default.xml"
face_cascade = cv2.CascadeClassifier(cascadePath)

# capturing the image , extracting the faces , converting to gray scale and storing it  to a directory part BEGINS 

recognizer = cv2.createLBPHFaceRecognizer() # creating recognizer object 
images = [] # stores the images as numpy array
labels = [] # 
users = {}
def get_images_from_user(a):
	name = raw_input("Enter your name: ")
	users[a] = name
	i = 0
	print "Capturing images please stay in front of camera !"
	cap = cv2.VideoCapture(0)
	while True:
    # Capture frame-by-frame
		ret, frame = cap.read() # cap.read() returns 2 things we need the frame part
		gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)  # converting the frame to grayscale
		image = np.array(gray, 'uint8') # making the gray image as np array of characters and uint8 is probably the format. images is a np array
		faces = face_cascade.detectMultiScale(image) # detecting faces in the image
		print str(2 * i) + "% completed" 
		for (x, y, w, h) in faces:
			images.append(image[y: y + h, x: x + w])  # cropping the image and appending to the images list initialized previously
			labels.append(a) # the label is the id which identifies users uniquely , here its the integers 1,2,3....
			cv2.imshow("Adding faces to traning set...", image[y: y + h, x: x + w]) # showing the image on a window
			cv2.imwrite('mypics/'+name+str(i)+'.jpg', image[y: y + h, x: x + w])# saving the image to the folder
			cv2.waitKey(50)      
		i = i + 1
		if i == 25 :
			break
	cap.release()


w = 1
i = 0
while w != 0:
	get_images_from_user(i) # calling the function for the ith user
	i = i + 1
	cv2.destroyAllWindows()
	x = raw_input("Press y to input another user: ")

	if x.lower() != 'y':
		w = 0
# capturing the image , extracting the faces , converting to gray scale and storing it  to a directory part ENDS 

recognizer.train(images, np.array(labels)) # training the recognizer with the np array images and labels as two param. the labels are converted to np array first


# recognizer part BEGINS
cap2 = cv2.VideoCapture(0) # capturing image from camera 0

visible_users = []
while True:
		ret, frame = cap2.read()
		gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
		image = np.array(gray, 'uint8')
		faces = face_cascade.detectMultiScale(image) # doing the same previous stuff till here
		cv2.imshow('User',frame) # displaying the video 
		for (x, y, w, h) in faces:
			uid_predicted, conf = recognizer.predict(image[y: y + h, x: x + w]) # the trained recognizer's predict method returns two things the predicted user id and the confidence
			print users[uid_predicted] + str(conf)
			# if uid_predicted not in visible_users :
			# 	visible_users.append(uid_predicted)
			# 	for i in visible_users : 
			# 		print users[i],
			cv2.waitKey(50)      
		if cv2.waitKey(100) & 0xFF == ord('q'):
			break

cv2.destroyAllWindows()
cap2.release()


