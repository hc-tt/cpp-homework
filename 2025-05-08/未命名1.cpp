#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,a4,a5,a6,a7;
double s;
void intn(){
	cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
}
double aree(int a,int b,int c){
	double d,p;
	p=(a+b+c)/2;
	d=sqrt(p*(p-a)*(p-b)*(p-c));
	return d;
}
void cal(){
	s=aree(a4,a5,a7)+aree(a1,a7,a6)+aree(a2,a6,a3);
}
void print(){
	printf("%.2f\n",s);
}
int main(){
	intn();
	cal();
	print();
	return 0;
}
