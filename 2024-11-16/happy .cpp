/*
#7. �����ˮ
��Ŀ����
һֻ����ڿ��ˣ�Ҫ��20��ˮ���ܽ�ʣ�������ֻ��һ����h���ף�����뾶Ϊr���׵�СԲͰ(h��r��������)���ʴ�������Ҫ�ȶ���Ͱˮ�Ż��ʡ�

�����ʽ
������һ�У�����������������һ���ո�ֿ����ֱ��ʾСԲͰ����h�͵���뾶r����λ�������ס�

�����ʽ
���һ�У�����һ����������ʾ��������Ҫ��ˮ��Ͱ����

����
��������1
23  11

�������1
3
*/

#include<bits/stdc++.h>=
using namespace std;
int main(){
	const double pi=3.1415926;
	int h,r,number;
	float v;
	cin>>h>>r;
	v=pi*r*r*h;
	number=ceil(20*1000/v);
	cout<<number<<endl;
	return 0;
}