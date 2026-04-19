#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            profit = max(profit , prices[i] - minPrice);
            minPrice = min(minPrice , prices[i]);
        }
        return profit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}