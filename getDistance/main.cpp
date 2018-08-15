#include<iostream>
#include<cmath>
#include<opencv2/highgui.hpp>
#include<opencv2/core.hpp>
#include<opencv2/opencv.hpp>


//代表相机焦距
#define f 255.62106

//获取实际距离
//height代表相机高度
//p1,p2 代表图像上的两个点
double getDistance(int height,cv::Point2i &p1,cv::Point2i &p2) 
{
	//pixeDistance 代表图像上的像素距离
	double pixeDistance = sqrt((p1.x-p2.x)*(p1.x - p2.x)+(p1.y-p2.y)*(p1.y - p2.y));
    return (pixeDistance*height)/f;
}

int main() 
{
	double distance=getDistance(10,cv::Point2i(0,0), cv::Point2i(5,5));
	std::cout<<"distance："<< distance << std::endl;
	return 0;
}





