import os
import cv2
width = 416
height = 416

try:
    if not os.path.exists('imagesfin'):
        os.makedirs('imagesfin')
except OSError:
    print ('Error: Creating directory of data')
try:
    if not os.path.exists('annotationsfin'):
        os.makedirs('annotationsfin')
except OSError:
    print ('Error: Creating directory of data')

def write_img_and_anot(img,t,new_img,start_x,end_x,start_y,end_y,data):
    img_name =img[:-4]+str(t)+".jpg"
    cv2.imwrite("imagesfin/"+img_name,new_img)
    data[2] = data[2][:12]+img_name+data[2][-12:]
    data[5] = data[5][:11]+str(width)+data[5][-9:]
    data[6] = data[6][:12]+str(height)+data[6][-10:]
    data[15] = data[15][:12]+str(start_x)+data[15][-8:]
    data[16] = data[16][:12]+str(end_x)+data[16][-8:]
    data[17] = data[17][:12]+str(start_y)+data[17][-8:]
    data[18] = data[18][:12]+str(end_y)+data[18][-8:]
    xml_name = img[:-4]+str(t)+".xml"
    f = open("annotationsfin/"+xml_name, "w+")
    f.writelines(data)
    f.close()

list = os.listdir("images")
for k in list:
    img = k
    xml = img[:-4]+".xml"
    file = open("annotations/"+xml,'r')
    data = file.readlines()
    file.close()
    xmin = data[15][12:-8]
    ymin = data[16][12:-8]
    xmax = data[17][12:-8]
    ymax = data[18][12:-8]
    xdiff = int(xmax) - int(xmin)
    ydiff = int(ymax) - int(ymin)
    no_x = int(xdiff/width)+1
    no_y = int(ydiff/height)+1
    extra_x = int((no_x*width - xdiff)/2)
    extra_y = int((no_y*height -ydiff)/2)
    #generating images part
    t=-1
    for i in range(no_x):
        for j in range(no_y):
            t+=1
            startx=0
            endx=0
            starty=0
            endy=0
            startx=int(xmin)+i*width - extra_x
            endx = startx+width
            starty=int(ymin)+j*height -extra_y
            endy = starty + height
            anot_start_x = max(startx,int(xmin)) - startx
            anot_end_x = min(endx, int(xmax)) - startx
            anot_start_y = max(starty,int(ymin)) - starty
            anot_end_y = min(endy, int(ymax)) - starty
            image = cv2.imread("images/"+img,-1)
            new_img = image[starty:endy,startx:endx]
            cv2.imshow("ASD",new_img)
            cv2.waitKey(0)
            write_img_and_anot(img,t,new_img,anot_start_x,anot_end_x,anot_start_y,anot_end_y,data)
