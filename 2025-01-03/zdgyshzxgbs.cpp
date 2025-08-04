/*#55. 最大公约数和最小公倍数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
给定两个整数：a b，求 a和b 的最大公约数和最小公倍数。
用gcd(a,b)表示a和b的最大公约数，根据欧几里得算法，有gcd(a,b)=gcd(b,a%b)。

输入格式
两个正整数：a和b (0<a,b<=10000)

输出格式
两个正整数，分别是输入的两个正整数的最大公约数和最小公倍数。 两个数用一个空格分开。

样例
input
6 8

output
2 24

数据范围与提示
保证:a,b<=10000

时间限制：1s

空间限制：256MB


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,d;	
	cin>>a>>b;
	if(a>b)
	swap(a,b);
	for(int i=a;i>=1;i--){
		if(a%i==0 and b%i==0){
			d=i;
			break;
		}
	}
	cout<<d<<" "<<a*b/d;
	return 0;
}
