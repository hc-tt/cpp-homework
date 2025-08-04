/*
#95. 插入排序（排序问题）
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
现有N（N<=20000）个数di，将它们从小到大排序输出。

输入格式
输入两行，一行一个整数N,另一行N个数di,相邻两个数用空格隔开。

输出格式
N个有序化的序列di。

样例
input
6
37 38 13 24 18 15


output
13 15 18 24 37 38
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, temp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout <<a[i]<< " ";
    }
    return 0;
}