import numpy as np
from PIL import Image
import cv2
import os

cap = cv2.VideoCapture('vid.mp4')

while(cap.isOpened()):
    ret, frame = cap.read()
    imgray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    ret, thresh = cv2.threshold(imgray, 127, 255, 0)
    im2, contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(im2, contours, -1, (255,255,255), 3)
    cv2.imwrite('cfi1.jpg',im2)
    #img = im2.resize((int(12),int(16)), Image.ANTIALIAS)

    basewidth = 12
    img = Image.open('cfi1.jpg')
    hsize = 16
    img = img.resize((basewidth,hsize), Image.ANTIALIAS)
    img.save('cfi3.jpg')

    test = cv2.imread('cfi3.jpg',0)
    test = 255-test
    _,test1 = cv2.threshold(test,30,255,0)
    print(test1)
    os.system('clear') #cls on windows , clear on linux/mac ox

cv2.destroyAllWindows();
