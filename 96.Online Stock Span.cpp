#include <bits/stdc++.h> 

vector<int> findSpans(vector<int> &price) {
    stack<pair<int,int>> s;
    vector<int> ans;
    for(int i=0;i<price.size();i++)
    {
        int day=1;
        while(!s.empty() && s.top().first<=price[i])
        {
            day+=s.top().second;
            s.pop();
        }
        s.push({price[i],day});
        ans.push_back(day);
    }
    return ans;
}