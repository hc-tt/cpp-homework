#include<bits/stdc++.h>
using namespace std;
int main(){
	long long A,ans=0;
	while(cin>>A){
		while(A){
		ans=ans*10+A%10;
		A/=10;
		}
	}
	cout<<ans;
	return 0;
}
 
