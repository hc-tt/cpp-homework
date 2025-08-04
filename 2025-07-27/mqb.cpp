#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a1,a2,a3,g1,g2,g3;
	cin>>n;
	cin>>a1>>g1>>a2>>g2>>a3>>g3;
	int f1=(n+a1-1)/a1*g1;
	int f2=(n+a2-1)/a2*g2;
	int f3=(n+a3-1)/a3*g3;
	int mn=min(f1,f2);
	mn=min(mn,f3);
	cout<<mn;
	return 0;
}
