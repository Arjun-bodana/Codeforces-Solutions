#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    int k;
    while(t--){
        cin>>k;
        cout << 100/__gcd(k,100) << endl;
    }
    return 0;
}
