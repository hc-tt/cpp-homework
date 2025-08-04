#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,p;
	double flag=1;
	int a=0,b=0,j=0;
	cin>>s>>p;
	a=s.size();
	b=p.size();
	if(a%b!=0){
		flag=0;
	}
	for(int i=0;i<a;i++){
		if(s[i]!=p[i%b]){
			flag=0;
			}
	}
	if(flag){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
