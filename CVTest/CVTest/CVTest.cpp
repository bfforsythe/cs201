//   Brandon Forsythe
//      4/ 2/ 21
//  OpenCV proof-of-concept






#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include "randomcast.h";



using namespace cv;
int blankspace = 225;


void main() {

    cv::Mat img = cv::imread("C:\\Users\\Forsy\\Pictures\\download.jpg", IMREAD_UNCHANGED);
    cv::imshow("Before", img);
    cv::waitKey(2000);

    randomGen();
    int mainColor = castVal.at(0);
    int mainColor2 = castVal.at(1);
    int mainColor3 = castVal.at(2);


    for (int parse = 0; parse < 3; parse++) {
        std::cout << castVal.at(parse);
        std::cout << "\n";
    }


    for (int j = 0; j < img.rows; j++)
    {
        for (int i = 0; i < img.cols; i++)
        {
            Vec3b color = img.at<Vec3b>(Point(i, j));

            if (color[1] >= blankspace && color[2] >= blankspace && color[0] >= blankspace) {
                        color[0] = rand() % 256;
                        color[1] = rand() % 256;
                        color[2] = rand() % 256;
            }

            else {
                color[0] = mainColor;
                color[1] = mainColor2;
                color[2] = mainColor3;
            }

            img.at<Vec3b>(Point(i, j)) = color;
            
        }
    }
    PlaySound(TEXT("C:\\Users\\Forsy\\Downloads\\bonk_AgRFvsD.wav"), NULL, SND_FILENAME);
    cv::imshow("After", img);
    cv::waitKey();

}