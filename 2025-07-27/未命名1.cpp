#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c=0,Max=-0x7f7f7f7f,d=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b;
		if(b>Max) Max=b;
		d+=b;
	}
	if(Max<d-Max){
		cout<<"Yes";
	}
	else
	cout<<"No";
	return 0;
}
