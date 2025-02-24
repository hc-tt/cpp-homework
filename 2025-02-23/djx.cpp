#include<bits/stdc++.h>
using namespace std;
int b[15][15];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i+j==n+1){
				b[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d",b[i][j]);
		}
			cout<<"\n";
	}
	return 0;
}
