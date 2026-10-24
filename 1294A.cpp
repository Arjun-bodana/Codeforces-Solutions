#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long a,b,c,n;
    while(t--){
        cin >> a >> b >> c >> n;
    //     if((a+b+c+n) % 3 != 0)
    //     {
    //         cout << "NO" << endl;
    //         continue;
    //     }  
    //     int m = (a+b+c+n)/3;
    //     if(m-a >= 0 and m-b >= 0 and m-c >= 0)
    //         cout << "YES" << endl;
    //     else cout << "NO" << endl

    //kuldip
    
    //         n-=(max - a);
    //         n-=(max - b);
    //         n-=(max - c);
    
    //         if(n-=(max-a) and }
    // )
    
    
    int tr = (a+b+c+n);
    int max = std::max({a,b,c});
    if((tr/3)>=max and tr%3==0){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}
}