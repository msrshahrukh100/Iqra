import cv2
import numpy as np

img = cv2.imread('ehaan.jpg',cv2.IMREAD_UNCHANGED)

cv2.imshow('ehaan',img)
cv2.waitKey(0)
cv2.destroyAllWindows()