#include"iostream"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int ans = 0;
        for(int i = 0; i<n;i++){
            int a;
            cin>>a;
            ans +=a;
        }
        if(ans <= s && (s - ans) % x == 0) 
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}