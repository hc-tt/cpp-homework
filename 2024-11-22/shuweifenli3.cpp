/*
#17. ��λ����֮��λ��

��Ŀ����
����һ����λ��S����λ�ϵ�������a��ʮλ�ϵ�������b����λ�ϵ�������c��

���λ������a��ʮλ����b����λ������c�ĺͣ���a+b+c��ֵ��

�󽻻���λ�͸�λ�ϵ����֡�����µ���λ��

�����ʽ
һ��������λ����S

�����ʽ
�������2������
��һ��Ϊ�����λ������a��ʮλ����b����λ������c�ĺͣ���a+b+c��ֵ��
�ڶ���Ϊ��������λ�͸�λ�ϵ����֡�����µ���λ��

����
��������1:
243

�������1:
9
342
2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,ge,shi,bai,a;
	cin>>a;
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	num=bai+shi+ge;
	cout<<num<<endl;
	num=ge*100+shi*10+bai;
	cout<<num;
	return 0;
}