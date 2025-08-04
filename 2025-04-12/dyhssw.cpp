/*
B. 打渔还是晒网
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
题目描述
有句俗话叫——“三天打渔，两天晒网”。

如果小爱前三天打渔，后两天晒网，一直重复这个过程，那么在第 n 天，她是在打渔还是晒网呢？

输入格式
单个整数表示 n。

输出格式
如果在打渔，输出 Fishing； 如果在晒网，输出 Lying

样例
样例输入 1
1
样例输出 1
Fishing
样例输入 2
10
样例输出 2
Lying
数据范围与提示
1<=n<=10000
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%5==0||n%5==4){
		cout<<"Lying";
	}
	else{
		cout<<"Fishing";
	}
	return 0;
}
