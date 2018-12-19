#Prob1 : https://iitmcvg.github.io/problem_statements/Problem_statements/

import numpy as np
import cv2

cap = cv2.VideoCapture(0)
kernel = np.ones((5,5))

while(cap.isOpened()):
    ret, frame = cap.read()
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv,(29,86,6),(100,255,255))
    erode = cv2.erode(mask,kernel)
    dilate = cv2.dilate(erode,kernel)
    mask = dilate
    #blur = cv2.GaussianBlur(mask,(5,5),0)
    #canny = cv2.Canny(blur,20,50)
    cnts = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)[-2]
    C_max = max(cnts,key = cv2.contourArea)
    x,y,w,h = cv2.boundingRect(C_max)
    cv2.rectangle(frame,(x,y),(x+w,y+h),(20,20,255),2)
    cv2.imshow('frame',frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
