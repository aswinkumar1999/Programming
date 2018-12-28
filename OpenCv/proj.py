import numpy as np
from PIL import Image
import cv2
im = cv2.imread('cfi.jpg')
imgray = cv2.cvtColor(im, cv2.COLOR_BGR2GRAY)
ret, thresh = cv2.threshold(imgray, 127, 255, 0)
im2, contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
cv2.drawContours(im2, contours, -1, (255,255,255), 3)
cv2.imwrite('cfi1.jpg',im2)
#img = im2.resize((int(12),int(16)), Image.ANTIALIAS)

basewidth = 12
img = Image.open('test.jpeg')
hsize = 16
img = img.resize((basewidth,hsize), Image.ANTIALIAS)
img.save('cfi3.jpg')

test = cv2.imread('cfi3.jpg',0)
test = 255-test
_,test1 = cv2.threshold(test,30,255,0)
print(test1)
#cv2.imwrite('sompic.jpg',test1)
#cv2.imshow('',test1)
cv2.waitKey(0)
cv2.destroyAllWindows();
