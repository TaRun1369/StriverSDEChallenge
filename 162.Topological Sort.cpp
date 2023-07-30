#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    int indegree[v] ={0};
    vector<int> adj[v];
    for(auto it :edges){
        int s = it[0];
        int end = it[1];
        adj[s].push_back(end);
    }
    for(int i = 0;i<v;i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0;i<v;i++){
        if(indegree[i] == 0) q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int n = q.front();
        q.pop();
        ans.push_back(n);

        for(auto it : adj[n]){
            indegree[it]--;
            if(indegree[it] == 0)q.push(it);

        }

    }
    return ans;
}