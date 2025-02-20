#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((i==j)||(i+j==n+1)){
				a[i][j]+=x;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%5d",a[i][j]);
			printf("\n");
	}
	return 0;
}
