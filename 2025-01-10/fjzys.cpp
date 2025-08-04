/*#88. 分解质因数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入一个正整数，分解为质因数乘积
如 12=2*2*3

输入格式
一行一个整数n,1<n<=100000000.

输出格式
一行乘积表达式

样例
input
12
output
2*2*3

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt;
	cnt=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			n=n/i;
			if(n<=1)
			cout<<i;
			else
			cout<<i<<"*";
		}		
	}
	return 0;
}	
