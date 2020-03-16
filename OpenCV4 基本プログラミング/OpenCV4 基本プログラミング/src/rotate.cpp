//
//  rotate.cpp
//  OpenCV4 基本プログラミング
//
//  Created by 樅山柚子 on 2020/03/17.
//  Copyright © 2020 p_as_ta. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void my_rotate(int argc, char* argv[]) {
    try {
        UMat src, dst;
        if (argc < 3) {
            throw "few parameter, e.g. <filename> <angle>.";
        }
        
        float angle = stof(argv[2]);
        
        imread(argv[1]).copyTo(src);
        
        if(src.empty()) {
            throw "faild open file.";
        }
        
        Point2f center = Point2f(static_cast<float>(src.cols / 2), static_cast<float>(src.rows / 2));
        
        Mat affineTrans = getRotationMatrix2D(center, angle, 1.0);
        
        warpAffine(src, dst, affineTrans, src.size(), INTER_CUBIC, BORDER_REPLICATE);
        
        imshow("src", src);
        imshow("dst", dst);
        
        imwrite("dst.jpg", dst);
        
        waitKey(0);
    } catch (const char* str) {
        cerr << str << endl;
    }
}
