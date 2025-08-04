/*
#27. 马克判断一个数能否同时被3和5整除

题目描述
判断一个数n 能否同时被3和5整除

输入格式
输入一行，包含一个整数n。（ -1,000,000 < n < 1,000,000）

输出格式
输出一行，如果能同时被3和5整除输出YES，否则输出NO

样例
input:
15

output:
YES

2024-11-29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n%3==0)&&(n%5==0)) cout<<"YES";
	else cout<<"NO";
	return 0;	
}
