/*
#23. ����֧�ṹ����˽����ֵ����

��Ŀ����
����һ�����������������������ľ���ֵ��������С�������λ

�����ʽ
����һ���������������ֵ������10000��

�����ʽ
�������������ľ���ֵ��������С�������λ��

����
input:
-3.14

output:
3.14

2024-12-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	double num;
	scanf("%lf",&num);
	if(num<0) printf("%0.2lf",num*-1);
	else printf("%0.2lf",num);
	return 0;
}
