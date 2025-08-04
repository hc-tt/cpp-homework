/*
D. 逢七必过
内存限制：128 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
题目描述
逢七必过的游戏规则如下：对一个区间内的整数进行报数，若遇到的数字是 7 的倍数或个位数是 7，则不报数，输出 pass。给定开始游戏的第一个整数 a，及结束游戏时的最后一个整数 b，请输出整个报数过程。

输入格式
两个整数 a 与 b。

输出格式
若干行：每行一个数字或者一个单词 pass。

样例
样例1
1 10
1
2
3
4
5
6
pass
8
9
10
样例2
41 50
41
pass
43
44
45
46
pass
48
pass
50
数据范围与提示
1<=a<=b<=10000
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%7==0||i%10==7)
		cout<<"pass"<<endl;
		else 
		cout<<i<<endl;
	}
	return 0;
}
