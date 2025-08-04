#include<bits/stdc++.h>
using namespace std;
int x;
int main(){
	cin>>x;
	int a=x%2==0;
	int b=x>4&&x<=12;
	int c=a+b;
	if(c==2) cout<<"1"<<" ";
		else cout<<"0"<<" ";
	if(c>=1) cout<<"1"<<" ";
		else cout<<"0"<<" ";
	if(c==1) cout<<"1"<<" ";
		else cout<<"0"<<" ";
	if(c==0) cout<<"1"<<" ";
		else cout<<"0"<<" ";
	return 0;
}
