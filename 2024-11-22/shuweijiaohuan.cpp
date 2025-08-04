/*
#15. 数位交换

题目描述
输入一个三位整数（保证此数大于99，小于1000），将此数的百位与个位交换后输出.

输入格式
一行一个三位整数

输出格式
一行一个整数

样例
input
123

output
321

保证：99=<a,b<=999
时间限制：1s
空间限制：256MB

2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ;
	cin>>a;
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	num=ge*100+shi*10+bai;
	cout<<num;
	return 0;
}
