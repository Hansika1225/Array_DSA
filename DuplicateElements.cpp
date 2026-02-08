#include<iostream>  //to remove duplicate elements in a sorted array(two-pionter technique)
#include<vector>
using namespace std;

int RemoveDuplicates(vector<int> &arr){
    int n = arr.size();
    if(n <= 1){
        return n;
    }
    int idx = 1;

    for(int i = 1; i< n ; i++){
        if(arr[i-1] != arr[i]){
            arr[idx++] = arr[i];
        }
    }
   
    return idx;
}

int main(){

    vector<int> arr = {1,2,2,3,3,4,4,4,4,5,5,5};
    int newSize = RemoveDuplicates(arr);
    for(int i = 0; i< newSize; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}