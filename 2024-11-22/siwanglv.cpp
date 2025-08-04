/*
#33. 死亡率

题目描述
输入某种病的确诊数和死亡数，计算其死亡率。

输入格式
输入一行，两个整数，分别为确诊数和死亡数。

输出格式
输出死亡率，以百分数形式输出，保留3位小数。

样例
input:
100000 21

output:
0.021%

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	float c;
	scanf("%d %d",&a,&b);
	c=(float)b/a*100;
	printf("%0.3f",c);
	cout<<"%";
	return 0;
}
