#include<bits/stdc++.h>
using namespace std;
int a[33],cnt;
void binary(int x){
	cnt=0;
	while (x>0){
		a[++cnt]=x%2;
		x=x/2;
	}
} 
void printf(){
	int ans=0;
	for(int i=1;i<=cnt;i++)
	if(a[i]==1)
	ans++;
	cout<<ans<<endl;
}
int main(){
	int n;
	cin>>n;
	binary(n);
	printf();
	return 0;
}
