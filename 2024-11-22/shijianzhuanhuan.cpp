/*
#79. ʱ��ת��

��Ŀ����
����һ����������ת��ΪСʱ���֡��� ��

�����ʽ
һ����������ʾ������( 1<=����<=2147483647 )

�����ʽ
���У��ֱ��ʾת����õ���Сʱ���֡��롣

����
input:
4000

output:
1
6
40

2024-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int z,h,m,s;
	cin>>z;
	h=z/3600;
	m=z%3600/60;
	s=z%3600%60;
	cout<<h<<endl;
	cout<<m<<endl;
	cout<<s;
	return 0;
}
