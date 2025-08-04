#include<bits/stdc++.h>
#define inf 2100000000
using namespace std;
int a[200005],s[200005];
int main(){
	int  n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	int mn=0,mx=-inf;
	for(int i=1;i<=n;i++){
		if(s[i]-mn>mx)
		mx=s[i]-mn;
		mn=min(s[i],mn);
	}
	printf("%d\n",mx);
	return 0;
}
