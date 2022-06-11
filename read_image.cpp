#include "read_image.hpp"

#include <opencv2/imgproc.hpp>

void process_image(const cv::Mat& src, cv::Mat& dest){
    cv::Mat greyImg;
    cv::cvtColor(src, greyImg, cv::COLOR_RGB2GRAY);
    dest = greyImg;
}