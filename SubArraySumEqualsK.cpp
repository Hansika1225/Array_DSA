#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int sum = 0, count = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(mp.find(sum - k) != mp.end()){
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}