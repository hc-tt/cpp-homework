#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
	long long n,x;
	memset(a,-1,sizeof(a));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x]++;
	}		
	for(int i=1;i<=10000000;i++)
		for(int j=0;j<=a[i];j++)
			cout<<i<<" ";
	return 0;
} 
