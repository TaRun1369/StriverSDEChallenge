#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
        // Write your code here
        // int ans = 1;
        int maxi = INT_MIN;
        int pref = 1,suff = 1;
        for(int i = 0;i<n;i++){
                if(pref == 0) pref = 1;
                if(suff == 0) suff= 1;
                pref = pref*arr[i];
                suff = suff*arr[n-1-i];
                maxi = max(maxi,max(pref,suff));
                
                }
                return maxi;

        
}
