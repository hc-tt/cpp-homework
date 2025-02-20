#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],f[6][6]={{0,0,1,0,0,-1},{0,0,0,0,0,0},{-1,0,0,0,0,1},{0,0,0,0,0,0},{1,0,-1,0,0,0}};
int main(){
	int na,nb,n,c=0,AW=0,BW=0;
	scanf("%d%d%d",&n,&na,&nb);
	for(int i=0;i<na;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<na;i++){
		scanf("%d",&b[i]);
	}
	int i=0,j=0;
	while(c<n){
		if(i==na){
			i=0;
		}
		if(j==nb){
			j=0;
		}
		if(f[a[i]][b[i]]==1){
			AW++;
		}
		if(f[a[i]][b[i]]==-1){
			BW++;
		}
		i++;
		j++;
		c++;
	}
	if(AW>BW)
		printf("A");
	else if(AW<BW)
		printf("B");
	else
		printf("draw");
	return 0;
}
