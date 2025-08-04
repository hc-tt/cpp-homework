#include<bits/stdc++.h>
using namespace std;
double dis(double xa,double ya,double xb,double yb){
	double d;
	d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	return d;
}
double cir(double a,double b,double c){
	return a+b+c;
}
double aree(double a,double b,double c){
	double s,p;
	p=cir(a,b,c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double xa,ya,xb,yb,xc,yc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	double dis1=dis(xa,ya,xb,yb);
	double dis2=dis(xb,yb,xc,yc);
	double dis3=dis(xc,yc,xa,ya);;
	printf("%.2lf",aree(dis1,dis2,dis3));
	return 0;
}
