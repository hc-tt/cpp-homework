#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c!=180){
		cout<<"Error";
		return 0;
	}
	if(a==b&&a==c&&b==c){
		cout<<"Equilateral";
		return 0;
	}
	if(a==90||b==90||c==90){
		if(a==b||b==c||a==c){
			cout<<"Isosceles right";
			return 0;
		}
		cout<<"Right";
		return 0;
	}
	if(a==b||b==c||a==c){
		cout<<"Isosceles";
		return 0;
	}
	cout<<"Scalene";
	return 0;
}
