#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        long long a = min({x, y, z});
        long long b = max({x, y, z});
        long long c = x + y + z - a - b;
        if (b != c) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << b << " " << a << " " << 1 << endl;
        }
    }
    return 0;
}