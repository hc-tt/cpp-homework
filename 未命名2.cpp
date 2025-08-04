#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w;
    cin>>n>>w;
    int a[100000],sum=0,k=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	} 
    int b[100000]={0}; 
	for(int i=0;i<n;i++)
    {
    	sum=sum+a[i];
    	if(sum==w)     
    	{
    		sum=0;
    		b[k]++;
    		k++;
		}
		else if(sum<w)  
		{
			b[k]++;
		}
		else              
		   sum=sum-a[i];
	}
	int count = 0;
	for(int i=0;i<k;i++)
	    count+=b[i];
	cout<<k<<" "<<count;
	return 0;
}
