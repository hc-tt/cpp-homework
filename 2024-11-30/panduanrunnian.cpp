/*
#31. 判断闰年

题目描述
输入年份year，以判别该年份是否闰年。

输入格式
一个年份

输出格式
根据是否闰年输出，是输出"L",否输出"N"

样例
input:
2000

output:
L

2024-11-29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	if((year%4==0)&&(year%100!=0)||(year%400==0)) cout<<"L";
	else cout<<"N";
	return 0;
}
