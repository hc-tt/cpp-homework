/*
#53. 求整数的和与均值
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入n（1<=n<=10000）个整数，求它们的和与均值。

输入格式
先输出和，再输出平均值（结果保留5位小数），和与平均值之间用空格隔开。

输出格式
输入样例1
4
344
222
343
222

输出样例1
1131 282.75000
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum,x,i,n;
	scanf("%d",&n);
	sum=0;
	i=1;
	while(i<=n){
		scanf("%d",&x);
		sum=sum+x;
		i=i+1;
	}
	printf("%d %.5lf",sum,sum*1.0/n);
	return 0;
}
