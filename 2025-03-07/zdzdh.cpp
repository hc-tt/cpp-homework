#include<bits/stdc++.h>
using namespace std;
int a[200005],s[200005];
int main(){
	int n,max=-2147483647,min,mn=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		if(s[i]-mn>max)
		max=s[i]-mn;
		if(max<s[i]-min)
		max=s[i]-min;
	}
	printf("%d\n",max);
	return 0;
}
