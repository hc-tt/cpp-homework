#include<bits/stdc++.h>
using namespace std;
int f[55];
int main(){
	long long x;
	scanf("%d",&x);
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=x;i++){
		f[i]=f[i-1]+f[i-2];
	}
	printf("%d",f[x]);
	return 0;
}
