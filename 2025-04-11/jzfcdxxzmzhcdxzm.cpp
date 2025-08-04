/*
#148. 将字符串中的小写字母转换成大写字母
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
给定一个字符串，将其中所有的小写字母转换成大写字母。

输入格式
输入一行，包含一个字符串（长度不超过100，可能包含空格）。

输出格式
输出转换后的字符串。

样例
输入样例1:
helloworld123Ha
输出样例1:
HELLOWORLD123HA
*/
#include<bits/stdc++.h>
using namespace std;
char ch[105];
int main(){
	cin.getline(ch,105);
	for(int i=0;ch[i]!='\0';i++){
		char s=ch[i];
		int ss=s;
		if (ss<48 or ss>57){
			if(ss>96 and ss<123){
				ss=ss-32;
			}
		}
		cout<<char(ss);
	}
	return 0;
}
