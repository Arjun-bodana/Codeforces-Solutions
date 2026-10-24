//Decimal to binary
//Binary to decimal

#include <bits/stdc++.h>
using namespace std;

string DecimalToBinary(int n){
    string binary = "";
     while(n>0){
        int rem = n%2;
        binary = binary + to_string(rem);
        n= n/2;
     }
     reverse(binary.begin(),binary.end());
     return binary;
}

int BinaryToDecimal(string Binary){
    int n = Binary.size();
    int p = 1;
    int decimal = 0;

    for(int i = n-1; i>=0; i--){
        if(Binary[i]=='1'){
            decimal = decimal + p;
        }
        p= p*2;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    string Binary = DecimalToBinary(n);
    cout<<DecimalToBinary(n)<<"\n";
    
    cout<<BinaryToDecimal(Binary)<<"\n";
    return 0;
}