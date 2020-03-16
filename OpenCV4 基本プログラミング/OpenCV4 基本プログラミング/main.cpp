#include <opencv2/opencv.hpp>
#include "src/myMat.cpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cerr << "no parameter" << endl;
        return -1;
    }
    
    Mat src = imread(argv[1]);
    my_gray_scale(src);
    return 0;
}
