#include<bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	if(year%4==0&&year%100!=0||year%400==0)
	cout<<"Leap Year!"<<endl;
	else
	cout<<"Common Year!"<<endl;
	return 0;
}
