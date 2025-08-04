#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	double a=n%3==0;
	double b=n%5==0;
	double c=n%7==0;
	if(a&&b&&c){
		cout<<"3 5 7";
		return 0;
	}
	if(a&&b){
		cout<<"3 5";
		return 0;
	}
	if(b&&c){
		cout<<"5 7";
		return 0;
	}
	if(a&&c){
		cout<<"3 7";
		return 0;
	}
	if(a){
		cout<<"3";
		return 0;
	}
	if(b){
		cout<<"5";
		return 0;
	}
	if(c){
		cout<<"7";
		return 0;
	}
	cout<<"n";
	return 0;
	return 0;
}
