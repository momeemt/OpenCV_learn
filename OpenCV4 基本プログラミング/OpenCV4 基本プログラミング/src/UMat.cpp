#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void my_gray_scale(UMat src) {
    UMat dst;
    cvtColor(src, dst, COLOR_RGB2GRAY);
    
    imshow("src", src);
    imshow("dst", dst);
    
    waitKey(0);
    return;
}
