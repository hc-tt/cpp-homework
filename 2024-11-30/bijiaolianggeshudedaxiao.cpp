/*
#19. 比较两个数大小

题目描述
输入两个整数，输出较大的数。

输入格式
一行2个整数，a和b

输出格式
一行1个整数，两个数中较大的数。

2024-12-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b) cout<<a;
	else cout<<b;
	return 0;	
}
