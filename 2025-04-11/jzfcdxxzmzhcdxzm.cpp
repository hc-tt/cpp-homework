/*
#148. ���ַ����е�Сд��ĸת���ɴ�д��ĸ
�ڴ����ƣ�256 MiB
ʱ�����ƣ�1000 ms
��׼�������
��Ŀ���ͣ���ͳ
���ⷽʽ���ı��Ƚ�
�ϴ��ߣ� admin
�û����ƣ� Lv.0
��Ŀ����
����һ���ַ��������������е�Сд��ĸת���ɴ�д��ĸ��

�����ʽ
����һ�У�����һ���ַ��������Ȳ�����100�����ܰ����ո񣩡�

�����ʽ
���ת������ַ�����

����
��������1:
helloworld123Ha
�������1:
HELLOWORLD123HA
*/
#include<bits/stdc++.h>
using namespace std;
char ch[105];
int main(){
	cin.getline(ch,105);
	for(int i=0;ch[i]!='\0';i++){
		char s=ch[i];
		int ss=s;
		if (ss<48 or ss>57){
			if(ss>96 and ss<123){
				ss=ss-32;
			}
		}
		cout<<char(ss);
	}
	return 0;
}
