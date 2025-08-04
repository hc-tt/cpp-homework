#include<bits/stdc++.h>
using namespace std;
int lx;
long long x;
int main(){
	scanf("%lld %d",&x,&lx);
	if(x<=3){
		printf("9.00");
	}
	if(x>3&&x<=6){
		double fy=9+(lx==1?1.5:1.75)*(x-3);
		printf("%.2lf",fy);
	}
	if(x>6){
		double fy=9+(lx==1?1.5:1.75)*3+(lx==1?2.25:2.5)*(x-6);
		printf("%.2lf",fy);
	}
	return 0;
}
