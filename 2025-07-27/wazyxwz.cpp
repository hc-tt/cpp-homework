#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b){
		a=a+24;
	}
	if(c<b){
		c=c+24;
	}
	if(a>=b&&a<=c){
		cout<<"N0"
	}
	else{
		cout<<"Yes";
	}
	return 0;
}
