from cv2 import *
from matplotlib import pyplot as plt
img = imread("a.png",0)
plt.imshow(img, cmap='gray', interpolation = 'bicubic')
plt.xticks([]), plt.yticks([])
plt.show
waitKey(0)
destroyAllWindows()


