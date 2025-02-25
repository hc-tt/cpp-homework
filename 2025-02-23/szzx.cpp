/*
#105. 数字走向
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
  1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
*/
#include<bits/stdc++.h>
using namespace std;
int a[15][15];
int main(){
	int n,b=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=b;
			b++;
		}
	}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
				printf("%3d",a[i][j]);
				cout<<endl;
		}
	return 0;
}
