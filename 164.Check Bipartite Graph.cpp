#include<bits/stdc++.h>



bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	int v = edges.size();
	int m = edges[0].size();
	vector<vector<int>> adj(v);
	vector<int> color(v,-1);
	for(int i = 0;i<v;i++){
		for(int j = 0;j<m;j++){
			if(edges[i][j] == 1){
				adj[i].push_back(j);
			}
		}
	}

	queue<int> q;
	q.push(0);
	color[0] = 0;
	while(!q.empty()){
		int n = q.front();
		q.pop();
		for(auto it : adj[n]){
			if(color[it] == -1){
				color[it] = !color[n];
				q.push(it);
			}
			else if(color[it] == color[n]){
				return false;
			}
		}
	}
	return true;

	// return true;

}