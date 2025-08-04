
/* 
时间:2024-11-16
功能:遇到b值大于50000,程序会自动退出. 
*/

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long a,b,times;
//	cin>>a>>b;
//	if (b>50000)
//	{
//		//cout<<"输入b的值不能大于50000,程序将终止!"<<endl;
//		return 0;
//	}
//	else
//	{
//	times=a*b;
//	cout<<times<<endl;
//	return 0;
//	}
//}

/*
时间：2024-11-16
功能：遇到b值大于50000时，提示重新输入。 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,times;
    int i=1,ii=2;
    cin>>a;
    while (i<ii)
     {
        cin>>b;
		if (b>50000)
        {
			cout<<"输入b的值要小于50000,请重新输入!"<<endl;
            i++;
            ii++;
            continue;
		}
        else
        {
		    times=a*b;
    		cout<<times<<endl;
    		return 0;
		}
    }

}

/*
时间：2024-11-17
功能：遇到b值大于50000时，提示重新输入。 
*/
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long long a,b,times;
//    int i=1;
//    cin>>a;
//    do
//    {
//    	cin>>b;
//		if (b>50000)
//        {
//			cout<<"输入b的值要小于50000,请重新输入!"<<endl;
//            i++;
//            continue;
//		}
//        else
//        {
//		    times=a*b;
//    		cout<<times<<endl;
//    		return 0;
//		}
//	}	
//		while (i<b);
//}

/*
时间：2024-11-17
功能：遇到b值大于50000时，提示重新输入。 
*/
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long long a,b,times;
//    int i=1,ii=2;
//    cin>>a;
//    do
//    {
//    	cin>>b;
//		if (b>50000)
//        {
//			cout<<"输入b的值要小于50000,请重新输入!"<<endl;
//            i++;
//            ii++;
//            continue;
//		}
//        else
//        {
//		    times=a*b;
//    		cout<<times<<endl;
//    		return 0;
//		}
//	}	
//		while (i<ii);
//}





