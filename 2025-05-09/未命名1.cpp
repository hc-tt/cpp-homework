#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
	int n,m,l,r;
	scanf("%d%d",&n,&m); 
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&l,&r);

		printf("%d\n",b[r]-b[l-1]);
	}
	return 0;
}
