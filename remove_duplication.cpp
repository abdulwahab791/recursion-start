#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allsubset)
{
    if(i == arr.size())
    {
        allsubset.push_back(ans);
        return;
    }
    ans.push_back(arr[i]);
    subset(arr, ans, i + 1, allsubset);
    ans.pop_back();
    int idx =i+1;
    while(idx < arr.size()&& arr[idx]==arr[idx-1]){
        idx++;
    }
    subset(arr, ans, idx, allsubset);
}
int main(){
    vector<int> arr={1,2,2};
    sort(arr.begin(), arr.end());
    vector<vector<int>> allsubset;
    vector<int> ans;
    subset(arr,ans,0,allsubset);
    for(vector<int> x:allsubset){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}