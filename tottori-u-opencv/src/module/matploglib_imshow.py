import cv2
from matplotlib import pyplot as plt


def main():
    img = cv2.imread('../assets/img/momeemt.jpg')
    plt.imshow(img, cmap='gray', interpolation='bicubic')
    plt.xticks([]), plt.yticks([])
    plt.show()


if __name__ == "__main__":
    main()
