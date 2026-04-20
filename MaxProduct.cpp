#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = nums[0];
        int mini = nums[0];
        int res = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] < 0)
                swap(maxi, mini);

            maxi = max(nums[i], maxi * nums[i]);
            mini = min(nums[i], mini * nums[i]);

            res = max(res, maxi);
        }

        return res;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 3, -2, 4};

    int result = obj.maxProduct(nums);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}