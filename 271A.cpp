#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int ans;
    cin >> ans;

    while (true) {
        ans++;
        string s = to_string(ans);
        set<char> alg_no(s.begin(), s.end());  
        if (alg_no.size() == s.size()) {
            cout << ans << endl;
            break;
        }
    }
    return 0;
}
