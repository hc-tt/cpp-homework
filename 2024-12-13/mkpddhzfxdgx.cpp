/*
#41. 马克判断点和正方形的关系
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。

输入格式
输入一行，包括两个整数x、y，以一个空格分开，表示坐标(x,y)。

输出格式
输出一行，如果点在正方形内，则输出yes，否则输出no

样例
input:
1 1

output:
yes
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x<=1 && x>=-1){
		if(y<=1 && y>=-1) 
			cout<<"yes";
		else 
			cout<<"no";
	}
	else 
		cout<<"no";
	return 0;
}
