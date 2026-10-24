#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t],i=0;
    while (t--)
    {
        int a,b,k,x=0;
        cin>>a>>b>>k;
        if(a==b ){arr[i++]=0;continue;}
        if(abs(a-b) == 1) {arr[i++]=1;continue;}
        int m ;
        arr[i] = abs(a-b);
        while(a!=b){
            if(a>b){
                a/=k;
                x++;
            }else{
                b/=k;
                x++;
            }
            if(abs(a-b)==1){
                x++;
                break;
            }           
            m  = abs(a-b);
            arr[i] = min(x+m,arr[i]);
        }
        arr[i++] = min(arr[i],x);

    }
    for(int i:arr)
        cout << i << endl;
}
