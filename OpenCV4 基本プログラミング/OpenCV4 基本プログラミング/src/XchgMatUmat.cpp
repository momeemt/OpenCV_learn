#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

UMat Mat2UMat1 (Mat src) {
    UMat umat;
    src.copyTo(umat);
    return umat;
}

UMat Mat2UMat2 (Mat src) {
    return src.getUMat(ACCESS_RW);
}

Mat UMat2Mat (UMat umat) {
    return umat.getMat(ACCESS_RW);
}
