
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, w, d;
        cin >> n >> w >> d;
        long long maxBoxes = d / w + 1;
        long long ans = (n + maxBoxes - 1) / maxBoxes;
        cout << ans << endl;
    }
    return 0;
}
