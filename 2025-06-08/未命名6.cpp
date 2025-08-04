#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // ������飬monkeys[i] = true ��ʾ�� i ֻ�����ѱ���̭
    bool monkeys[n + 1] = {false}; 
    int count = 0;  // ����������
    int index = 0;  // ��ǰ�������ĺ����������� 1 ��ʼ��
    int remain = n; // ʣ���������

    while (remain > 1) { 
        if (!monkeys[index % n + 1]) { // ����ת��Ϊ 1~n �ĺ��ӱ�ţ���δ����̭
            count++; 
            if (count == 3) { // ���� 3����̭��ǰ����
                monkeys[index % n + 1] = true; 
                remain--; 
                count = 0; 
            }
        }
        index++; 
    }

    // �ҵ����ʣ��ĺ��ӣ�δ����̭�ģ�
    for (int i = 1; i <= n; i++) {
        if (!monkeys[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

