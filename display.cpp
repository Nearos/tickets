#include "display.hpp"
#include <opencv2/highgui.hpp>

void displayImageWindow(const char * const name , const cv::Mat& img){
    cv::namedWindow(name, cv::WINDOW_NORMAL);
    cv::imshow(name, img);
}
