/*#24. 【分支结构】马克比较整数大小

题目描述
输入两个整数，比较它们的大小。

输入格式
一行，包含两个整数x和y，中间用单个空格隔开。 0 <= x<2^32,-2^31 <= y < 2^31。

输出格式
输出 一个字符。 若x > y，输出 > ； 若x = y，输出 = ； 若x < y，输出 < ；

样例
input:
1000 100

output:
>

2024-11-29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x>y) cout<<">";
	if(x==y) cout<<"=";
	if(x<y) cout<<"<";
	return 0;
}
