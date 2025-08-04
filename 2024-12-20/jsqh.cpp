/*#59. 奇数求和
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
计算非负整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。

例如 m=3, n=12, 其和则为：3+5+7+9+11=35。

输入格式
两个数 m 和 n，两个数以一个空格分开，其中 0<= m<= n<= 300 。

输出格式
输出一行，包含一个整数，表示m 到 n（包括m 和 n ）之间的所有奇数的和。

样例
输入样例1
7 15

输出样例1
55
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,sum;
	cin>>m>>n;
	sum=0;
	for( m;m<=n;m++){
		if(m%2!=0) 
			{
				sum+=m;
			}
	}
	cout<<sum;
	return 0;
}
