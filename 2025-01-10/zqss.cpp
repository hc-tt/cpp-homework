/*#87. 再求素数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入n，输出小于n的质数。
程序细节：如何不超时！ 合理使用break； 尽量让循环少运算；

输出 从2 到n 之间 所有的素数。 如果n也是，也输出n。

输入格式
一个整数n，输入数据保证n<600000

输出格式
多行数据，每行一个素数，从小到大顺序输出。

样例
input
10

output
2
3
5
7

数据范围与提示
保证n<=60000

时间限制：1s

空间限制：256MB
*/#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		bool flag=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("%d\n",i);
		}
	}
	return 0;
}
