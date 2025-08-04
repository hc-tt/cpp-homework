#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a=0,b=0,c=0;
    cin>>n;
    a=n/100;
    b=n/10-a*10;
    c=n%10;
    if(a>=b&&a>=c){
    	cout<<a<<a<<a;
    	return 0;
    }
	if(b>=a&&b>=c){
    	cout<<b<<b<<b;
    	return 0;
	}
	if(c>=a&&c>=b){
    	cout<<c<<c<<c;
	}
    return 0;
}
