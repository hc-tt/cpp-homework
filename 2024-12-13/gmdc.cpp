/*
#83. 购买电池
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
超市里的电池搞活动，每板电池10元钱，若数量超过10个，电池的价格打8折。 用程序解决此问题，每次输入电池的数量，输出应付多少钱？

输入格式
一个整数，买电池的数量。

输出格式
一个整数，表示花费的钱数。

样例
input
7

output
70
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a<=10) cout<<a*10;
	else if(a>10) cout<<a*10*80/100;
	return 0;
}
