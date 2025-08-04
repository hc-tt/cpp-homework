/*
#32. 圆球与圆柱问题

题目描述
圆球与圆柱中圆半径r为，圆柱高h ，求圆柱上圆周长C1、圆的面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。
输入数据r,h，输出计算结果，输出时要求文字说明，取小数点后一位数字。请编程序。 PI＝3.14

输入格式
两个浮点数，r和h

输出格式
圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 保留一位小数，每个结果后换行。

样例
input:
1.5 3

output:
C1=9.4
Sa=7.1
Sb=28.3
Va=14.1
Vb=21.2

数据范围与提示
提示:半径为r的圆球，圆球表面积为4*pi*r*r,体积为4/3*pi*r*r*r,对于圆柱，上面半径为r的圆，体积为pi*r*r*h

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
const double pi=3.14;
int main(){
	double r,h,C1,Sa,Sb,Va,Vb;
	scanf("%lf %lf",&r,&h);
	C1=2*pi*r;
	Sa=pi*r*r;
	Sb=4*pi*r*r;
	Va=4*pi*r*r*r/3;
	Vb=pi*r*r*h;
	printf("C1=%0.1lf\nSa=%0.1lf\nSb=%0.1lf\nVa=%0.1lf\nVb=%0.1lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
