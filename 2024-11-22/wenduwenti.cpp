/*
#34. 温度问题

题目描述
输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数

输入格式
一个华氏温度，浮点数

输出格式
摄氏温度，浮点两位小数

样例
input:
-40

output:
c=-40.00

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	float c,f;
	cin>>f;
	c=5*(f-32)/9;
	cout<<"c=";
	printf("%0.2f",c);
	return 0;
}
