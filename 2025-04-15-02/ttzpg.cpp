#include<bits/stdc++.h>
using namespace std;
long long a[10];
int main(){
	long long b,sum;
	sum=0;
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	cin>>b;
	for(int i=1;i<=10;i++){
		if(a[i]<=b+30){
		sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
