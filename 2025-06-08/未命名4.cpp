#include<iostream>
#include<cstring>
using namespace std;
int  overi[27];
char overc[27];
int flag;
void found(char t)
{
      for(int i=1;i<=26;i++)
	  if(t==overc[i])
	      flag=i;
}
int judges2(char t)
{
 	for(int i=1;i<=26;i++)
	    if(t==overc[i])
	    {
	        if(overi[i]==1) return 1;
	        else return 0;
	    }
	return 0;
}
void setoverc()
{	
      overc[1]='a';
      for(int i=2;i<=26;i++) 
         overc[i]=overc[i-1]+1;
}
int main()
{
 	char s1,v,s2; 
 	setoverc();
 	int n;
 	while(cin>>n,n!=-1){
  		memset(overi, 0, sizeof(overi));
  		overi[1]=1;
 	while(n--)
 	{
  		cin>>s1>>v>>s2;
  		if(judges2(s2))
  		{
		   found(s1);
		   overi[flag]=1;
  		}
		else
		{
		   found(s1);
		   overi[flag]=0;
		}
	}		
	int num=0;
	for(int i=1;i<=26;i++)
	{
	 	if(overi[i]==1)
	  	{ 
	   		num++;
	   		if(num==1) cout<<overc[i];
	   		else cout<<' '<<overc[i];
	  	}
	}
	if(num==0) cout<<"none"<<endl;
  	else cout<<endl;
    }
    return 0;
}
