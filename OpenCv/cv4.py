#Prob4 : https://iitmcvg.github.io/problem_statements/Problem_statements/

import numpy as np
from cv2 import *
kernel = np.ones((5,5))
cap = cv2.VideoCapture('track.mp4')
target = cv2.imread('target.png')
#equ = cv2.equalizeHist(target)
hsvt = cv2.cvtColor(target , cv2.COLOR_BGR2HSV)
hist = cv2.calcHist([hsvt],[0,1],None,[180,256],[0,180,0,256])
cv2.normalize(hist,hist,0,255,cv2.NORM_MINMAX)

while(cap.isOpened()):
    ret, frame = cap.read()
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    res = cv2.calcBackProject([hsv],[0,1],hist,[0,180,0,256],1)
    disc = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (5,5))
    res = cv2.filter2D(res, -1, disc)

    ret,thresh = cv2.threshold(res,100,255,0)
    #erode=cv2.erode(thresh,kernel)
    #dilate=cv2.dilate(erode,kernel)
    #thresh = dilate
    final = cv2.merge((thresh,thresh,thresh))

    out = cv2.bitwise_and(frame,final)

    cv2.imshow('frame',out)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
