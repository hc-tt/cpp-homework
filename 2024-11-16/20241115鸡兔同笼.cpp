/*
#5. 鸡兔同笼

题目描述
数学中有个经典的“鸡兔同笼”问题，已知头共X个，脚共Y只，问笼中的鸡和兔各有多少只?

输入格式
一行用空格隔开的两个整数。分别表示头和脚的个数。

输出格式
一行用空格隔开的两个整数。分别表示鸡和兔的个数。

样例
input
33 90

output
21 12
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,X,Y;
	cin>>X>>Y;
	b=(Y-2*X)/2;
	a=(4*X-Y)/2;
	cout<<a<<" "<<b<<endl;
	return 0; 
}
