/*
#78. 计算(a+b)*c的值

题目描述
给定3个整数a、b、c，计算表达式(a+b)*c的值。

输入格式
输入仅一行，包括三个整数a、b、c, 数与数之间以一个空格分开。
(－10,000 <= a,b,c <= 10,0000)

输出格式
输出一行，即表达式的值

输入样例1
2 3 5

输出样例1
25
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	long long mul;
	cin>>a; 
	if(a >= -10000 and a <=100000)
	{
		cin>>b; 
		if(b >= -10000 and b <= 100000)
		{
		cin>>c; 
			if(c >= -10000 and c <= 100000)
			{
				mul=(a+b)*c; 
				cout<<mul<<endl;
				return 0;
			}
			else
			{
				//cout<<"输入c的数值不能大于100000或小于-10000,程序将终止!"<<endl;
				return 0;
			}
		}
		else
		{
			//cout<<"输入b的数值不能大于100000或小于-10000,程序将终止!"<<endl;
			return 0;
		}
	}
	else
	{
		//cout<<"输入a的数值不能大于100000或小于-10000,程序将终止!"<<endl;
		return 0;
	}
}   

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long a,b,c,mul;
//	cin>>a; 
//	if(a<-10000 or a>100000)
//	{
//		//cout<<"输入a的数值不能大于100000或小于-10000,程序将终止!"<<endl;
//		return 0;
//	}
//	else
//	{
//		cin>>b
//		if(b<-10000 or b>100000)
//		{
//			//cout<<"输入b的数值不能大于100000或小于-10000,程序将终止!"<<endl;
//			return 0;
//		}
//		else
//		{
//			cin>>c;
//			if(c<-10000 or c>100000)
//			{
//				//cout<<"输入c的数值不能大于100000或小于-10000,程序将终止!"<<endl;
//				return 0;
//			}
//			else
//			{
//				mul=(a+b)*c; 
//				cout<<mul<<endl;
//				return 0;	
//			}
//		}
//	}
//}

