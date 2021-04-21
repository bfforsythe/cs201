#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <stdlib.h>


using namespace cv;

void main() {

    cv::Mat img = cv::imread("C:\\Users\\Forsy\\Pictures\\download.jpg", IMREAD_UNCHANGED);
    cv::imshow("img", img);
    cv::waitKey(2000);
    destroyWindow("img");


    for (int j = 0; j < img.rows; j++)
    {
        for (int i = 0; i < img.cols; i++)
        {
            Vec3b color = img.at<Vec3b>(Point(i, j));
           
            color[0] = rand() % 256;
            color[1] = rand() % 256;
            color[2] = rand() % 256;

            img.at<Vec3b>(Point(i, j)) = color;
            
        }
    }
    cv::imshow("After", img);
    cv::waitKey();
}