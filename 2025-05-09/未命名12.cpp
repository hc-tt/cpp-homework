#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	char w;
	cin>>a>>b;
	cin>>w;
	switch(w){
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			if(b==0||a==0)
			cout<<"error"<<endl;
			else 
			cout<<a/b<<endl;
			break;
	}
	return 0;
}
