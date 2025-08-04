/*
#23. 【分支结构】马克解绝对值问题

题目描述
输入一个浮点数，输出这个浮点数的绝对值，保留到小数点后两位

输入格式
输入一个浮点数，其绝对值不超过10000。

输出格式
输出这个浮点数的绝对值，保留到小数点后两位。

样例
input:
-3.14

output:
3.14

2024-12-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	double num;
	scanf("%lf",&num);
	if(num<0) printf("%0.2lf",num*-1);
	else printf("%0.2lf",num);
	return 0;
}
