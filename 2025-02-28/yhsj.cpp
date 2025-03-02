#include<bits/stdc++.h>
using namespace std;
int a[25][25];
int main(){
	int n;
	a[1][1]=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		printf("%6d",a[i][j]);
		cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
