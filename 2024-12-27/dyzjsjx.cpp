/*#64. 打印直角三角形
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入n（1<=n<=50），输出n行用*号表示的直角三角形。

输入格式
整数n

输出格式
见样例

样例
input
5

output
*
**
***
****
*****

数据范围与提示
1<=n<=50
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		cout<<"*";
		}
	}
		cout<<endl;
	return 0;
}
