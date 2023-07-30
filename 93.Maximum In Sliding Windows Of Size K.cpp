#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    // int n = nums.size() - k + 1; 
    int n = nums.size();
    vector<int> ans;
    deque<int> dq;
    for(int i = 0;i<n;i++){
        if(!dq.empty() && dq.front() == i-k) dq.pop_front(); // out of bound gaya 

        while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

        dq.push_back(i);
        if(i >= k-1) ans.push_back(nums[dq.front()]);
    }

    return ans;
    //    Write your code here.
}