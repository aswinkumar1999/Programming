import numpy as np
import cv2

cap = cv2.VideoCapture('https://192.168.1.102:8080/video')

while(cap.isOpened()):
    ret, frame = cap.read()
    cv2.imshow('frame',frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
