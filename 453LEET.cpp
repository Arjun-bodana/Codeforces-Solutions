#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int minV = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        minV = min(minV, arr[i]);
    }
    int ans = sum - (minV * n);
    cout << ans << endl;

    return 0;
}