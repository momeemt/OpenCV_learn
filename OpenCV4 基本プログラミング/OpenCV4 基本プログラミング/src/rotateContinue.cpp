//
//  rotateContinue.cpp
//  OpenCV4 基本プログラミング
//
//  Created by 樅山柚子 on 2020/03/17.
//  Copyright © 2020 p_as_ta. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void my_rotate_continue(int argc, char* argv[]) {
    try {
        UMat src, dst;
        if (argc < 2) {
            throw "no parameter, e.g. <filename>.";
        }
        
        imread(argv[1]).copyTo(src);
        
        if(src.empty()) {
            throw "faild open file.";
        }
        
        Point2f center = Point2f(static_cast<float>(src.cols / 2), static_cast<float>(src.rows / 2));
        
        imshow("src", src);
        
        for (float angle = 0.0; angle < 360.0; angle += .5) {
            Mat affineTrans = getRotationMatrix2D(center, angle, 1.0);
            warpAffine(src, dst, affineTrans, src.size(), INTER_CUBIC);
            imshow("dst", dst);
            if (waitKey(1) >= 0) break;
        }
    } catch (const char* str) {
        cerr << str << endl;
    }
}
