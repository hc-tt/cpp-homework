/*
#144. �򵥼�����
�ڴ����ƣ�256 MiB
ʱ�����ƣ�1000 ms
��׼�������
��Ŀ���ͣ���ͳ
���ⷽʽ���ı��Ƚ�
�ϴ��ߣ� admin
�û����ƣ� Lv.0
��Ŀ����
�Ա�дһ�������û������������������һ����������ɼ��������������ĳ��� Ϊ�˷����������һ�������������������ڶ��������������+��-��*��/��. ������������ �������λ0����� "error"

�����ʽ
��һ���ÿո���������������� �ڶ���һ�������ַ��� ��֤���ݺϷ���

�����ʽ
��������һ�����������ߴ�����Ϣ "error"��

����
input
2 3
+

output
5

���ݷ�Χ����ʾ
ʱ�����ƣ�1S

�ռ����ƣ�256MB
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,d;
	char s;
	scanf("%d%d %c",&x,&y,&s);
	switch(s){
		case'+':d=x+y;printf("%d\n",d);break;
		case'-':d=x-y;printf("%d\n",d);break;
		case'*':d=x*y;printf("%d\n",d);break;
		case'/':if(y==0) printf("error");
						else printf("%d",x/y);
						break;
		default:printf("Invalid operator!");
	}
	return 0;
}
