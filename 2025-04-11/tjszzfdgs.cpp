/*
#145. ͳ�������ַ��ĸ���
�ڴ����ƣ�256 MiB
ʱ�����ƣ�1000 ms
��׼�������
��Ŀ���ͣ���ͳ
���ⷽʽ���ı��Ƚ�
�ϴ��ߣ� admin
�û����ƣ� Lv.0
��Ŀ����
����һ���ַ���ͳ�Ƴ����������ַ��ĸ�����

�����ʽ
һ���ַ������ܳ��Ȳ�����255��

�����ʽ
���Ϊ1�У�����ַ������������ַ��ĸ�����

����
input:
Peking University is set up at 1898.
4
*/
#include<bits/stdc++.h>
using namespace std;
char x[230];
int main(){
	int sum=0;
	cin.getline(x,230);
	for(int i=0;x[i]!='\0';i++){
		int a=x[i];
		if (a>47 and a<58){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
