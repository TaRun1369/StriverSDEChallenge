#include <bits/stdc++.h> 


int maximumMeetings(vector<int> &start, vector<int> &end)
{
    vector<pair<int,int>> v;
    int n = start.size();
    for(int i = 0;i<n;i++){
        pair<int,int> p = make_pair(end[i],start[i]);
        v.push_back(p);
    }

    sort(v.begin(),v.end());
    int ans  = 0,curT = 0;
    for(auto it : v){
        if(it.second > curT){
            ans++;
            curT = it.first;
        }
    }

    return ans;
    // Write your code here.
}