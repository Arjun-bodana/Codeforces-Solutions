#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long k = (nums.size() % 2 ? nums[nums.size()/2] : (nums[nums.size()/2] + nums[nums.size()/2-1])/2);
        
        int res = 0;
        for(int i : nums)
            res += abs(i - k); 
            
        return res;
    }
};

int main() {
    Solution solver;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements separated by space or enter:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int result = solver.minMoves2(nums);
    
    cout << "\nMinimum Moves Required: " << result << endl;
    
    return 0;
}
