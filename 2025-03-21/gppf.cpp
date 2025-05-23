/*
#126. 骨牌铺法
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
有 1×n 的一个长方形，用一个 1×1、1×2 和 1×3 的骨牌铺满方格。例如当 n=3 时为 1×3 的方格。 此时 用 1×1、1×2 和 1×3 的骨牌铺满方格，共有四种铺法。如下图：
...  .--  --.  ---

输入格式
一个整数 n ( n<=40)

输出格式
一个整数表示方法总数

样例
input
3

output
4
数据范围与提示
时间限制：1S

空间限制：256MB
*/
#include<bits/stdc++.h>
using namespace std;
long long f[225];
int main(){
	int x;
	scanf("%d",&x);
	f[1]=1;
	f[2]=2;
	f[3]=4;
	for(int i=3;i<=x;i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
	printf("%d",f[x]);
	return 0;
}

