#include<bits/stdc++.h>
using namespace std;
int a,b,k;
int main(){
	cin>>a>>b>>k;
	int d=pow(10,k);
	int wa=a%d;
	int wb=b%d;
	if(wa==wb){
		cout<<"-1";
	}
	else{
		cout<<a+b;
	}
	return 0;
}
