/*
#43. 星期转换

题目描述
星期转换

给你一个整数，你需要输出它对应的星期。

0对应Sunday，1对应Monday，依次类推。注意，星期几的英语单词必须首字母大写。

如果这个整数不在0到6之间，输出error。

友情提示，星期天到星期六的单词如下：
Sunday Monday Tuesday Wednesday Thursday Friday Saturday
      

输入格式
一个整数

输出格式
对应的星期的单词，或者输出'error'

2024-12-06
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a==0) cout<<"Sunday";
	if(a==1) cout<<"Monday";
	if(a==2) cout<<"Tuesday";
	if(a==3) cout<<"Wednesday";
	if(a==4) cout<<"Thursday";
	if(a==5) cout<<"Friday";
	if(a==6) cout<<"Saturday";
	if(a>6) cout<<"error";
	return 0;
}
