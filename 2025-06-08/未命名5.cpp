#include<bits/stdc++.h>
using namespace std;
void add(int arr[],int s){
	for(int i=0;i<s-1;i++){
		for(int j=0;j<s-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int s;
	int a[30];
	cin>>s;
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	add(a,s);
	int count=0;
	for(int i=0;i<s;i++){
		for(int j=i+1;j<s;j++){
			for(int k=j+1;k<s;k++){
				if(a[k]-a[j]==a[j]-a[i]){
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
