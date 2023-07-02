#include <bits/stdc++.h>

 

int findDuplicate(vector<int> &arr, int n){

    sort(arr.begin(),arr.end());

    int i =0,j=i+1;

    int ans1;

    while(j<n){

        if(arr[i]==arr[j]){

            ans1 = arr[i];

            break;

            

        }

        else{

            i++;

            j++;

        }

    }

    return ans1;

}