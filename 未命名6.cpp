#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin>>x>>y;
    int solutions = 0;
    for (x = 0; x <= 20; x++) {
        for (y = 0; y <= 33; y++) {
            z = 100 - x - y;
            if (z % 3 == 0 && 5*x + 3*y + z/3 == 100) {
                printf("%d %d %d \n", x, y, z);
                solutions++;
            }
        }
    }
    return 0;
}


