#include<iostream>
#include<cmath>
#include<opencv2/highgui.hpp>
#include<opencv2/core.hpp>
#include<opencv2/opencv.hpp>


//�����������
#define f 255.62106

//��ȡʵ�ʾ���
//height��������߶�
//p1,p2 ����ͼ���ϵ�������
double getDistance(int height,cv::Point2i &p1,cv::Point2i &p2) 
{
	//pixeDistance ����ͼ���ϵ����ؾ���
	double pixeDistance = sqrt((p1.x-p2.x)*(p1.x - p2.x)+(p1.y-p2.y)*(p1.y - p2.y));
    return (pixeDistance*height)/f;
}

int main() 
{
	double distance=getDistance(10,cv::Point2i(0,0), cv::Point2i(5,5));
	std::cout<<"distance��"<< distance << std::endl;
	return 0;
}





