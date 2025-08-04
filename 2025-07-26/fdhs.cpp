#include<bits/stdc++.h>
using namespace std;
double x;
int main(){
	cin>>x;
	if(x<0){
		printf("0.0000");
		return 0;
	}
	if(x>=0&&x<10){
		printf("%.4lf",2*x);
		return 0;
	}
	if(x>=10&&x<50){
		printf("%.4lf",2*x+1);
		return 0;
	}
	if(x>=50){
		printf("%.4lf",x/2+50);
	}
	return 0;
}
