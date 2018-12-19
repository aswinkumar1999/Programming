import numpy as np
import cv2


img1 = cv2.imread('laplacian1.jpg',1)
gauss5 = cv2.GaussianBlur(img1,(5,5),0)
gauss9 = cv2.GaussianBlur(img1,(9,9),0)
cv2.imwrite('gauss5.jpg',gauss5)
cv2.imwrite('gauss9.jpg',gauss9)
