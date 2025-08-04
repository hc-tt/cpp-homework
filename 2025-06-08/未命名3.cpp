#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 500005;
int arr[MAX_N];
int leftMax[MAX_N];
int rightMax[MAX_N];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // 预处理左最大值
    leftMax[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
    }
    // 预处理右最大值
    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
    }
    while (k--) {
        int idx;
        cin >> idx;
        idx--;
        int lm = leftMax[idx];
        int rm = rightMax[idx];
        int selfMax = max(lm, rm);
        cout << lm << " " << rm << " " << selfMax << "\n";
    }
    return 0;
}
