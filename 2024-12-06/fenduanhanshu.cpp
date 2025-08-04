/*
37. 分段函数

题目描述
有一个函数
y=x (x<1)
y=2x-1 (1<=x<10)
y=3x-11 (x>=10)
写一段程序，输入x，输出y

输入格式
一个整数x

输出格式
一个整数y

样例
input:
14

output:
31

2024-12-06
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x;
	if(x<1) y=x;
	if(1<=x&&x<10) y=2*x-1;
	if(x>=10) y=3*x-11;
	cout<<y;
	return 0;
}
