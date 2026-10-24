#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[5];
        int minH = INT_MAX;
        int maxH = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            minH = min(minH, arr[i]);
            maxH = max(maxH, arr[i]);
        }
        int ans = maxH - minH + 1;
        cout << ans << endl;
    }
}