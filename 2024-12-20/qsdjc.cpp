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
	int n,fact=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact=fact*i;
		cout<<i<<" ";
		cout<<fact<<endl;
	}
return 0;
}
