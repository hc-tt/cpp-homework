#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n,x,s=0;
	memset(a,-1,sizeof(a));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x]=x;
	}	
	for(int i=1;i<=1000;i++)
		if(a[i]!=-1) 
		s=s+1;
	cout<<s<<endl;
	for(int i=1;i<=1000;i++)
		if(a[i]!=-1)
		cout<<a[i]<<" ";
	return 0;
}
