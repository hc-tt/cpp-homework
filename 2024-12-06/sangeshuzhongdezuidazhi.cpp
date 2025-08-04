/*
#22. 三个数中的最大值

题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值

输入格式
一行整数，分别为a b c

输出格式
a b c其中最大的数

样例
input:
10 20 30

output:
30

2024-12-06
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b&&a>=c) cout<<a;
	else
		if(b>=a&&b>=c) cout<<b;
		else
			if(c>=a&&c>=b) cout<<c;
	return 0;
}
