#include<bits/stdc++.h>
using namespace std;
int a[10010];
int b[10010];
int main() {
	int n,k,m,i,j;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	for(int i=0;i<k;i++){
		int pos=b[i]-1;
		int leftmax=0,rightmax=0,resmax=0;
		for(int j=0;j<pos;j++){
			if(a[j]>leftmax){
				leftmax=a[j];
			}
		}
		for(int j=pos+1;j<n;j++){
			if(a[j]>rightmax){
				rightmax=a[j];
			}
		}
		resmax=leftmax>rightmax?leftmax:rightmax;
		cout<<leftmax<<" "<<rightmax<<" "<<resmax<<endl;;
	}
	return 0;
}
