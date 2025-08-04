#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,k,s,t,e=0,f=0;
    cin>>a>>b>>c>>k;
	cin>>s>>t;
	e=s*(a-c)+t*(b-c);
    if(s+t>=k){
    	cout<<e;
    	return 0;
	}
	f=s*a+t*b;
	cout<<f;
    return 0;
}
