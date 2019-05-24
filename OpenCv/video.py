import numpy as np
from PIL import Image
import cv2
import os

def printview(a):
    for i in range(16):
        for j in range(24):
            if(a[i][j]==0):
                print('  ',end='')
            else:
                print('* ',end='')
        print('')

cap = cv2.VideoCapture('vid.mp4')

fin = np.zeros((16,24));

while(cap.isOpened()):
    ret, frame = cap.read()
    imgray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    ret, thresh = cv2.threshold(imgray, 127, 255, 0)
    im2, contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(im2, contours, -1, (255,255,255), 20)
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
    for i in range(24):
        if(i%2!=0):
            fin[:,i]=test1[:,int(i/2)]
    printview(fin)
    os.system('clear') #cls on windows , clear on linux/mac ox

cv2.destroyAllWindows();
