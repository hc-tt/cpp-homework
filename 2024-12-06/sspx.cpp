/*
50. 三数排序

题目描述
读入三个数，将三个数按从大到小的顺序输出。

输入格式
三个用空格分开的整数。保证三个数均不相等。

输出格式
表示三个从大到小的式子。具体看样例。

样例
input
6 19 1

output
19>6>1

2024-12-06
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c) 
		{
			cout<<a<<">";
			if (b>c) cout<<b<<">"<<c;
			else cout<<c<<">"<<b;
		}
	else if (b>a&&b>c) 
		{
			cout<<b<<">";
			if (a>c) cout<<a<<">"<<c;
			else cout<<c<<">"<<a;
		}
		
	else if (c>a&&c>b)
		{
			cout<<c<<">";	
			if (a>b) cout<<a<<">"<<b;
			else cout<<b<<">"<<a;
		}
	return 0;
}

