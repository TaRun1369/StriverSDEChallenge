#include <bits/stdc++.h> 
int chessTournament(vector<int> positions , int n ,  int c){
        // Write your code here
        // int mini = INT_MAX;.
        sort(positions.begin(),positions.end());

        int ans = 0;
        int l = 0,h = positions[n-1];

        while(l<=h){
                int mid = (l+h)/2;
                int count = 1;
                int prevR = positions[0];

                for(int i = 0 ;i<n;i++){
                        if(positions[i] - prevR >= mid) {
                                count++;
                                prevR = positions[i];
                        }
                }

                if(count>= c){
                        ans = mid;
                        l = mid+1;
                }
                else{
                        h = mid-1;
                }

        }
        return ans;
}