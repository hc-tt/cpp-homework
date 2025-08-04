#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=100;i++){
		sum+=i;
		if(sum>=1000)
		break;
	}
	cout<<sum;
	return 0;
}
