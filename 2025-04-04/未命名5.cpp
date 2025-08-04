#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,d;
	char s;
	scanf("%d%d %c",&x,&y,&s);
	switch(s){
		case'+':d=x+y;printf("%d\n",d);break;
		case'-':d=x-y;printf("%d\n",d);break;
		case'*':d=x*y;printf("%d\n",d);break;
		case'/':if(y==0) printf("error");
						else printf("%d",x/y);
						break;
		default:printf("Invalid operator!");
	}
	return 0;
}
