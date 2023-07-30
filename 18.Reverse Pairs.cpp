#include <bits/stdc++.h> 

// int cnt  = 0;
 void merge(vector<int> &arr, int l, int m, int r)
    {
        int i = l, j = m+1;
        vector<int> temp;
        while(i<=m && j<=r){
            if(arr[i] < arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        while(i<=m){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int k = l;k<=r;k++){
            arr[k] = temp[k-l];
        }
         // Your code here
    }
    // public:
        int countpairs(vector<int> &arr,int low,int mid,int high){
                int right = mid+1;
                int cnt = 0;
                for(int i = low;i<=mid;i++){
                        while(right<=high && arr[i] > 2*arr[right]){
                                right++;
                        }
                        cnt+=(right-(mid+1));
                }
                return cnt;
        }
    int mergeSort(vector<int> &arr, int l, int r)
    {
                int cnt = 0;
        if(l >= r) return cnt;
        int mid = (l+r)/2;
        cnt += mergeSort(arr,l,mid);
        cnt += mergeSort(arr,mid+1,r);
        cnt+=countpairs(arr,l,mid,r);
        merge(arr,l,mid,r);
        //code here
                return cnt;
    }


int reversePairs(vector<int> &arr, int n){

        return mergeSort(arr,0,n-1);
        // return cnt;
        // Write your code here.        

}