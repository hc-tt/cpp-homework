#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // 标记数组，monkeys[i] = true 表示第 i 只猴子已被淘汰
    bool monkeys[n + 1] = {false}; 
    int count = 0;  // 报数计数器
    int index = 0;  // 当前遍历到的猴子索引（从 1 开始）
    int remain = n; // 剩余猴子数量

    while (remain > 1) { 
        if (!monkeys[index % n + 1]) { // 索引转换为 1~n 的猴子编号，且未被淘汰
            count++; 
            if (count == 3) { // 报到 3，淘汰当前猴子
                monkeys[index % n + 1] = true; 
                remain--; 
                count = 0; 
            }
        }
        index++; 
    }

    // 找到最后剩余的猴子（未被淘汰的）
    for (int i = 1; i <= n; i++) {
        if (!monkeys[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

