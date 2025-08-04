#include<bits/stdc++.h>
using namespace std;
bool a[15];
int main(){
	int n,m,x;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=n;i++)
		if(!a[i])
		cout<<i<<" ";
	return 0;
}
