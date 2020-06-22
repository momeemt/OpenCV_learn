import numpy as np
import cv2
from matplotlib import pyplot as plt

img = cv2.imread('../assets/img/momeemt.jpg')
plt.imshow(img, cmap='gray', interpolation='bicubic')
plt.xticks([]), plt.yticks([])
plt.show()
