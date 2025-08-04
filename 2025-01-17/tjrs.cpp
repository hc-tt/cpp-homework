/*
#75. 统计人数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
读入n个人的成绩，输出比平均分少的人的个数。

输入格式
输入格式：

第一行：n n<=100

第二行：n个由空格隔开的整数。

输出格式
输出格式：

一个整数m，表示低于平均分的人数。

样例
input
3
10 20 10

output
2
*/
#include<bits/stdc++.h>
using namespace std;	
int n,m,sum,a[102];
double j;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	j=sum*1.0/n;
	for(int i=1;i<=n;i++){
		if(a[i]<j){
			m++;
		}
	}
	cout<<m;
	return 0;
}
