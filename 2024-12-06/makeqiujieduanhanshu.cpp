/*
#30. 【分支结构】马克求解段函数

题目描述
编写程序，计算下列分段函数的值。

输入格式
一个浮点数x,0 <= x < 20

输出格式
输出对应的分段函数值y。结果保留到小数点后三位。

样例
input:
1.0

output:
1.500

2024-12-06
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,y;
	scanf("%lf",&x);
	if(0<=x&&x<5) y=-x+2.5;
	if(5<=x&&x<10) y=2-1.5*(x-3)*(x-3);
	if(10<=x&&x<20) y=x/2-1.5;
	printf("%.3lf",y);
	return 0;
}

