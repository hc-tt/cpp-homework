#include<bits/stdc++.h>
using namespace std;
int a[25][25];
int main(){
	int n,m;
	cin>>n>>m;
	a[0][0]=1;
	for(int i=1;i<=n;i++){
		a[i][0]=1;
		for(int j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	cout<<a[n][m]<<endl;
	return 0;
}
