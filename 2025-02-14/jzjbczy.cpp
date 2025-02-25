/*
#98. 矩阵基本操作1
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
问题描述:
已知一个n*n的矩阵（方阵n<=100），把矩阵主副对角线上的元素值加上x，然后输出这个新矩阵。

输入格式:
一行两个变量，用空格隔开，代表n和x;接下来的n行每行n列，表示矩阵的数值，用空格隔开。

输出格式:
输出新矩阵，每个数字5个宽度占位符,右对齐输出

输入样例1:
3 4
1 2 3
1 2 3
1 2 3

输出样例1:
5 2 7
1 6 3
5 2 7 
*/
#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((i==j)||(i+j==n+1)){
				a[i][j]+=x;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%5d",a[i][j]);
			printf("\n");
	}
	return 0;
}
