/*
#136. 素数回文数个数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
求11到n之间（包括n），既是素数又是回文数的整数有多少个。

输入格式
一个大于11小于1000的整数n。

输出格式
11到n之间的素数回文数个数。

样例
input
23
input
1
*/
#include<bits/stdc++.h>
using namespace std;
bool Palindrome(int x){
	int t=0,a[x];
	while(x){
		a[++t]=x%10;
		x=x/10;
	}
	for(int i=1;i<=t/2;i++){
		if(a[i]!=a[t-i+1])
		return 0;
	}
	return 1;
}
bool prime(int x){
	if(x==1)
	return 0;
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0) return 0;
	return 1;
}
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i=11;i<=n;i++)
	if(prime(i)&&Palindrome(i))
	ans++;
	printf("%d",ans);
	return 0;
}
