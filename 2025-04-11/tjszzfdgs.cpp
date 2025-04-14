/*
#145. 统计数字字符的个数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
输入一行字符，统计出其中数字字符的个数。

输入格式
一行字符串，总长度不超过255。

输出格式
输出为1行，输出字符串里面数字字符的个数。

样例
input:
Peking University is set up at 1898.
4
*/
#include<bits/stdc++.h>
using namespace std;
char x[230];
int main(){
	int sum=0;
	cin.getline(x,230);
	for(int i=0;x[i]!='\0';i++){
		int a=x[i];
		if (a>47 and a<58){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
