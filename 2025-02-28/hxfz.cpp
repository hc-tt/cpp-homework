/*
#114. 环形方阵
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
问题描述:
输入n（1<=n<=100)，表示在n*n的矩阵外围一圈，从(1,1)位置开始顺时针递增1填数。中间的位置元素值为0。

输入格式:
一行n

输出格式:
n*n的环形矩阵，矩阵中每个数字场宽为3

输入样例1:
4

输出样例1:
  1  2  3  4
 12  0  0  5
 11  0  0  6
 10  9  8  7

*/
#include<bits/stdc++.h>
using namespace std;
int a[150][150];
int main(){
	int n,t=1,i=1,j=1;
	cin>>n;
	a[i][j]=t;
	while(j+1<=n)a[i][++j]=++t;
	while(i+1<=n)a[++i][j]=++t;
	while(j-1>=1)a[i][--j]=++t;
	while(i-1>1)a[--i][j]=++t;
	a[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d",a[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
