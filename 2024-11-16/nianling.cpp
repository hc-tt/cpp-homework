/*
#2. 马克与爸爸的年龄问题

题目描述
马克和爸爸的年龄和是n岁，三年前爸爸比马克大x岁，今年马克和爸爸各是多少岁？

输入格式
一行两个正整数n和x。

输出格式
马克和爸爸的年龄（中间有空格）

样例
input:
45 31

output:
7 38
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x,n;//a是马克,b是爸爸 ,n是马克和爸爸的年龄和,x是马克和爸爸的年龄差. 
	cin>>n>>x;
	a=(n-x)/2;
	b=(n+x)/2; 	
	cout<<a<<" "<<b<<endl;
	return 0;		
}
