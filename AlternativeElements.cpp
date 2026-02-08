#include<iostream>   //to get alternative elements in an array
#include<vector>
using namespace std;

void getAlternativesRec(vector<int> &arr, int index, vector<int> &res){
    if(index < arr.size()){
        res.push_back(arr[index]);
        getAlternativesRec(arr, index+2, res);
    }
}

vector<int> getAlternatives(vector<int> &arr){
    vector<int> res;
    getAlternativesRec(arr, 0, res);
    return res;
}

int main(){
    
    vector<int> arr = {10,20,30,40,50};
   vector<int> r = getAlternatives(arr);
    for(int x : r){
        cout << x << " ";
    }
    return 0;
}