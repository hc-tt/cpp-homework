#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,p,sum=0;
	int a[105]{0};//1 open ,0 close
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		for(int j=i;j<=n;j+=i){
			a[j-1]=!a[j-1];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
