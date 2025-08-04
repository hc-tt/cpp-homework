/*
#118. 最大子段和
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
给出一段序列，选出其中连续且非空的一段使得这段和最大。

输入格式
第一行是一个正整数N，表示了序列的长度。

第二行包含N个绝对值不大于10000的整数，描述了这段序列。

输出格式
一个整数，为最大的子段和是多少。子段的最小长度为1。

样例
input
7
2 -4 3 -1 2 -4 3


output
4


【样例解释】

2,-4,3,-1,2,-4,3中，最大的子段和为4，该子段为3，-1，2
*/
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	return a > b ? a : b;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int maxEndingHere=a[0];
	int maxSoFar=a[0];
	for(int i=1;i<n;i++){
		maxEndingHere=max(a[i],maxEndingHere+a[i]);
		maxSoFar=max(maxSoFar,maxEndingHere);
	}
	printf("%d\n",maxSoFar);
	return 0;
}
