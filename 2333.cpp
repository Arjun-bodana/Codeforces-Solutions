#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long sum = 0;
        int n = nums1.size();
        vector<int> diff(n);

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
        }

        int k = k1 + k2;

        while (k > 0) {
            int idx = 0;

            for (int i = 0; i < n; i++) {
                if (diff[i] > diff[idx]) {
                    idx = i;
                }
            }

            if (diff[idx] > 0) {
                diff[idx]--;
            } else {
                break;
            }

            k--;
        }

        for (int i = 0; i < n; i++) {
            sum += 1LL * diff[i] * diff[i];
        }

        return sum;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {2, 6, 7, 8};
    int k1 = 1;
    int k2 = 2;

    Solution obj;
    cout << obj.minSumSquareDiff(nums1, nums2, k1, k2);

    return 0;
}