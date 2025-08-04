#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main() {
	int n,x,k,i;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int j=1;j<=m;j++){
		cin>>x;
		if(x==1){
			cin>>i;
			cout<<a[i]<<endl;
		}
		if(x==2){
			cin>>i>>k;
			for(int s=n;s>=i+1;s--)
				a[s+1]=a[s];
				a[i+1]=k;
				n++;
		}
		if(x==3){
			cin>>i;
			for(int s=i;s<=n;s++){
				a[s]=a[s+1];
			}
			n--;
		}
		if(x==4){
			cin>>k;
			bool sum=0;
			for(int s=1;s<=n;s++){
				if(a[s]==k){
					cout<<s<<endl;
					sum=1;
					break;
				}
			}
			if(sum==0)
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
