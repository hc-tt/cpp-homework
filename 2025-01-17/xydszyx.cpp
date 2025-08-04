/*
#72. 小鱼的数字游戏
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
问题简述
输入n个数字(0<=n<=100)，以0结束，反向输出。

输入格式
一行内输入一串整数，以0结束，以空格间隔。

输出格式
行内倒序输出n个数字，以空格间隔。

输入输出样例
输入样例1
3 65 23 5 34 1 30 0

输出样例1
30 1 34 5 23 65 3
*/
#include<bits/stdc++.h>
using namespace std;
int a[102];
int main(){
	int i=0;
	while(1){
		cin>>a[i];
		if(a[i]==0)
		break;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	printf("%d ",a[j]);
	return 0;
}
