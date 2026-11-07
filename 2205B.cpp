#include "iostream"
#include "cmath"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        // int n;
        long long n;
        cin >> n;
        // int l = sqrt(n);
        long long ans =1;
        for(long long i=2;i*i<=n;i++)
            if(n % i == 0){
                // cout << i << " " ;
                ans *=i;
                while(n%i==0){
                    n /=i;
                }
            }
            // else if(n/i == i)
            //     cout << i << " ";
            if(n>1)
            ans *=n;

        cout <<ans<< endl;
    }
}