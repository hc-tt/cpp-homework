/*
#27. ����ж�һ�����ܷ�ͬʱ��3��5����

��Ŀ����
�ж�һ����n �ܷ�ͬʱ��3��5����

�����ʽ
����һ�У�����һ������n���� -1,000,000 < n < 1,000,000��

�����ʽ
���һ�У������ͬʱ��3��5�������YES���������NO

����
input:
15

output:
YES

2024-11-29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n%3==0)&&(n%5==0)) cout<<"YES";
	else cout<<"NO";
	return 0;	
}
