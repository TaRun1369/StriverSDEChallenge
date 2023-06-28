#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> m;
	int f = n/2;
	for(int i = 0;i<n;i++){
		m[arr[i]]++;
	}
	int maxf = INT_MIN;
	int ans = -1;
	for(auto it : m){
		if(it.second > f && maxf < it.second){
			ans = it.first;
			maxf = it.second;
		}
	}

	return ans;

}