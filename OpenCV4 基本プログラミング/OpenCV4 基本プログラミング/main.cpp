#include <opencv2/opencv.hpp>
#include "src/XchgMatUmat.cpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cerr << "no parameter" << endl;
        return -1;
    }
    
    Mat mat = imread(argv[1]);
    
    UMat umat1 = Mat2UMat1(mat);
    
    UMat umat2 = Mat2UMat2(mat);
    
    Mat mat2 = UMat2Mat(umat1);
    
    return 0;
}
