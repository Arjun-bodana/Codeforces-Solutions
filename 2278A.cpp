#include"iostream"
#include"algorithm"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;;
        string p,q;
        cin>>n>>m>>p>>q;
        if(m+3!=n)
        {
            cout<<"NO"<<endl;
            continue;
        
            }
        
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
         q+="six";
         sort(q.begin(),q.end());
         if(p==q){
            cout<<"YES"<<endl;

         }else{
            cout<<"NO"<<endl;
         }


    }
}
