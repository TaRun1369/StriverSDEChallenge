#include <bits/stdc++.h> 
int merge(long long* arr,int low,int mid, int high){
    int i=low,j=mid+1;
    vector<long long> sorted(high-low+1);
    int res=0;
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            res+=(mid-i+1);
            j++;
        } else {  i++;
        }
    }
     i=low,j=mid+1;
    int k=0;
    while(i<=mid && j<=high){
      if (arr[i]< arr[j]) {
            sorted[k++]=arr[i++];
      } else {
            sorted[k++]=arr[j++];
        }
    }
    while(i<=mid){
        sorted[k++]=arr[i++];
    }
    while(j<=high){
        sorted[k++]=arr[j++];
    }
    int c=0;
    for(int k=low;k<=high;k++ ){
        arr[k]=sorted[c++];
    }
    return res;
}
int mergesort(long long * arr,int low,int high){
    //if(low>=high) return 0;
    long long ans=0;
    if(low<high){
        int mid=(low)+(high-low)/2;
    
    ans+=mergesort(arr,low,mid);
    ans+=mergesort(arr,mid+1,high);
    ans+=merge(arr,low,mid,high);
    
    }
    return ans;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr,0,n-1);
}