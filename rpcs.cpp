#include<bits/stdc++.h>
using namespace std;
string ss;//�ַ��� 
int a; 
int main(){
	cout<<"                             ��Ʒ�����"<<endl;
	srand(time(0));
	cout<<"Pleas input your name:"<<endl;
	cin>>ss;
	a=rand()%100+1;
	cout<<"��Ʒ�÷�:"<<a<<endl;
	if(a>=0&&a<=20){
		cout<<"����:"<<ss<<",��,��Ҳ����ѽϸ��!!"; 
	}
	else if(a>20&&a<=40){
		cout<<"����:"<<ss<<",��Ҳ������,Ҳ����!!"; 
	}
	else if(a>40&&a<=60){
		cout<<"����:"<<ss<<",���а�,Ҳ����̫��!!"; 
	}
	else if(a>60&&a<=80){
		cout<<"����:"<<ss<<",��!��������,��,���ǲ������!!"; 
	}
	else if(a>80&&a<=100){
		cout<<"����:"<<ss<<",��ϲ��,�㵽���˵�һ��Ʒ�ݶ�!!"; 
	}
	while(1); 
	return 0;
}
