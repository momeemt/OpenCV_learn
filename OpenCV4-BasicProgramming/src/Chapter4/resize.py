import cv2


def main(path: str, scale_w: float, scale_h: float):
    src = cv2.imread(path)
    if len(src) == 0:
        raise NameError("failed open file.")
    dst = cv2.resize(src, None, fx=scale_w, fy=scale_h)
    cv2.imshow("src", src)
    cv2.imshow("dst", dst)
    cv2.waitKey(0)


if __name__ == '__main__':
    main()
