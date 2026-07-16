#include<iostream>
#include<vector>
using namespace std;
void getperm(vector<string> &arr, int i, vector<vector<string>> &ans){
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
vector<vector<string>> permutation(vector<string>& arr){
    vector<vector<string>> ans;
    getperm(arr,0,ans);
    return ans;
}
int main(){
    vector<string> arr = {"a","b","c"};
    vector<vector<string>> ans;
    getperm(arr,0,ans);
    for(auto x : ans){
        for(auto y : x){ //for print values
            cout << y << " "; // print one value with space 
        }
        cout << endl;
    }
    return 0;
}