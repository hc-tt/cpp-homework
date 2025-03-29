/*
#134. 素数对
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
两个相差为2的素数称为素数对，如5和7，17和19等，本题目要求找出所有两个数均不大于n的素数对。

输入格式
一个正整数n。1 <= n <= 10000。

输出格式
所有小于等于n的素数对。每对素数对输出一行，中间用单个空格隔开。若没有找到任何素数对，输出empty。

input
100



output
3 5     
5 7     
11 13     
17 19      
29 31      
41 43      
59 61      
71 73

数据范围与提示
注意:输出时使用printf（）函数，“%4d“
*/
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n,flag=0;
	scanf("%d",&n);
	for(int i=2;i<=n-2;i++){
		if(prime(i)&&prime(i+2)){
			printf("%4d %4d\n",i,i+2);
			flag=1;
		}
	}
	if(flag==0){
		printf("empty\n");
	}
	return 0;
}
