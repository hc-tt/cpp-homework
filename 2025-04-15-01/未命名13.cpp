#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,a,b;
	cin>>n>>x>>y;
	if(y/x==0){
		cout<<n-y/x<<endl;
	}
	else if(y/x!=0)
	{
		cout<<n-y/x-1<<endl;
	}
	return 0;
}
