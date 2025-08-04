#include<bits/stdc++.h>
using namespace std;
long long a[5005][5005];
int main(){
	int xa,ya,xb,yb,n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			a[i][j]=a[i][j-1]+a[i-1][j]-a[i-1][j-1]+a[i][j];
		}
	for(int i=1;i<=k;i++){
		scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
		printf("%d\n",a[xb][yb]-a[xb][ya-1]-a[xa-1][yb]+a[xa-1][ya-1]);
	}
	return 0;
}
