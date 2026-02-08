#include<bits/stdc++.h>    //To get all leaders present in an array
using namespace std;

vector<int> leaders(vector<int> arr){
    vector<int> result;
    int n = arr.size();

    int maxRight = arr[n-1];
    result.push_back(maxRight);

    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxRight){
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }

    reverse(result.begin(),result.end());

    return result;
}

int main(){

    vector<int> arr = {2, 15, 0, 10, 3, 14, 6};
    vector<int> res = leaders(arr);
    for(int x: res){
        cout << x << " ";
    }
    return 0;
}