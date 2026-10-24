#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[100];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int min_odd = INT_MAX;
        int max_even = INT_MIN;

        for (int i = 0; i < n; i += 2) {
            if (arr[i] < min_odd) {
                min_odd = arr[i];
            }
        }

        for (int i = 1; i < n; i += 2) {
            if (arr[i] > max_even) {
                max_even = arr[i];
            }
        }

        if (min_odd - max_even >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}