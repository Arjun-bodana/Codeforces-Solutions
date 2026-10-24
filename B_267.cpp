#include "iostream"
using namespace std;
int main(){
    int n,m,k;
    cin>> n >> m >> k;
    int arr[m+1];
    for(int &i:arr)
        cin >> i;
    int me = arr[m];
    int count = 0;
    for(int i=0;i<m;i++){
        if(__builtin_popcount(me ^ arr[i]) <= k)
            count++;
    }
    cout << count << endl;
}