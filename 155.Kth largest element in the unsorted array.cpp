#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int k)
{
	int ans = 0;
	priority_queue<int> q;
	for(auto it: arr){
		q.push(it);
	}
	for(int i = 0;i<k;i++){
		ans = q.top();
		q.pop();
	}
	return ans;
	// Write your code here.
}