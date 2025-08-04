/*
C. 立方数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
题目描述
小杨有一个正整数n ，他想知道 n 是否是一个立方数。一个正整数 n 是立方数当且仅当存在一个正整数x.x.x  满足  。

输入格式
第一行包含一个正整数 。

输出格式
如果正整数  是一个立方数，输出 Yes，否则输出 No。

样例
样例输入 1
8
样例输出 1
Yes
样例输入 2
9
样例输出 2
No
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	x=cbrt(n);
	if(x*x*x==n){
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	return 0;
}
