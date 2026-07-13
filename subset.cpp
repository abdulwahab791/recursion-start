#include<iostream>
#include<vector>
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
    subset(arr, ans, i + 1, allsubset);
}
vector<vector<int>> subset(vector<int> &arr)
{
    vector<vector<int>> allsubset;
    vector<int> ans;
    subset(arr, ans, 0, allsubset);
    return allsubset;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> allsubset = subset(arr);
    for(auto subset : allsubset)
    {
        cout << "{ ";
        for(int x : subset)
            cout << x << " ";
        cout << "}" << endl;
    }
    return 0;
}