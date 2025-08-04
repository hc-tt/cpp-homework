#include<bits/stdc++.h>
using namespace std;
long long x;
int lx;
int main(){
	scanf("%lld %ld",&x,&lx);
	if(x<=3){
		printf("9.00");
		return 0;
	}
	if(lx==1){
		if(x>3&&x<=6){
			double fy=9+(x-3)*1.5;
			printf("%.2lf",fy);
			return 0;
		}
		if(x>6){
			double fy=9+3*1.5+(x-6)*2.25;
			printf("%.2lf",fy);
			return 0;
		}
	}
	if(lx==0){
		if(x>3&&x<=6){
			double fy=9+(x-3)*1.75;
			printf("%.2lf",fy);
		}
		if(x>6){
			double fy=9+1.75*3+(x-6)*2.5;
			printf("%.2lf",fy);
			return 0;
		}
	}
	return 0;
}
