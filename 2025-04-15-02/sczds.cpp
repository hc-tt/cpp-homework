#include<bits/stdc++.h>
using namespace std;
int a[105]{0};
int main(){
	int i,n,m=0,Max=-0x7f7f7f7f; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>Max) Max=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]!=Max){
			cout<<a[i]<<" ";
		}
		else m++;
	}
	if (m==n) cout<<"none"<<endl;
	return 0;
}
