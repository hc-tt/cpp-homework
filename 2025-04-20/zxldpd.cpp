#include<bits/stdc++.h>
using namespace std;
int main(){
	string p,t;
	cin>>p>>t;
	int psize=p.size();
	int tsize=t.size();
	int j=0;
	for(int i=0;i<tsize;i++){
		if(t[i]==p[j]){
			j++;
			if(j==psize) break;
		}
	}
	if(j<psize){
		cout<<"No";
	}
	else{
		cout<<"Yes";
	}
	return 0;
}
