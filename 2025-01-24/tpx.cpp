/*
#93. 桶排序
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
现有N个非负整数Ai（Ai<），将它们排序输出。

输入格式
输入两行，一行一个整数N,另一行N个正整数Ai,相邻两个数用空格隔开。

输出格式
N个有序化的正整数Ai。

样例
样例输入1
6
6 14 2 11 17 9


样例输出1
2 6 9 11 14 17
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){	
	long long n,temp;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
