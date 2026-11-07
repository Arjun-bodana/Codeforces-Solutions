#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long ans = max(a + c - b, abs(a-b));
        cout << ans << endl;
    }
    return 0;
}