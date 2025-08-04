/*#70. 整数的约数和
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
输入一个自然数x，求这个自然数的所有约数之和。

x 属于int 范围内

输入格式
一个整数 x，x在32位整数范围内。也就是说 x<=2^31

输出格式
x的所有约数和。 x的约数包含本身。

样例
input
6

output
12

数据范围与提示
保证:x<2^31

时间限制：1s

空间限制：256Mb
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	long long sum=0;
	cin>>x;
	for(int i=1;i<=sqrt(x);i++){
		if(x%i==0){
			if(x/i==i)
			sum=sum+i;
			else
			sum=sum+i+x/i;
		}
	}
	cout<<sum;
	return 0;
}

