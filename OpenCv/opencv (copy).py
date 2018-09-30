from cv2 import *
img = imread("a.png",0)
namedWindow("Hello",WINDOW_NORMAL)
imshow("Hello",img)
waitKey(0)
destroyAllWindows()


