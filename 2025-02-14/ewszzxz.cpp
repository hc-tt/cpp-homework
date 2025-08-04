/*
#96. 二维数组最小值
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
输入一个二维数组，找出其中最小的数，输出它的值以及所在行号和列号。

若有多个最小值，找位于左上角的那一个。

输入格式
第一行 m，n表示二维数组 m行，n列 ，其中m,n <=100

接下来 m行，n列的数，a[I,j]<=10000

输出格式
三个数，分别是 a[i,j] i, j ，意义如要求

样例
input
3  5
100  20  11 30 44
22  333  1003  245 23
33  1   24  1  34

output
1 3 2
数据范围与提示
时间限制：1s

空间限制：256MB
*/
#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n,m;
	int minn=100000,x,y;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]<minn){
				minn=a[i][j];
				x=i;
				y=j;
			}
		}
	}
	printf("%d %d %d",minn,x,y);
	return 0;
}
