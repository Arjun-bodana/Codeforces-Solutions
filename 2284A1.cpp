#include"iostream"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x = n/2;
        long long y = n-x;
        cout<<x*y<<endl;
    }
    return 0;
}