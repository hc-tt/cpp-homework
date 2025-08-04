#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n,temp;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int j=n;j>=2;j--)
		if(a[j]<a[j-1]){	
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
	}
	cout<<a[1]<<endl;
	return 0;
}
