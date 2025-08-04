#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n,b,c;
	b=0,c=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	c=a[1];
	for(int i=2;i<=n;i++){
			if (a[i]<c) {
				c=a[i];
				b=i;
			}
	}
	c=a[1];
	a[1]=a[b];
	a[b]=c;	
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}	
	return 0;
}
