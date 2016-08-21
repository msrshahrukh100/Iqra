import cv2
import numpy as np
from PIL import Image

cascadePath = "haarcascade_frontalface_default.xml"
face_cascade = cv2.CascadeClassifier(cascadePath)



recognizer = cv2.createLBPHFaceRecognizer()
images = []
labels = []
users = {}
def get_images_from_user(a):
	name = raw_input("Enter your name: ")
	users[a] = name
	i = 0
	print "Capturing images please stay in front of camera !"
	cap = cv2.VideoCapture(0)
	while True:
    # Capture frame-by-frame
		ret, frame = cap.read()
		gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
		image = np.array(gray, 'uint8')
		faces = face_cascade.detectMultiScale(image)
		print str(2 * i) + "% completed" 
		for (x, y, w, h) in faces:
			images.append(image[y: y + h, x: x + w])
			labels.append(a)
			cv2.imshow("Adding faces to traning set...", image[y: y + h, x: x + w])
			cv2.imwrite('mypics/'+name+str(i)+'.jpg', image[y: y + h, x: x + w])
			cv2.waitKey(50)      
		i = i + 1
		if i == 25 :
			break
	cap.release()


w = 1
i = 0
while w != 0:
	get_images_from_user(i)
	i = i + 1
	cv2.destroyAllWindows()
	x = raw_input("Press y to input another user: ")

	if x.lower() != 'y':
		w = 0

recognizer.train(images, np.array(labels))



cap2 = cv2.VideoCapture(0)

visible_users = []
while True:
		ret, frame = cap2.read()
		gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
		image = np.array(gray, 'uint8')
		faces = face_cascade.detectMultiScale(image)
		cv2.imshow('User',frame)
		for (x, y, w, h) in faces:
			uid_predicted, conf = recognizer.predict(image[y: y + h, x: x + w])
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


