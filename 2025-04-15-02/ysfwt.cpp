#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=1;
	}
	int t=0,p=0,j=1;//t��Ϊ��������,pͳ�Ƴ�Ȧ����,j��ʾ��ǰ�����Ǹ���.
	while(p<n){
		if(a[j]==1) t++;
		if(t==m){
			cout<<j<<" ";
			a[j]=0;
			t=0;
			p++;
		}
		j=j+1;
		if(j==n+1) j=1;
	 
	}
	return 0;
}
