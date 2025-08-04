#include<bits/stdc++.h>
using namespace std;
int a[105],n,sum,t;
double j;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	j=sum*1.0/n;
	for(int i=1;i<=n;i++){
		if(j>a[i])
		t++;
	}
	cout<<t<<endl;
	return 0;
}
