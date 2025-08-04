#include<bits/stdc++.h>
using namespace std;
int a[15];
int main(){
	int x,l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		x=i;
		while(x){
			a[x%10]++;
			x=x/10;
		}
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	return 0;
}
