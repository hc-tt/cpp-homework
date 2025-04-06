/*
#135. 亲密对数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
编写程序求给定整数n的“亲密对数”。“亲密对数”是指：若整数a的因子（包括1但不包括自身，下同）之和为b，而整数b的因子之和为a，则称a和b为一对“亲密对数”。

要求使用函数，函数功能是：计算某一个数的因子（包括1但不包括自身）之和。

n由键盘输入，如果存在“亲密对数”则输出该数，否则输出NO。要求输入输出均在主函数中完成。

输入格式
一行，一个整数n（int范围之内）

输出格式
输出一行，如题所述

样例
输入样例1
220 
输出样例1
284
输入样例2
8
输出样例2
NO
*/
#include<bits/stdc++.h>
using namespace std;
int FactorSum(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0){
			if(n/i==i) 
			sum=sum+i;
			else sum=sum+i+n/i;
		}
		return sum-n;
}
int main(){
	int n,factor;
	scanf("%d",&n);
	factor=FactorSum(n);
	if(n==FactorSum(factor))
		cout<<factor;
	else
		cout<<"NO";
		return 0;
}
