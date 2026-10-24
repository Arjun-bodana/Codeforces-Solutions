 #include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << (x > 2 and (x-2) % 2 == 0 ? "YES" : "NO") << endl;
}