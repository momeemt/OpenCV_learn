//
//  flip.cpp
//  OpenCV4 基本プログラミング
//
//  Created by 樅山柚子 on 2020/03/17.
//  Copyright © 2020 p_as_ta. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void my_flip(int argc, char* argv[]) {
    try {
        if (argc < 3) {
            throw "few parameter, e.g. <file name> <flip code>.";
        }
        Mat src = imread(argv[1]);
        int flipCode = stoi(argv[2]);
        
        if(src.empty()) {
            throw "faild open file.";
        }
        
        Mat dst;
        flip(src, dst, flipCode);
        
        imshow("src", src);
        imshow("dst", dst);
        
        waitKey(0);
    } catch (const char* str) {
        cerr << str << endl;
    }
}
