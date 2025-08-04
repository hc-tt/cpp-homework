#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,ant=0;
	cin>>a>>b>>c;
	for(int x=0;x<=c;x++){
		for(int y=0;y<=c;y++){
			if(a*x+b*y==c)
			ant++;
		}
	}
	cout<<ant<<endl;
	return 0;
}
