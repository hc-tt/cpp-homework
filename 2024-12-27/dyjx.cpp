/*
#63. 打印矩形
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
给定m和n两个整数的值。打印m行n列的图形。 具体看样例。

输入格式
两个用空格隔开的整数 m和n。

输出格式
m行n列的"*" 组成的矩阵

样例
input
4 10

output
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *

数据范围与提示
时间限制：1s

空间限制:256MB
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
