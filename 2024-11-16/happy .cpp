/*
#7. 大象喝水
题目描述
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入格式
输入有一行：包含两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出格式
输出一行，包含一个整数，表示大象至少要喝水的桶数。

样例
输入样例1
23  11

输出样例1
3
*/

#include<bits/stdc++.h>=
using namespace std;
int main(){
	const double pi=3.1415926;
	int h,r,number;
	float v;
	cin>>h>>r;
	v=pi*r*r*h;
	number=ceil(20*1000/v);
	cout<<number<<endl;
	return 0;
}
