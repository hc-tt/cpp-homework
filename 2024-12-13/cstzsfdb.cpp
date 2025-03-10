/*
#82. 测试体重是否标准
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
现代社会，人们的生活条件越来越好，许多人都出现的不同程度的肥胖，严重影响了人们的身体健康。

为了青少年朋友的健康，请你编写一个程序，根据输入一个同学的身高（厘米）、体重（千克），判断他（她）的身材是否标准。

说明：标准体重= (身高 - 100)*0.9。如果 实际体重大于标准体重1.1倍 就是过重；如果实际体重<标准体重0.9倍，就是 太轻；否则认为属于标准范畴。

输入格式
输入两个小数，用空格间隔，表示身高、体重。

输出格式
根据输入的身高体重，输出fat(表示胖)或者thin(表示瘦)或者standard(表示标准)。

样例
input
226 130

output
fat
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b;//a表示身高,b表示体重 
	cin>>a>>b;
	if(b==(a-100)*0.9) cout<<"standard";
	else if(a>1.1*(a-100)*0.9) cout<<"fat";
	else if(a<0.9*(a-100)*0.9) cout<<"thin"; 
	return 0;
}
