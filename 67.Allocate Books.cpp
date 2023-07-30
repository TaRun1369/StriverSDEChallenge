#include <bits/stdc++.h> 
bool isPossible(int n, int m, const std::vector<int>& time, long long int mid) {
    int studentCount=1;
    long long int pageSum=0;
    for(int i=0; i<m; i++) {
        if(pageSum+time[i] <= mid) {
            pageSum += time[i];
        }
        else {
           studentCount++;
            if(studentCount>n || time[i]>mid) {
                return false;
            }
            pageSum = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, const std::vector<int>& time) 
{
    long long int s=0;
    long long int sum=0;
    for(int i=0; i<m; i++) {
        sum += time[i];
    }
    long long int e=sum;
    long long int ans=-1;
    while(s<=e) {
        long long int mid = s+(e-s)/2;
        if(isPossible(n, m, time, mid)) {
            ans=mid;
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}