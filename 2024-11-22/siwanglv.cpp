/*
#33. ������

��Ŀ����
����ĳ�ֲ���ȷ�������������������������ʡ�

�����ʽ
����һ�У������������ֱ�Ϊȷ��������������

�����ʽ
��������ʣ��԰ٷ�����ʽ���������3λС����

����
input:
100000 21

output:
0.021%

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	float c;
	scanf("%d %d",&a,&b);
	c=(float)b/a*100;
	printf("%0.3f",c);
	cout<<"%";
	return 0;
}