#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n,a,b,c,d;
	 cin>>n;
	 a=n/1000;
	 b=(n%1000)/100;
	 c=(n%100)/10;
	 d=n%10;
	 if(b==0&&c==0&&d==0){
	 	cout<<a<<endl;
	 }
	 else if(d==0){
	 	cout<<c<<b<<a<<endl;
	 }
	 else
	 cout<<d<<c<<b<<a<<endl;
	return 0;
}
