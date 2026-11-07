#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mx = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
         mx = max(mx, x);
            if (x >= 2)
                count++;
        }
        if (mx >= 3 || count >= 2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}