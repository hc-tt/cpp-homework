#include<bits/stdc++.h>
using namespace std;
int a[15][15];
int main(){
	int n,b=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=b;
			b++;
		}
	}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
				printf("%3d",a[i][j]);
				cout<<endl;
		}
	return 0;
}
