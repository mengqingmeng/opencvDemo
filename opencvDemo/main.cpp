//
//  main.cpp
//  opencvDemo
//
//  Created by mqm on 2017/6/29.
//  Copyright © 2017年 mqm. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

void demo1(){
    Mat A,C;
    A = Mat::zeros(3,3,CV_8UC1);
    Mat B(A);
    C = A;
    
    cout << "before edit" << endl;
    
    cout << "Mat a:" << A << endl;
    cout << "Mat b:" << B << endl;
    cout << "Mat c:" << C << endl;
    
    
    B.ptr<uchar>(0)[0] =1;
    C.at<uchar>(0,1) =2;
    cout << "after edit" << endl;
    cout << "Mat a:" << A << endl;
    cout << "Mat b:" << B << endl;
    cout << "Mat c:" << C << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    demo1();
    
    return 0;
}

