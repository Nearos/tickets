#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include "display.hpp"
#include "read_image.hpp"

int main(int nargs, char** args){
    cv::Mat img = cv::imread("test_ticket_image.jpg");
    displayImageWindow("Test ticket", img);
    cv::Mat out;
    process_image(img, out);
    displayImageWindow("Grey test ticket", out);
    cv::waitKey(0);
    return 0;
}