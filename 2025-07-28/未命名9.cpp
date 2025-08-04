#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0,y;
	cin>>n;
	for(int x=1;x<=n;x++){
		y=n/2-x;
		if(x<=y){
			cout<<x<<" "<<y<<endl;
			cnt++;
		}
		else 
		break;
	}
	cout<<cnt;
	return 0;
}
