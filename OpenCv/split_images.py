import numpy as np
import cv2

width=432
height=384

image = cv2.imread('img45.jpg' ,-1 )
c ,d = image.shape[:2]
c = int(c/width)
d = int(d/height)
for i in range(c*d):
    a = image[width*(i%c):width*((i%c)+1),height*(int(i/d)):height*(int(i/d)+1)]
    cv2.imwrite("img45"+str(i)+".jpg",a)
