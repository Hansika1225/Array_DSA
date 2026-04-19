#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int n =arr.size();
        vector<int> prefix(n);
        vector<int> result(queries.size());
        prefix[0] = arr[0];
        for(int i=0; i < arr.size(); i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        for(int i=0 ; i< queries.size() ; i++){
            if(queries[i][0] == 0){
                result[i] = prefix[queries[i][1]];
            }
            result[i] = prefix[queries[i][1]] - prefix[queries[i][0]-1];
        }
        return result;
    }
};

int main() {
    Solution obj;

    // Input array
    vector<int> arr = {1, 3, 5, 7, 9};

    // Queries: each query = {l, r}
    vector<vector<int>> queries = {
        {0, 2},  // sum of [1,3,5] = 9
        {1, 3},  // sum of [3,5,7] = 15
        {2, 4}   // sum of [5,7,9] = 21
    };

    vector<int> result = obj.rangeSumQueries(arr, queries);

    // Print result
    cout << "Range Sum Results:\n";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}