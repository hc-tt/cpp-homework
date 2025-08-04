#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	if(n>=90&&n<=100){
		cout<<"A";
	}
	if(n>=77&&n<=89){
		cout<<"B";
	}
	if(n>=67&&n<=76){
		cout<<"C";
	}
	if(n>=60&&n<=66){
		cout<<"D";
	}
	if(n>=0&&n<=59){
		cout<<"E";
	}
	return 0;
}
