#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min_vel = INT_MAX;
        int max_vel = 0;
        for(int i = 0; i<n;i++){
            int a;
            cin>>a;
            min_vel = min(min_vel,a);
            max_vel = max(max_vel,a);

        }
            cout<<ceil((max_vel - min_vel+1)/2) <<endl;
        
    }
    return 0;
}