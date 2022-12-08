"""
computer vision 
"""
import cv2

cap = cv2.VideoCapture(0)
while True:
    _, freme = cap.read()
    cv2.imshow("Output", freme)
    if cv2.waitKey(10) == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
