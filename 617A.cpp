#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int ans;
    if(x==0) return 0;
    if(x%5==0){
        ans = x/5;
        cout<< ans;
    } if(x%5!=0)
    {
        ans = x/5 +1;
        cout<<ans;
    }
}
