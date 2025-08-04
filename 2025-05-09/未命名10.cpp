#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double d;
	cin>>n;
	if(n<=150){
		d=n*0.4463;
		printf("%.1lf",d);
	}
	else if(n>=151&&n<=400){
		d=150*0.4463+(n-150)*0.4663;
		printf("%.1lf",d);
	}
	else if(n>=400){
		d=150*0.4463+250*0.4663+(n-400)*0.5663;
		printf("%.1lf",d);
	}
	return 0;
}
