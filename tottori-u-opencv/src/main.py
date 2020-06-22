import numpy as np
import cv2

img = cv2.imread('../assets/img/momeemt.jpg')
cv2.imshow('image', img)
k = cv2.waitKey(0)
if k == 27:
    cv2.destroyAllWindows()
elif k == ord('s'):
    cv2.imwrite('momee_icon.jpg', img)
    cv2.destroyAllWindows()
