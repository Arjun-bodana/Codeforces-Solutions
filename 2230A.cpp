#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,x,y;
        cin>>n>>x>>y;
        long long gr = n/3;
        long long rem = n%3;
        long long ans =gr*min(y,3*x)+min(rem*x,y);
        cout<<ans<<endl;
    }
    return 0;
}