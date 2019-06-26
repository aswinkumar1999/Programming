import numpy as np
import cv2

myrtmp_addr = "http://rpistream-inso.streaming.media.azure.net/2b790d2d-96ab-48be-8661-fa9515a958e2/d314cc34-51d6-4364-b423-e5f8eeda8adf.ism/manifest(format=m3u8-aapl-v3)"
cap = cv2.VideoCapture(myrtmp_addr)

while(True):
    print("I'm here")
    ret, frame = cap.read()
    cv2.imshow('frame',frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()


#
# import numpy as np
# import cv2
#
# cap = cv2.VideoCapture()
# cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'AVC1'))
# cwi=cap.open('http://rpistream-inso.streaming.media.azure.net/2b790d2d-96ab-48be-8661-fa9515a958e2/d314cc34-51d6-4364-b423-e5f8eeda8adf.ism/manifest)')
#
# counter = 0
#
# while(True):
#
#     ret, frame = cap.read()
#
#
#     counter += 1
#
#     if counter % 30 == 0:
#         cv2.imshow('frame', frame)
#         if cv2.waitKey(1) & 0xFF == ord('q'):
#             break
#
# cap.release()
# cv2.destroyAllWindows()
