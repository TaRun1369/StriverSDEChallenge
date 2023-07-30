#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
        int sum=0;
        for(int i=0;i<n;i++)
        {
                sum+=arr[i];
        }
        int tot=n*(n+1)/2;
        int a=sum-tot;
        int sqr=0;
        for(int i=0;i<n;i++)
        {
                sqr+=(arr[i]*arr[i]);
                sqr-=((i+1)*(i+1));
        }
        int b=sqr/a;
        int ans1=(b-a)/2;
        int ans2=(a+b)/2;
        pair<int,int> pt={ans1,ans2};
        return pt;
        // Write your code here 
        
}