import cv2
import numpy as np

cap = cv2.VideoCapture(0);

while(True):
        ret,frame = cap.read()
        hem=cv2.cvtColor(frame , cv2.COLOR_BGR2HSV)
        greenmask = cv2.inRange(hem, (29, 66, 6) ,(100, 255, 255))
        cv2.imshow('Hello',greenmask)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
cap.release()
cv2.destroyAllWindows()
