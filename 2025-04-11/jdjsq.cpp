/*
#144. 简单计算器
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
试编写一个根据用户键入的两个操作数和一个运算符，由计算机输出运算结果的程序。 为了方便起见，第一行输入两个输入数，第二行输入操作符（+，-，*，/）. 除法用整除。 如果除数位0，输出 "error"

输入格式
第一行用空格隔开的两个整数。 第二行一个运算字符。 保证数据合法。

输出格式
运算结果的一个整数，或者错误信息 "error"。

样例
input
2 3
+

output
5

数据范围与提示
时间限制：1S

空间限制：256MB
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,d;
	char s;
	scanf("%d%d %c",&x,&y,&s);
	switch(s){
		case'+':d=x+y;printf("%d\n",d);break;
		case'-':d=x-y;printf("%d\n",d);break;
		case'*':d=x*y;printf("%d\n",d);break;
		case'/':if(y==0) printf("error");
						else printf("%d",x/y);
						break;
		default:printf("Invalid operator!");
	}
	return 0;
}
