#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin>>m;
	if(m/1.2>m/3.0+50){
		cout<<"Bike";
	}
	else if(m/1.2<m/3.0+50){
		cout<<"Walk";
	}
	else
	cout<<"ALL";
	return 0;
}
