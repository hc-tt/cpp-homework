#include<bits/stdc++.h>
using namespace std;
int main(){
	int L,R,sum;
	cin>>L>>R;
	for(int i=L;i<=R;i++){
		int j=i;
		while(j){
			if(j%10==2)
			sum++;
			j=j/10;
		}
	}
	cout<<sum;
	return 0;
}
