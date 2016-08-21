import numpy as np
import cv2

face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

cap = cv2.VideoCapture(0)
i = 0
images = []
labels = []
while True:
    # Capture frame-by-frame
    ret, frame = cap.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    image = np.array(gray, 'uint8')
    faces = face_cascade.detectMultiScale(image)

    for (x, y, w, h) in faces:
      images.append(image[y: y + h, x: x + w])
      labels.append(name)
      cv2.imshow("Adding faces to traning set...", image[y: y + h, x: x + w])
      cv2.imwrite('mypics/'+name+str(i)+'.jpg', image[y: y + h, x: x + w])
      cv2.waitKey(50)      
    i = i + 1
    if cv2.waitKey(100) & 0xFF == ord('q'):
      break

# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()