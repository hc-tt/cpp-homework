
/* 
ʱ��:2024-11-16
����:����bֵ����50000,������Զ��˳�. 
*/

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long a,b,times;
//	cin>>a>>b;
//	if (b>50000)
//	{
//		//cout<<"����b��ֵ���ܴ���50000,������ֹ!"<<endl;
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
ʱ�䣺2024-11-16
���ܣ�����bֵ����50000ʱ����ʾ�������롣 
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
			cout<<"����b��ֵҪС��50000,����������!"<<endl;
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
ʱ�䣺2024-11-17
���ܣ�����bֵ����50000ʱ����ʾ�������롣 
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
//			cout<<"����b��ֵҪС��50000,����������!"<<endl;
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
ʱ�䣺2024-11-17
���ܣ�����bֵ����50000ʱ����ʾ�������롣 
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
//			cout<<"����b��ֵҪС��50000,����������!"<<endl;
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





