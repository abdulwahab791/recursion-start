#include<iostream>
#include<vector>
using namespace std;
void getperm(vector<int> &arr, int i, vector<vector<int>> &ans){
    if(i == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for(int idx=i;idx<arr.size();idx++){
        swap(arr[i],arr[idx]);
        getperm(arr,i+1,ans);
        swap(arr[i],arr[idx]);
    }    
}
vector<vector<int>> permutation(vector<int>& arr){
    vector<vector<int>> ans;
    getperm(arr,0,ans);
    return ans;
}
int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    getperm(arr,0,ans);
    for(auto x : ans){
        for(auto y : x){ //for print values
            cout << y << " "; // print one value with space 
        }
        cout << endl;
    }
    return 0;
}
///time complexity O(n! * n)