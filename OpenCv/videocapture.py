import numpy as np
import cv2

cap = cv2.VideoCapture(2)
cap2 = cv2.VideoCapture(3)

while(cap.isOpened() and cap2.isOpened() ):
    ret, frame = cap.read()
    ret2, frame2 = cap2.read()
    cv2.imshow('frame',frame)
    cv2.imshow('frame2',frame2)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
