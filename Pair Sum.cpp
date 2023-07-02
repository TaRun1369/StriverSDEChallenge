#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
   for(int i = 0; i < arr.size(); i++){
      for(int j = i + 1; j < arr.size(); j++){
         if(arr[i] + arr[j] == s){
            vector<int> t;
            t.push_back(min(arr[i], arr[j]));
            t.push_back(max(arr[i], arr[j]));
            ans.push_back(t);
         }
      }
   }
   return ans;
}