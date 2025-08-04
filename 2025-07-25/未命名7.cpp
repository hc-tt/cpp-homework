#include<bits/stdc++.h>
using namespace std;
int R;
int main(){
	scanf("%d",&R);
	if(R<1200){
		cout<<"ABC";
		return 0;
	}
	if(R>=1200&&R<2800){
		cout<<"ARC";
		return 0;
	}
	if(R>=2800){
		cout<<"AGC";
		return 0;
	}
	return 0;
}
