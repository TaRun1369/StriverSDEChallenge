#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
        // Write your code here
        int ans = 1;
        int maxi = 1;

        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
                ans *= arr[i];
                maxi = max(ans,arr[i]);
        }

        return maxi;


}
