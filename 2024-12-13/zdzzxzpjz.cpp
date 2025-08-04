/*
#57. 最大值_最小值_平均值
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
给定n个数，求n个数的最大值，最小值和平均值。

输入格式
第一行：一个整数n。 （n<=100）

第二行：n个正整数，每个数不大于100.

输出格式
三行，第一行输出最大值，

第二行输出最小值，

第三行输出n个数的平均数，平均数不要小数部分。

样例
input
3
5 6 7

output
7
5
6

数据范围与提示
保证n<=100。

时间限制：1s

空间限制：256MB
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int Max=-0x7f7f7f7f,Min=0x7f7f7f7f,i,n,x,Sum,Avg;	
	i=1,Sum=0,Avg=0;
	cin>>x;
	while(i<=x){
		cin>>n;
		if(n>Max) Max=n;
		if(n<Min) Min=n;
		Sum=Sum+n;
		Avg=Sum/x;
		++i;
	}
	cout<<Max<<endl;
	cout<<Min<<endl;
	cout<<Avg;
	return 0;
}
