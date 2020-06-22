import cv2


def main(path: str, flip_code: int):
    src = cv2.imread(path)
    if len(src) == 0:
        raise NameError("failed open file.")
    dst = cv2.flip(src, flip_code)
    cv2.imshow("src", src)
    cv2.imshow("dst", dst)
    cv2.waitKey(0)
    return


if __name__ == '__main__':
    main()
