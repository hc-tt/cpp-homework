#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n,t=1;
	cin>>a>>b>>n;
	cout<<a/b;
	cout<<".";
	while(t<=n){
		a=(a%b)*10;
		cout<<a/b;
		++t;
	}
	return 0;
}
