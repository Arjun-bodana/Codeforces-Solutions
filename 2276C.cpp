
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            pref[i] = (pref[i - 1] + x) % k;
        }
        vector<long long> freq(k, 0);
        long long ans = 0;
        for (int j = 0; j <= n; j++) {
            int idx = j - k - 1;
            if (idx >= 0) {
                freq[pref[idx]]++;
            }
            ans += freq[pref[j]];
        }
        cout << ans << '\n';
    }
    return 0;
}
