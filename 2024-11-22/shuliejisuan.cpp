/*
#13. 数列计算

题目描述
已知等差数列的前两项为a1和a2，求第n项的值是多少。

输入格式
一行，包含三个整数a1，a2，n。

输出格式
一个整数，第n项的值。

样例
input:
1 4 5

output:
13

204-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,n;
	cin>>a1>>a2>>n;
	n=(n-1)*(a2-a1)+a1;
	cout<<n;
	return 0;
}
