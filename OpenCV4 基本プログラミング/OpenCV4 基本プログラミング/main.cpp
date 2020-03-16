//
//  main.cpp
//  OpenCV4 基本プログラミング
//
//  Created by 樅山柚子 on 2020/03/16.
//  Copyright © 2020 p_as_ta. All rights reserved.
//


#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    Mat img = imread("/Users/momiyama/Desktop/lena.png");
    namedWindow("image", WINDOW_NORMAL);
    imshow("image", img);
    waitKey(0);
    return 0;
}
