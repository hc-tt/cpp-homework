/*
#76. 最小交换
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入n个数，要求找出n个数的最小值，并将最小的数与第一个数交换后，再输出。

如果最小值不止一个，那么让第一个最小值和第一个数交换

输入格式
第一行：n n<=100

第二行：n个由空格隔开的整数。

输出格式
n个由空格隔开的整数，其中最小的数和第一个完成交换。

样例
input
5
2 3 6 1 3

output
1 3 6 2 3
*/
#include<bits/stdc++.h>
using namespace std;
int a[102];
int main(){
	int n,b,c;
	b=0,c=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	c=a[1];
	for(int i=2;i<=n;i++){
			if (a[i]<c) {
				c=a[i];
				b=i;
			}
	}
	c=a[1];
	a[1]=a[b];
	a[b]=c;	
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}	
	return 0;
}
