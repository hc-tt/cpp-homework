/*
#32. Բ����Բ������

��Ŀ����
Բ����Բ����Բ�뾶rΪ��Բ����h ����Բ����Բ�ܳ�C1��Բ�����Sa��Բ������Sb��Բ�����Va��Բ�����Vb��
��������r,h����������������ʱҪ������˵����ȡС�����һλ���֡������� PI��3.14

�����ʽ
������������r��h

�����ʽ
Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� ����һλС����ÿ��������С�

����
input:
1.5 3

output:
C1=9.4
Sa=7.1
Sb=28.3
Va=14.1
Vb=21.2

���ݷ�Χ����ʾ
��ʾ:�뾶Ϊr��Բ��Բ������Ϊ4*pi*r*r,���Ϊ4/3*pi*r*r*r,����Բ��������뾶Ϊr��Բ�����Ϊpi*r*r*h

2024-11-24
*/
#include<bits/stdc++.h>
using namespace std;
const double pi=3.14;
int main(){
	double r,h,C1,Sa,Sb,Va,Vb;
	scanf("%lf %lf",&r,&h);
	C1=2*pi*r;
	Sa=pi*r*r;
	Sb=4*pi*r*r;
	Va=4*pi*r*r*r/3;
	Vb=pi*r*r*h;
	printf("C1=%0.1lf\nSa=%0.1lf\nSb=%0.1lf\nVa=%0.1lf\nVb=%0.1lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
