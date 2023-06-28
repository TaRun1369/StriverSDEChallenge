#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    map<int,int> m;
    for(int i = 0;i<arr.size();i++){
        m[arr[i]]++;
    }

    int n = arr.size()/3;
    vector<int> ans;
    for(auto it : m){
        if(it.second > n) ans.push_back(it.first);
    }

    return ans;
    // Write your code here.

}