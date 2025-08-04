/*
#77. 余数

题目描述
输入两个整数，求他们相除的余数。

输入格式
a b两个数

输出格式
a/b的余数

样例
input:
3 2

output:
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int	a,b,door;
	cin>>a>>b;
	door=a%b;
	cout<<door<<endl;
	return 0; 
} 
