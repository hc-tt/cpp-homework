/*
#47. 到校时间

题目描述
小明每天上学有两种交通工具可以选择，地铁和公交。乘坐地铁一共需要x1站，每站所需时间为y1。乘坐公交一共需要x2站，每站所需时间为y2。求小明到校的最短时间。

输入格式
四个正整数x1 y1 x2 y2

输出格式
所需的最短时间。

样例
input:
3 4 2 5

output:
10

2024-12-06
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1*y1>x2*y2) cout<<x2*y2;
	if(x1*y1==x2*y2) cout<<x2*y2;
	if(x1*y1<x2*y2) cout<<x1*y1;
	return 0;
}
