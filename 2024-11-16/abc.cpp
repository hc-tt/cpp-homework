/*
#78. ����(a+b)*c��ֵ

��Ŀ����
����3������a��b��c��������ʽ(a+b)*c��ֵ��

�����ʽ
�����һ�У�������������a��b��c, ������֮����һ���ո�ֿ���
(��10,000 <= a,b,c <= 10,0000)

�����ʽ
���һ�У������ʽ��ֵ

��������1
2 3 5

�������1
25
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	long long mul;
	cin>>a; 
	if(a >= -10000 and a <=100000)
	{
		cin>>b; 
		if(b >= -10000 and b <= 100000)
		{
		cin>>c; 
			if(c >= -10000 and c <= 100000)
			{
				mul=(a+b)*c; 
				cout<<mul<<endl;
				return 0;
			}
			else
			{
				//cout<<"����c����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
				return 0;
			}
		}
		else
		{
			//cout<<"����b����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
			return 0;
		}
	}
	else
	{
		//cout<<"����a����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
		return 0;
	}
}   

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long a,b,c,mul;
//	cin>>a; 
//	if(a<-10000 or a>100000)
//	{
//		//cout<<"����a����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
//		return 0;
//	}
//	else
//	{
//		cin>>b
//		if(b<-10000 or b>100000)
//		{
//			//cout<<"����b����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
//			return 0;
//		}
//		else
//		{
//			cin>>c;
//			if(c<-10000 or c>100000)
//			{
//				//cout<<"����c����ֵ���ܴ���100000��С��-10000,������ֹ!"<<endl;
//				return 0;
//			}
//			else
//			{
//				mul=(a+b)*c; 
//				cout<<mul<<endl;
//				return 0;	
//			}
//		}
//	}
//}

