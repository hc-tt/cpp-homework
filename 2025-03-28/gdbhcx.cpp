/*
#133. 哥德巴赫猜想
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
伟大的哥德巴赫猜想是：任何一个大于4的偶数总可以分解成为两个素数之和，现在请你编程验证哥德巴赫猜想，即输入一个大于4的偶数n，将其分解为两个素数之和输出。如果有多种分解方案，请输出字典序最小的那个一个。

输入格式
一行一个整数n，4<=n<=100

输出格式
一行一个表达式，表示字典序最小的一种分解方法，具体格式参见样例

样例
输入样例1
6

输出样例1
6=3+3

输入样例2
14

输出样例2
14=3+11
*/
#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}
int main(){
	int x;
	scanf("%d",&x);
	int p=x/2;
	for(int i=2;i<=p;i++){
		if(prime(i)&&prime(x-i)){
			printf("%d=%d+%d",x,i,x-i);
			break;
		}
	}
	return 0;
}
