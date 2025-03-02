#include<bits/stdc++.h>
using namespace std;
int a[150][150];
int main(){
	int n,t=1,i=1,j=1;
	cin>>n;
	a[i][j]=t;
	while(j+1<=n)a[i][++j]=++t;
	while(i+1<=n)a[++i][j]=++t;
	while(j-1>=1)a[i][--j]=++t;
	while(i-1>1)a[--i][j]=++t;
	a[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d",a[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
