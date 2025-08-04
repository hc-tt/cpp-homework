/*#61. 判断素数
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
给定一个数(int范围内)，判定是不是素数. 如果是，输出‘Yes’ ；如果不是，输出‘No’。（输出内容是单引号内的内容）

输入格式
一个整数，保证此数是长整范围内。

输出格式
‘Yes’ 或者 ‘No’

样例
input
2

output
Yes
数据范围与提示
时间限制：1S

空间限制：256mb
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,i;
	bool flag=1;
	cin>>a;
	for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0) flag=0;
			
		}
	if (flag) 
		{
			cout<<"Yes";
		} 
	else
		{
			cout<<"No";
		}
	return 0;
}
