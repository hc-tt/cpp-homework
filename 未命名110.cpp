#include <bits/stdc++.h>
using namespace std;
int main(){	
	int p,x,sum=0;
	p=1;
	x=15;
	sum=x;
	while(sum<=312){
		cout<<p<<" "<<x<<" "<<sum<<endl;
		p++;
		x+=2;
		sum+=x;
	}
    return 0;
}


