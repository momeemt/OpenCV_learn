import cv2


def main(arg: str):
    src: cv2.UMat
    dst: cv2.UMat
    src = cv2.imread(arg)
    dst = cv2.cvtColor(src, cv2.COLOR_RGB2GRAY)
    cv2.imshow("src", src)
    cv2.imshow("dst", dst)
    cv2.waitKey(0)
    return


if __name__ == '__main__':
    main()
