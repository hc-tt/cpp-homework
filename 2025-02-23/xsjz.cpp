#include<bits/stdc++.h>
using namespace std;
long long b[105][105];
int main(){
	int N,M;
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(b[i][j]>0){
				cout<<i<<" "<<j<<" "<<b[i][j]<<endl;
			}
		}
	}	
	return 0;
}
