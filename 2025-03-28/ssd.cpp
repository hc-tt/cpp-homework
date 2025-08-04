#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n,flag=0;
	scanf("%d",&n);
	for(int i=2;i<=n-2;i++){
		if(prime(i)&&prime(i+2)){
			printf("%4d %4d\n",i,i+2);
			flag=1;
		}
	}
	if(flag==0){
		printf("empty\n");
	}
	return 0;
}
