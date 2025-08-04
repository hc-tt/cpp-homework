#include<bits/stdc++.h>
using namespace std;
int n;
int a[10001],book[10001];
void dfs(int step){
	if(step==n+1){
		for(int i=1;i<=n;i++)
		printf("\t%d\t",a[i]);
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(book[i]==0){
		a[step]=i;
		book[i]=1;
		dfs(step+1);
		book[i]=0;
		}
	}
	return;
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}

