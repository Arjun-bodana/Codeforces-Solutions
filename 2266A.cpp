//Good Contest
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, a1, a2, a3;
        cin >> n >> a1 >> a2 >> a3;
        int smallest = a1;
        if (a2 < smallest) {
            smallest = a2;
        }
        if (a3 < smallest) {
            smallest = a3;
        }
        int answer = n - smallest;
        cout << answer << "\n";
        t = t - 1;
    }
    return 0;
}
