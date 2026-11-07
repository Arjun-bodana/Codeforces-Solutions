#include"iostream"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool visited[50] ={};
        int pos = 0;
        visited [pos]=true;
        for(int i =0;i <n;i++){
            if(s[pos]=='R')
            pos++;
            else
            pos--;
            visited [pos]=true;
        }
        int count =0;
        for(int i =0; i<n;i++){
            if(visited[i])
            count++;
    }
    cout<<count<<endl;

    }
    return 0;
}