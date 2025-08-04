/*#62. 完全数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
一个正整数如果恰好等于它的所有真因数之和，那么这个数就称为“完全数”。

例如，6的真因数是1，2，3，而1+2+3=6所以6是完全数，相对于完全数，如果一个数小于它的所有真因数之和，那么这个数就称为“不足数”，反之称为“过剩数”，

请判断一个正整数是完全数、不足数还是过剩数。

输入格式
输入一个正整数n（1<=n<=）

输出格式
如果是完全数，输出“”；如果是不足数，输出“”；过剩数则输出“”。

样例
输入样例1
6

输出样例1
Perfect

输入样例2
24

输出样例2
Deficient

输入样例3
27

输出样例3
Abundant
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum;
	sum=0;
	cin>>n;
	for(int i=1;i<n;i++)
		{
			if(n%i==0) 
			{
				sum+=i;
			}
			
		}
	if(sum==n){
		cout<<"Perfect";
	}
	else if(sum>n){
		cout<<"Deficient";
	}
	else {
		cout<<"Abundant";
	}
	return 0;
}
