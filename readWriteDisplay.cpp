/*
Copyright 2017 BIG VISION LLC ALL RIGHTS RESERVED

This code is made available to the students of 
the online course titled "OpenCV for Beginners" 
by Satya Mallick for personal non-commercial use. 

Sharing this code is strictly prohibited without written
permission from Big Vision LLC. 

For licensing and other inquiries, please email 
spmallick@bigvisionllc.com 
*/

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using cv::imread;
using cv::namedWindow;
using cv::waitKey;
using cv::Mat;
using cv::String;
using cv::IMREAD_COLOR;
using cv::COLOR_BGR2GRAY;
using cv::WINDOW_AUTOSIZE;
using cv::WINDOW_NORMAL;
using std::cout;
using std::endl;


int main(void)
{
	String imageName("E:\\Workspace\\video\\roi_a_film\\zhanlang2_sgs1.mp4_033418.bmp");
 
	// LOAD image
	Mat image = imread(imageName, IMREAD_COLOR);

	if(image.empty()) // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl ;
		return -1;
	}

	Mat grayImage;
	// convert color image to gray
	cvtColor(image, grayImage, COLOR_BGR2GRAY);

	// DISPLAY image
	// Create a window for display.
	namedWindow("image", WINDOW_AUTOSIZE);
	namedWindow("gray image", WINDOW_NORMAL);

	// Show our image inside it.
	imshow("image", image);
	imshow("gray image", grayImage);
	// Both images are displayed but gray image on top of original image
	// Move gray image window to see original image

	// SAVE image
	imwrite("result.jpg", image);  // it will store the image with name "result.jpg"
	imwrite("result_gray.jpg", grayImage); // it will store the gray image with name "result_gray.jpg"

  waitKey(0);  // Wait for a keystroke in the window
  return 0;
}
