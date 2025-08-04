/*
#79. 时间转换

题目描述
输入一个秒数把它转换为小时、分、秒 。

输入格式
一个整数，表示秒数。( 1<=整数<=2147483647 )

输出格式
三行，分别表示转换后得到的小时、分、秒。

样例
input:
4000

output:
1
6
40

2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int z,h,m,s;
	cin>>z;
	h=z/3600;
	m=z%3600/60;
	s=z%3600%60;
	cout<<h<<endl;
	cout<<m<<endl;
	cout<<s;
	return 0;
}
