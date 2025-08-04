#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxsum=-0x7f7f7f7f;
	int minsum=0x7f7f7f7f;
	int maxEndinghere=0;
	int maxSoFar=0;
	for(int i=0;i<n;i++){
		int maxstart=0;
		for(int j=0;j<m;j++){
			maxstart+=a[(i+j)%n];
		}
		if(maxstart>maxsum){
			maxsum=maxstart;
			maxEndinghere=i;
		}
		if(maxstart<minsum){
			minsum=maxstart;
			maxSoFar=i;
		}
	}
	cout<<maxEndinghere+1<<endl;
	cout<<maxSoFar+1<<endl;
	return 0;
}
