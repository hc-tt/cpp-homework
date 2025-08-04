/*
#17. 数位分离之三位数

题目描述
输入一个三位数S，个位上的数字是a，十位上的数字是b，百位上的数字是c。

求个位上数字a、十位数字b及百位的数字c的和，即a+b+c的值。

求交换百位和个位上的数字。输出新的三位数

输入格式
一个整数三位数，S

输出格式
输出两行2个整数
第一行为，求个位上数字a、十位数字b及百位的数字c的和，即a+b+c的值。
第二行为，交换百位和个位上的数字。输出新的三位数

样例
输入样例1:
243

输出样例1:
9
342
2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,ge,shi,bai,a;
	cin>>a;
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	num=bai+shi+ge;
	cout<<num<<endl;
	num=ge*100+shi*10+bai;
	cout<<num;
	return 0;
}
