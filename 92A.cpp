#include <bits/stdc++.h>
using namespace std;

int call(int n, int m) {
    int i = 1;

    while (true) {
        if (m < i) {
            return m;
        }

        m -= i;
        i++;

        if (i > n) {
            i = 1;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << call(n, m) << endl;

    return 0;
}