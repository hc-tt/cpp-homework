#include<bits/stdc++.h>
using namespace std;
double sg,tz;
int main(){
	scanf("%lf %lf",&sg,&tz);
	double bz=(sg-100)*0.9;
	if(tz>=1.*tz){
		cout<<"fat";
	}
	if(tz<=bz*0.9){
		cout<<"thin";
	}
	if(tz=1.1*bz&&tz>0.9*bz){
		cout<<"standard";
	}
	return 0;
}
