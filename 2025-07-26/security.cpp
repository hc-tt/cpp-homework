#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int q=n/1000;
	n=n%1000;
	int b=n/100;
	n=n%100;
	int s=n/10;
	int g=n%10;
	if(q==b||b==s||s==g){
		cout<<"Bad";
	}
	else{
		cout<<"Good";
	}
	return 0;
}
