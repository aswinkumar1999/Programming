import cv2
from hand_tracker import HandTracker

WINDOW = "Hand Tracking"
PALM_MODEL_PATH = "./palm_detection_without_custom_op.tflite"
ANCHORS_PATH = "./anchors.csv"

POINT_COLOR = (0, 255, 0)
CONNECTION_COLOR = (255, 0, 0)
THICKNESS = 2

cv2.namedWindow(WINDOW)
capture = cv2.VideoCapture(0)

if capture.isOpened():
    hasFrame, frame = capture.read()
else:
    hasFrame = False

detector = HandTracker(
    PALM_MODEL_PATH,
    ANCHORS_PATH,
    box_shift=0.2,
    box_enlarge=1.0
)
x=0
y=0
while hasFrame:
    image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    points, _ = detector(image)
    if points is not None:
        x=0
        y=0
        for point in points:
            x =x+point[0]
            y =y+point[1]
        x=x/4
        y=y/4
        cv2.circle(frame, (int(x), int(y)), THICKNESS * 20, POINT_COLOR, THICKNESS)
        # for connection in connections:
        #     x0, y0 = points[connection[0]]
        #     x1, y1 = points[connection[1]]
        #     cv2.line(frame, (int(x0), int(y0)), (int(x1), int(y1)), CONNECTION_COLOR, THICKNESS)
    cv2.imshow(WINDOW, frame)
    hasFrame, frame = capture.read()
    key = cv2.waitKey(1)
    if key == 27:
        break

capture.release()
cv2.destroyAllWindows()
