#include<bits/stdc++.h>
using namespace std;
int	main(){
	int	a,b,c;
	long long mul;
	cin>>a;
	if(a>=-10000 and a<=100000 )
	{
		cin>>b;
		if (b>=-10000 and b<=100000 )
		{
			cin>>c;
			if(c>=-10000 and c<=100000)
			{
				mul=(a+b)*c;
				cout<<mul<<endl;
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

