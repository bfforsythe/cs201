#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>


using namespace cv;

void main() {

    cv::Mat img = cv::imread("C:\\Users\\Forsy\\Pictures\\download.jpg", IMREAD_UNCHANGED);
    cv::imshow("img", img);


    for (int j = 0; j < img.rows; j++)
    {
        for (int i = 0; i < img.cols; i++)
        {
            if (img.at<cv::Vec3b>(i, j)[0] == 0 || img.at<cv::Vec3b>(i, j)[1] == 0 || img.at<cv::Vec3b>(i, j)[2] == 0)
           
                 img.at<cv::Vec3b>(i, j)[0] = 255; // change it to white
                 img.at<cv::Vec3b>(i, j)[1] = 255;
                 img.at<cv::Vec3b>(i, j)[2] = 255;
           
        }
    }
    cv::imshow("After", img);
    cv::waitKey();
}