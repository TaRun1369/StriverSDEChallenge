#include <bits/stdc++.h> 


vector<vector<int>> pwset(vector<int>v)
{
    int n = v.size();
    vector<vector<int>> ans;
    for(int i = 0;i<=(1<<n) - 1;i++){
        vector<int> anss;
        for(int j = 0;j<n;j++){
            if(i & (1<<j)){
                anss.push_back(v[j]);
            }
        }
        ans.push_back(anss);
    }
    return ans;

    //Write your code here
}