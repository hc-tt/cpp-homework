/*#115. 蛇形方阵
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
在n*n(1=<n<=100)里填入1,2,3,4,......,b*n成形。如时方阵为：

1      2      3      4      
12     13     14     5      
11     16     15     6      
10     9      8      7


输入格式
一行n

输出格式
n*n的蛇形矩阵，每个数字场宽为7，左对齐

样例
输入样例1
4

输出样例1
1      2      3      4      
12     13     14     5      
11     16     15     6      
10     9      8      7      
*/
#include<bits/stdc++.h>
using namespace std;
int a[150][150];
int main(){
	int n;
	cin>>n;
	int i=1,j=0,tnt=0;
	while(tnt<n*n){
		while(j+1<=n&&a[i][j+1]==0){
			a[i][++j]=++tnt;
		}
		while(i+1<=n&&a[i+1][j]==0){
			a[++i][j]=++tnt;
		}
		while(j-1>=1&&a[i][j-1]==0){
			a[i][--j]=++tnt;
		}
		while(i-1>=1&&a[i-1][j]==0){
			a[--i][j]=++tnt;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%-7d",a[i][j]);
			cout<<endl;
	}
	return 0;
}
