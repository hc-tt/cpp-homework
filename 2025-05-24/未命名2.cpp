#include<bits/stdc++.h>
using namespace std;
int a[10000010];
char b[5000010];
int n,m;
void init(){
	scanf("%d%d",&n,&m);
	scanf("%s",b+1);
	for(int i=1;i<=n;i++)
	a[i]=b[i]-'0';
	scanf("%s",b+1);
}
void add(){
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
void dec(){
	int i=n;
	while(a[i]==0){
		a[i]=1;
		i--;
	}
	a[i]=0;
}
void mul(){
	n++;
	a[n]=0;
}
void div(){
	a[n]=0;
	n--;
}
void work(){
	for(int i=1;i<=m;i++){
	if(b[i]=='+') add();
	if(b[i]=='-') dec();
	if(b[i]=='*') mul();
	if(b[i]=='/') div();	
	}
}
void printf(){
	for(int i=1;i<=n;i++)
	printf("%d",a[i]);
	printf("\n");
}
int main(){
	init();
	work();
	printf();
	return 0;
}
