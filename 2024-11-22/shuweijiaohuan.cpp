/*
#15. ��λ����

��Ŀ����
����һ����λ��������֤��������99��С��1000�����������İ�λ���λ���������.

�����ʽ
һ��һ����λ����

�����ʽ
һ��һ������

����
input
123

output
321

��֤��99=<a,b<=999
ʱ�����ƣ�1s
�ռ����ƣ�256MB

2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ;
	cin>>a;
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	num=ge*100+shi*10+bai;
	cout<<num;
	return 0;
}