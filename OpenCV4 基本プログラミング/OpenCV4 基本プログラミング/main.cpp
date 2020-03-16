#include <opencv2/opencv.hpp>
#include "src/UMat.cpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cerr << "no parameter" << endl;
        return -1;
    }
    
    UMat src;
    imread(argv[1]).copyTo(src);
    my_gray_scale(src);
    return 0;
}
