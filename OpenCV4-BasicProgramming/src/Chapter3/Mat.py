import cv2


def main(path: str):
    src = cv2.imread(path)
    dst = cv2.cvtColor(src, cv2.COLOR_BGR2GRAY)
    cv2.imshow("src", src)
    cv2.imshow("dst", dst)
    cv2.waitKey(0)
    return


if __name__ == '__main__':
    main()