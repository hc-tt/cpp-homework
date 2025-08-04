#include<bits/stdc++.h>
using namespace std;
string ss;//字符串 
int a; 
int main(){
	cout<<"                             人品计算机"<<endl;
	srand(time(0));
	cout<<"Pleas input your name:"<<endl;
	cin>>ss;
	a=rand()%100+1;
	cout<<"人品得分:"<<a<<endl;
	if(a>=0&&a<=20){
		cout<<"评价:"<<ss<<",切,你也不行呀细狗!!"; 
	}
	else if(a>20&&a<=40){
		cout<<"评价:"<<ss<<",你也就那样,也不行!!"; 
	}
	else if(a>40&&a<=60){
		cout<<"评价:"<<ss<<",还行吧,也不是太高!!"; 
	}
	else if(a>60&&a<=80){
		cout<<"评价:"<<ss<<",嘿!继续加油,但,还是不是最高!!"; 
	}
	else if(a>80&&a<=100){
		cout<<"评价:"<<ss<<",恭喜你,你到达了第一人品梯队!!"; 
	}
	while(1); 
	return 0;
}
