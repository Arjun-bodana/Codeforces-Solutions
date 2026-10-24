#include "iostream"
#include "algorithm"
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int gcdLength = __gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }
};
int main(){
    Solution *obj = new Solution();
    cout << obj->gcdOfStrings("Anurag","Arjun") << endl;
    return 0;
}