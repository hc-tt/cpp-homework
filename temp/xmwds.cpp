#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10005]={0};//0 null,1 plant 
	int L,M,b,c,d=0,sum=0;
	cin>>L>>M;
	for(int i=0;i<=L;i++){
		a[i]=1;
	}
	for(int i=1;i<=M;i++){
		cin>>b>>c;
		for(int j=b;j<=c;j++){
			a[j]=0;
		}
	}
	for(int i=0;i<=L;i++){
		d=a[i];
		sum=sum+d;
	}
	cout<<sum<<endl;
	return 0;
}
