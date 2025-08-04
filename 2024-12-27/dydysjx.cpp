/*#65. 打印等腰三角形
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
输入正整数n，输出n行用星号打印的等腰三角形

输入格式
一个整数n（n<=30）

输出格式
见样例

样例
input
4

output
   *
  ***
 *****
*******

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=0;k<n-i;k++){
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++){
		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
