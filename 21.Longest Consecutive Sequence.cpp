#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(n == 0) return 0;
    int longe = 1;
    unordered_set<int> s;

    for(auto it : arr){
        s.insert(it);
    }

    for(auto it : s){
        if(s.find(it-1) == s.end()){
            int cnt = 1;
            int x = it;
            while(s.find(x+1) != s.end()){
                x++;
                cnt++;

            }
            longe = max(longe,cnt);
        }
    }
    return longe;
}
