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
  const Mat image = imread(imageName);
  Mat out;

  image.convertTo(out, CV_32FC3, 1 / 255.0, 0);
  namedWindow("test");
  imshow("test", out);
  waitKey(0);

  return 0;
}
