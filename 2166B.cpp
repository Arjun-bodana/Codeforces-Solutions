#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        if (a >= b * n || a == b)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}