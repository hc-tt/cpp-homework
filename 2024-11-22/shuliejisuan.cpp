/*
#13. ���м���

��Ŀ����
��֪�Ȳ����е�ǰ����Ϊa1��a2�����n���ֵ�Ƕ��١�

�����ʽ
һ�У�������������a1��a2��n��

�����ʽ
һ����������n���ֵ��

����
input:
1 4 5

output:
13

204-11-22
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,n;
	cin>>a1>>a2>>n;
	n=(n-1)*(a2-a1)+a1;
	cout<<n;
	return 0;
}
