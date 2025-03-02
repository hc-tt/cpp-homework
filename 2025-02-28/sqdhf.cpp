#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n;
	cin>>n;
	int b=1,c=n/2+1;
	for(int t=1;t<=n*n;t++){
		a[b][c]=t;
		if(b==1&&c!=n){
			b=n;
			c=c+1;
			continue;
		}
		if(c==n&&b!=1){
			c=1;
			b=b-1;
			continue;
		}
		if(b==1&&c==n){
			b=b+1;
			continue;
		}
		if(b!=1&&c!=n){
			if(!a[b-1][c+1]){
				b=b-1;
				c=c+1;
			}else{
				b=b+1;
			}
		}
	}
	for(int b=1;b<=n;b++){
		for(int c=1;c<=n;c++){
			cout<<a[b][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
