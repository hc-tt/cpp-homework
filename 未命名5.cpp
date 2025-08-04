#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a=0,b=0,c=0;
	freopen("test","r",stdin);
	scanf("%lld %lld",&a,&b);
	if(a==1) {
		printf("1\n");
		return 0; 
	}
	if (b==1) {
		printf("%lld",a);
		return 0;
	}
	if (a>31622){		//31622是1000000000的开根号 
		printf ("-1\n");
		return 0;
	} 
	if (b>29) {
		printf("-1\n");
		return 0;
	}
	c=pow(a,b);
	if(c<=1000000000)
	cout<<c;
	else 
	cout<<"-1";
	return 0;
}	
