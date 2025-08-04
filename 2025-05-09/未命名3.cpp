#include<bits/stdc++.h>
using namespace std;
int v[5005][5005];
int main(){
	int n,r,ans=0,x,y,vi;
	scanf("%d%d",&n,&r);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&x,&y,&vi);
		v[x+1][y+1]=vi;
	}
	for(int i=1;i<=5000;i++){
		for(int j=1;j<=5000;j++){
			v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
		}
	}
	for(int i=0;i<=5000-r;i++){
		for(int j=0;j<=5000-r;j++){
			ans=max(ans,v[i+r][j+r]-v[i+r][j]-v[i][j+r]+v[i][j]);
		}
	}
	printf("%d\n",ans);
	return 0;
}
