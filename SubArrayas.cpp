#include<bits/stdc++.h>   //to print all subarrays in an array
using namespace std;

void printSubArrayas(vector<int> arr){
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            for(int k = i ; k <= j ; k++){
                cout << arr[k] << ' ';  
            }
            cout<<endl;
        }
    }
}

int main(){

    vector<int> arr = {1,2,3,4};
    printSubArrayas(arr);
    return 0;
}