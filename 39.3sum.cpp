#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
        // Write your code here.

        vector<vector<int>> ans;

        sort(arr.begin(),arr.end());

        for(int i = 0;i<n-2;i++){
                if(i >0 && arr[i] == arr[i-1]) continue;
                int j = i+1;
                int k = n-1;

                while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                        if(sum < K){
                                j++;
                        }
                        else if(sum > K){
                                k--;
                        }
                        else{
                                vector<int> temp;
                                temp = {arr[i],arr[j],arr[k]};
                                // if(find(ans.begin(),ans.end(),temp) == ans.end())
                                ans.push_back(temp);
                                // j++;

                                // k--;
                                // while(j<k && arr[j] == arr[j-1]) j++;
                                // while(j<k && arr[k] == arr[k-1]) k--;
                                
                int x = arr[j];

                int y = arr[k];

 

                while (j < k && arr[j] == x) {

                    j++;

                }

                while (j < k && arr[k] == y) {

                    k--;

                }
                        }
                }
                while((i < n-1) && arr[i] == arr[i-1] ) i++;
        }
        return ans;

}