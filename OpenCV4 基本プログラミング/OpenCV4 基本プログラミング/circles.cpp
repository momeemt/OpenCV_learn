//
//  circles.cpp
//  OpenCV4 基本プログラミング
//
//  Created by 樅山柚子 on 2020/03/17.
//  Copyright © 2020 p_as_ta. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {
    try {
        UMat img0(400, 400, CV_8UC3, Scalar(150, 150, 150));
        circle(img0, Point(200,200), 50, Scalar(255, 0, 0));
        imwrite("img0.jpg", img0);
        
        UMat img1(400, 400, CV_8UC3, Scalar(150, 150, 150));
        circle(img1, Point(200,200), 100, Scalar(0, 255, 0), 3);
        imwrite("img1.jpg", img1);
        
        UMat img2(400, 400, CV_8UC3, Scalar(150, 150, 150));
        circle(img2, Point(200,200), 150, Scalar(0, 0, 255), -1);
        imwrite("img2.jpg", img2);
        
        waitKey(0);
    } catch (const char* str) {
        cerr << str << endl;
    }
    return 0;
}
