#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int max = std::max({a,b,c,});
        if(max*2==(a+b+c)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}