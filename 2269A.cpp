#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n < k) {
            cout << -1 << endl;
            continue;
        }
        long long ans = 0;
        if ( n == k) {
            ans = 2 * n;
        } else {
            n -= (k - 1);
            ans = (1LL << n) + 2 * (k - 1);
        }
        cout << ans << endl;
    }
}