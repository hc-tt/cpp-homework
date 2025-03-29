/*
#132. 求三角形周长与面积
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
给出平面坐标上不在一条直线上三个点坐标 (,),(,),(,)，坐标值是实数，且绝对值不超过100.00，求围成的三角形的周长和面积，保留两位小数，另输入数据保证能构成三角形。

注意平面上两个点P1(,),P2(,)的距离公式为：

∣P1P2∣=[(X1-X2)^2+(Y1-Y2)^2]^1/2

输入格式
一行输入六个实数，分为为，相邻两个数用空格隔开。

输出格式
一行两个实数，分别表示三角形的周长和面积。

样例
input
0 0 0 3 4 0

output
12.00  6.00  

input
3.4 12 9 6 7 5.2

output
18.06  8.24

input
4 4 4 10 12 4

output
24.00  24.00
*/
#include<bits/stdc++.h>
using namespace std;
double dis(double xa,double ya,double xb,double yb){
	double d;
	d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	return d;
}
double cir(double a,double b,double c){return a+b+c;}
double area(double a,double b,double c){
	double p=cir(a,b,c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double xa,xb,ya,yb,xc,yc;
	scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
	double dis1=dis(xa,ya,xb,yb);
	double dis2=dis(xb,yb,xc,yc);
	double dis3=dis(xc,yc,xa,ya);
	printf("%.2lf",cir(dis1,dis2,dis3));
	printf("%d"," ");
	printf("%.2lf",area(dis1,dis2,dis3));
	return 0;
}
