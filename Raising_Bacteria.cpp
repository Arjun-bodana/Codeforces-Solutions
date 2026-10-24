#include <bits/stdc++.h>
using namespace std;

int CountSetBit(int n) {
    int count = 0;

    while (n) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main() {
    int x;
    cin >> x;

    cout << CountSetBit(x);

    return 0;
}