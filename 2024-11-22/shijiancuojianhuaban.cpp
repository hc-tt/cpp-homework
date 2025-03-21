/*
#35. 时间戳简化版

题目描述
某国家安全局获得一份珍贵的材料，上面记载着一个恐怖活动的计划，
可是材料上的时间戳是linux的，即从1970.1.1日0时0分起到该时刻的总秒数，
希望你能编写一个程序，计算出该材料写的日期。
作为简化版，我们认为1年为12个月，每个月固定30天。不存在闰年。

输入格式
一个整数n(0<=n<=2147483647)，表示从1970.1.1日0时0分开始的秒数。

输出格式
年月日三个整数，用空格隔开。

样例
input
581112041

output
1988 9 6

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y,m,d;
	cin>>n;
	y=n/(360*24*3600)+1970;
	m=n%(360*24*3600)/(30*24*3600)+1;
	d=n%(360*24*3600)%(30*24*3600)/(24*3600)+1;
	cout<<y<<" "<<m<<" "<<d;
	return 0;
}
