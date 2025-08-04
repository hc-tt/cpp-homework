#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p,q;
	cin>>p>>q;
	int s;
	int a=0,b=0;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s<p)
		a++;
		if(s>q)
		b++;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
