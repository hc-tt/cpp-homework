#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n,m;
	int minn=100000,x,y;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]<minn){
				minn=a[i][j];
				x=i;
				y=j;
			}
		}
	}
	printf("%d %d %d",minn,x,y);
	return 0;
}
