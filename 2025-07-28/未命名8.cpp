#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,mx=INT_MIN,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a>mx)
		mx=a;
	}
	cout<<mx;
	return 0;
}
