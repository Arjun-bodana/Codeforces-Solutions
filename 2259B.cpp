#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int f=0,g=0,k = 0;
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                f++;
                
            } else if ( arr[i]%4==0){
                g++;
            } else
                k++;
            
        }
        int max = std::max({f,g,k});
        
        cout<<max<<endl;
    }
}