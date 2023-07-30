#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    vector<int> v(256,-1);
    int l = 0;int r = 0;
    int n = s.size();
    int len = 0;

    while(r<n){
        if(v[s[r]]!=-1) l = max(l,v[s[r]]+1);// wahi tak pointer ko aage leke jaa jaha repeat hua hai

        v[s[r]] = r;
        len = max(len,r-l+1);
        r++;
    }
    return len;
    //Write your code here
}