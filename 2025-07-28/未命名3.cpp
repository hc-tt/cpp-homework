#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum=0;
	int n;
	for(int i=1;i<=100;i++){
		sum+=i;
		i++;
		if(sum>=1000)
		break;
	}
	cout<<sum<<endl;
	cout<<n<<endl;
	return 0;
}
