#include<bits/stdc++.h>
using namespace std;
int a[10005];
bool prime(int x){
    if(x==1)	return 0;
		for(int i=2;i<=sqrt(x);++i)
			if(x%i==0)
				return 0;
		return 1;
}
int  palindrome(int x){
	int y=0;
	while(x){
		y=y*10+x%10;
		x=x/10;
	}
	return y;
}
int main(){
	int n,ans=0;
	cin>>n;
	for(int i=11;i<=n;i++){
		if(prime(i)&&palindrome(i)==i)
		ans++;	
	}
	cout<<ans<<endl;
	return 0;
}
