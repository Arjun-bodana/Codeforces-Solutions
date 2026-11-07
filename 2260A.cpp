#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, counnt = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                counnt++;
        }
        if (counnt < 2)
            cout<< -1 << endl;
        else
            cout<<a[0] + a[n - 1]<<endl;
    }
    return 0;
}