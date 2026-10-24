//B. AND 0, Sum Big

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long ans = 1;
        long long mod = 1000000007;

        while (m > 0) {
            if (m % 2 == 1) {
                ans = (ans * n) % mod;
            }

            n = (n * n) % mod;
            m = m / 2;
        }

        cout << ans << endl;
    }

    return 0;
}