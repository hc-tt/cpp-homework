/*
#31. �ж�����

��Ŀ����
�������year�����б������Ƿ����ꡣ

�����ʽ
һ�����

�����ʽ
�����Ƿ���������������"L",�����"N"

����
input:
2000

output:
L

2024-11-29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	if((year%4==0)&&(year%100!=0)||(year%400==0)) cout<<"L";
	else cout<<"N";
	return 0;
}
