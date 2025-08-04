#include<bits/stdc++.h>
using namespace std;
int main()
{    
	int n=0;    
	cin>>n;    
	for(int i=0;i<n;i++)    
	{        
		int h=0,w=0;        
		cin>>h>>w;        
		double b=(h-100)*0.9*2;        
		if(abs(w-b)<b*10/100)        
		{            
			cout<<"You are wan mei!"<<endl;        
		}                  
		else if(w>b)            
		{                
			cout<<"You are tai pang le!"<<endl;            
		}            
		else            
		{                
			cout<<"You are tai shou le!"<<endl;             
		}          
	}
	return 0;
} 
