/*
#20. 「分支结构」判断奇数

题目描述
判断一个数是否是奇数。

输入格式
一个整数x

输出格式
如果x是奇数则输出odd，否则输出even。

样例
input:
2

output:
even

2004-12-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x%2==0) cout<<"even";
	else cout<<"odd";
	return 0;
}
