/*
#85. 小鱼的航程（数据加强）
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
有一只小鱼，它上午游泳150公里，下午游泳100公里，晚上和周末都休息（实行双休日)，假设从周x(1<=x<=7)开始算起，请问这样过了n天以后，小鱼一共累计游泳了多少公里呢？

输入格式
输入两个整数x,n(表示从周x算起，经过n天，n在int范围内）。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。

样例
输入样例#1：
3 10

输出样例#1：
2000

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,x,n;
	long long sum=0;
	cin>>x>>n;
	k=n/7;
	sum=(long long)k*1250;
	for(int i=x;i<=x+n%7-1;++i){
		if(i%7==6||i%7==0)
			continue;
		sum=sum+250;
	}
	cout<<sum;
	return 0;
}
