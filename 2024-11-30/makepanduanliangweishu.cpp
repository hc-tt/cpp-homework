/*
#25. 马克判断两位数

题目描述
判断一个正整数是否是两位数（即大于等于10且小于等于99）。

输入格式
一个正整数，不超过1000。

输出格式
一行。若该正整数是两位数，输出1，否则输出0。

样例
input:
54

output:
1

2024-11-9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	if((num>=10)&&(num<=99)) cout<<1;
	else cout<<0;
	return 0;
}
