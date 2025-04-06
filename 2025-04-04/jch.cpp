/*
#138. 阶乘和
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
求1!+2!+3!+...+N!的和。（k!表示k的阶乘，k!=1 * 2 * ... * k。)

输入格式
正整数N（N<=20）

输出格式
1!+2!+3!+...+N!的和 。

样例
input
3
output
9
*/
#include <bits/stdc++.h>
using namespace std;
long long fac(int n) {
    long long sum = 1;
    if (n == 0) {
        return 1;
    } else {
        sum = n * fac(n - 1);
    }
    return sum;
}
int main() {
    long long n, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += fac(i);
    }
    cout << sum;
}
