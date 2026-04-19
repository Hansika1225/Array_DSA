#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int current = nums[0];
        int res = nums[0];

        for(int i = 1 ; i < n ; i++){
           current = max(current + nums[i], nums[i]);
           res = max(res , current);
        }
        
        return res;
    }
};
int main() {
    Solution obj;

    // Example test case
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}