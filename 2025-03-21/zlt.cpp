#include<bits/stdc++.h>
using namespace std;
long long f[55];
int main(){
	int n;
	scanf("%d",&n);
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	printf("%d",f[n]);
	return 0;
}

