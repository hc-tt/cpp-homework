#include<bits/stdc++.h>
using namespace std;
int a[33],cnt,b,p,k;
long long ans,x;
void dinary(int x){
	cnt=0;
	while(x>0){
		a[++cnt]=x%2;
		x=x/2;
	}
} 
void work(){
	ans=1;x=b;
	for(int i=1;i<=cnt;i++){
		if(a[i]==1)
		ans=(ans*x)%k;
		x=(x*x)%k;
	}
}
void printf(){
	cout<<b<<"^"<<p<<" mod "<<k<<"="<<ans%k<<endl;
}
int main(){
	cin>>b>>p>>k;
	dinary(p);
	work();
	printf();
	return 0;
}
