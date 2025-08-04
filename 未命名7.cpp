#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	int a=1,b=1;
	cout<<a<<" "<<b<<" ";
	int c=0;
	for(long long i=3;i<=k;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	return 0;
}

