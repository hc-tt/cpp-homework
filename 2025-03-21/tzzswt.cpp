/*
#128. 走楼梯1
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
楼梯有N级台阶，上楼可以一步上一阶，也可以一步上二阶。编写程序，计算共有多少种不同走法？

输入格式
整数n（n<=50）

输出格式
输出方案总数

样例
【输入样例】
3

【输出样例】
3
*/
#include<bits/stdc++.h>
using namespace std;
long long f[55];
int main(){
	int n;
	scanf("%d",&n);
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	printf("%d",f[n]);
	return 0;
}
