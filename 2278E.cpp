#include"iostream"
#include"climits"
using namespace std;
int t;
int main()
{cin>>t;

while(t--){
    int n;
    int negetiv = 0;
    cin>>n;
    int sum = 0;
    int minv = INT_MIN;
    while(n--){
        int x;
        cin>>x;
        if(x<0){
            negetiv++;
        }
        sum+=abs(x);
        minv=min(minv,abs(x));
        if(negetiv%2==0){
            cout<<sum<<endl;
        }else{
            cout<<sum-2 *minv<<endl;
        }
    }

}}
