#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,sum=0,n=0,i=1;
    cin>>k;
    while(n!=k)
        {
        for(int j=1;j<=i;j++)
            {
                sum+=i;
                n++;
                if(n==k)
                break;
            }
            i++;
        }
        cout<<sum<<endl;
return 0;
}

