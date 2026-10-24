#include<iostream>
using namespace std;
int main(){
  long long t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        int for_b = k/2;
        int for_a = k - for_b;
        long long ans = (for_a * a)-(for_b*b);
        cout<<ans<<endl;

    }
}