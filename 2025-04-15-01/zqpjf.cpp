#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,y,z,w,a,b,c;
	cin>>x>>y>>z;
	c=x*6;
	a=c-(y*5);
	b=c-(z*5);
	w=(c-a-b)/4;
	printf("%.1lf",w);
	cout<<endl;
	return 0;
}
