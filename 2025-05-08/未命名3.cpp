#include<bits/stdc++.h>
using namespace std;
bool prime1(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i!=0)
			return true ;
		return false;
}
bool prime2(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
		return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2)
		for(int j=2;j<=i/2;j++){
			if(prime2(j)&&prime2(i-j)){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
				
			}
		}
	for(int i=4;i<=n;i+=2)
		for(int j=2;j<=i/2;j++){
			if(prime1(j)&&prime2(i-j)){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	return 0;
}
