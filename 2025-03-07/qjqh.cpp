/*
#117. 区间求和
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
求一段给定区间的和

输入格式
第一行两个数字n，m，表示n个数字，m次询问。

第二行一共n个数字ai。

接下来的m行每行两个数字l,r(r>=l)用空格隔开，表示m次询问，询问l到r区间之和。

输出格式
共m行，每行表示一次询问的结果。

样例
input
6 4
5 2 6 3 1 9
2 6
1 5
3 4
1 6

output
21
17
9
26
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000005],s[10000005];
int main(){
	int n,m,l,r;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",s[r]-s[l-1]);
	}
	return 0;
}
