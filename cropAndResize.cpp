#include <opencv2/opencv.hpp>

using cv::imread;
using cv::imshow;
using cv::namedWindow;
using cv::waitKey;
using cv::getRotationMatrix2D;
using cv::warpAffine;
using cv::resize;
using cv::Range;
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
	const String imageName("E:\\Workspace\\video\\roi_a_film\\zhanlang2_sgs1.mp4_033418.bmp");
  Mat scaleup, scaledown, crop_image;
  const Mat image = imread(imageName);
  resize(image, scaleup, Size(), 1.5, 1.5);
  resize(image, scaledown, Size(), 0.5, 0.5);
  crop_image = image(Range(50, 500), Range(50, 500));
  namedWindow("Origin");
  namedWindow("ScaleDown");
  namedWindow("ScaleUp");
  namedWindow("Cropped");
  imshow("Origin", image);
  imshow("ScaleUp", scaleup);
  imshow("ScaleDown", scaledown);
  imshow("Cropped", crop_image);
  waitKey(0);
  return 0;
}
