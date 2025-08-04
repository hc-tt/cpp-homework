#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	double s,p;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&c+b>a){
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf",s);
	}
	return 0;
}
