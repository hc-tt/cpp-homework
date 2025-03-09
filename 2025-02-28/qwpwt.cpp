/*
#113. 取物品问题
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
问题描述:
有n(n<=10)个不同的物品，要求取其中m个(0<=m<=n)，请问有几种取法？

输入格式:
一行，两个数: n m

输出格式:
一行一个数字输出方案数

输入样例1:
4 2

输出样例1:
6
*/
#include<bits/stdc++.h>
using namespace std;
int a[25][25];
int main(){
	int n,m;
	cin>>n>>m;
	a[0][0]=1;
	for(int i=1;i<=n;i++){
		a[i][0]=1;
		for(int j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	cout<<a[n][m]<<endl;
	return 0;
}
