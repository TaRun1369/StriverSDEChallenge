#include <bits/stdc++.h> 


vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
   stack<int> s;
    vector<int> ans;

    for(int i = n-1;i>=0;i--){
        while(!s.empty() && s.top() >= arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans.push_back(s.top());
        }
        else{
            ans.push_back(-1);
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());

    return ans;
}