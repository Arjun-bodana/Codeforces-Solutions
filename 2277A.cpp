#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>array(n);
        for(int i = 0;i<n;i++){
            cin>>array[i];
        }
            sort(array.begin() ,array.end());
        int mex = 0;
        int count = 0;
        for(int i =0; i<n;i++){
            if(array[i]<=mex){
                // count++;
                mex++;
            }
            // if(array[i]==mex and count >= k)
            // if(count>=k)
            // {
            //     mex++;
            //     count = 0;
            // }

        }
    cout<<mex/k<<endl;
    }
    return 0;
}