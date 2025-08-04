#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int j=i;
		while(j){
			if(j%10==1)
			cnt++;
			j=j/10;
		}
	}
	cout<<cnt;
	return 0;
}
