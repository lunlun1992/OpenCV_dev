#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using cv::imread;
using cv::imshow;
using cv::namedWindow;
using cv::waitKey;
using cv::getRotationMatrix2D;
using cv::warpAffine;
using cv::Size;
using cv::Mat;
using cv::String;
using cv::Point2f;
using cv::IMREAD_COLOR;
using cv::COLOR_BGR2GRAY;
using cv::WINDOW_AUTOSIZE;
using cv::WINDOW_NORMAL;
using std::cout;
using std::endl;


int main(void)
{
	String imageName("E:\\Workspace\\video\\roi_a_film\\zhanlang2_sgs1.mp4_033418.bmp");
  Mat image_rotate;
  Mat image = imread(imageName);
  Point2f center(image.cols / 2, image.rows / 2);

  Mat affine_matrix = getRotationMatrix2D(center, 60, 0.5);
  warpAffine(image, image_rotate, affine_matrix, Size(image.cols, image.rows));

  namedWindow("Origin");
  namedWindow("Rotated");

  imshow("Origin", image);
  imshow("Rotated", image_rotate);

  waitKey(0);
  return 0;
}
