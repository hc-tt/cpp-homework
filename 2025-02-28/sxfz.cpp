#include<bits/stdc++.h>
using namespace std;
int a[150][150];
int main(){
	int n;
	cin>>n;
	int i=1,j=0,tnt=0;
	while(tnt<n*n){
		while(j+1<=n&&a[i][j+1]==0){
			a[i][++j]=++tnt;
		}
		while(i+1<=n&&a[i+1][j]==0){
			a[++i][j]=++tnt;
		}
		while(j-1>=1&&a[i][j-1]==0){
			a[i][--j]=++tnt;
		}
		while(i-1>=1&&a[i-1][j]==0){
			a[--i][j]=++tnt;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%-7d",a[i][j]);
			cout<<endl;
	}
	return 0;
}
