/*
#116. 神奇的幻方
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
幻方是一种很神奇的 NxN 矩阵：它由数字1,2,3,4,......,NxN构成，且每行、每列及两条对角线上的数字之和都相同。

当 N 为奇数时，我们可以通过以下方法构建一个幻方：
首先将 1 写在第一行的中间。
之后，按如下方式从小到大依次填写每个数 K（k=2,3,......,N*N）：

若 (K-1) 在第一行但不在最后一列，则将 K 填在最后一行，(K-1) 所在列的右一列；
若 (K-1) 在最后一列但不在第一行，则将 K 填在第一列，(K-1) 所在行的上一行；
若 (K-1) 在第一行最后一列，则将 K 填在 (K-1) 的正下方；
若 (K-1) 既不在第一行，也不在最后一列，如果 (K-1) 的右上方还未填数，则将 K 填在 (K-1) 的右上方，否则将 K 填在 (K-1) 的正下方。
现给定 N，请按上述方法构造 N*N 的幻方。

输入格式
输入只有一行，包含一个整数，即幻方的大小。

输出格式
输出包含 N 行，每行 N 个整数，即按上述方法构造出的 N*N 的幻方。相邻两个整数之间用单个空格隔开。

样例
输入样例
3

输出样例
8 1 6
3 5 7
4 9 2
*/
#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n;
	cin>>n;
	int b=1,c=n/2+1;
	for(int t=1;t<=n*n;t++){
		a[b][c]=t;
		if(b==1&&c!=n){
			b=n;
			c=c+1;
			continue;
		}
		if(c==n&&b!=1){
			c=1;
			b=b-1;
			continue;
		}
		if(b==1&&c==n){
			b=b+1;
			continue;
		}
		if(b!=1&&c!=n){
			if(!a[b-1][c+1]){
				b=b-1;
				c=c+1;
			}else{
				b=b+1;
			}
		}
	}
	for(int b=1;b<=n;b++){
		for(int c=1;c<=n;c++){
			cout<<a[b][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
