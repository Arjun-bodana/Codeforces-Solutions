#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int time1 = (n + x + y - 1) / (x + y);
        int time2;
        if (n <= x * z) {
            time2 = (n + x - 1) / x;
        }
        else {
            int remaining = n - (x * z);
            time2 = z + (remaining + x + 10 * y - 1) / (x + 10 * y);
        }
        cout << min(time1, time2) << '\n';
    }
    return 0;
}