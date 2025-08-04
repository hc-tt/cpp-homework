/*
#106. 对角线
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
输入整数N，输出相应方阵。

输入格式
一个整数N。（ 0 < n < 10 )

输出格式
一个方阵，每个数字的场宽为3。

样例
输入样例1
5

输出样例1
  0  0  0  0  1
  0  0  0  1  0
  0  0  1  0  0
  0  1  0  0  0
  1  0  0  0  0
  */
#include<bits/stdc++.h>
using namespace std;
int b[15][15];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j==n+1){
				b[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d",b[i][j]);
		}
			cout<<"\n";
	}
	return 0;
}
