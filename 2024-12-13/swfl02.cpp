#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,x1,x2,i,n,ii;
	cin>>x;
	x1=x;
	i=0;
	n=1;
	while(i<n){
		x1=x1/10;
		if (x1==0){
			ii=i+1;
			i=1;
			n=1;
		} 
		else {
			++i;
			++n;
		} 
	}
	i=0;
	while(i<ii){
		x2=x%10;
		cout<<" "x2;
		x=x/10;
		++i;  
	}
	return 0;
}
