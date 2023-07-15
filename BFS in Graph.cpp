#include <bits/stdc++.h>

// void bff(vector<vector<int>> &adj,vector<int> &visited,vector<int> &ans,int start){
//     queue<int> q;
//     q.push(start);
//     visited[start] = 1;
//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         ans.push_back(node);

//         for(auto it : adj[node]){
//             if(!visited[it]){
//                 visited[it] = 1;
//                 q.push(it);
//             }
//         }

//     }


// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     vector<vector<int>> adj(vertex);

//     for(auto it : edges){
//         adj[it.first].push_back(it.second);
//         adj[it.second].push_back(it.first);

//     }
//     vector<int> visited(vertex,0);
//     vector<int> ans;


//     for(int i = 0;i<vertex;i++){
       
//         if(!visited[i]){
//             bff(adj,visited,ans,i);
//         //      for(auto it : ans)cout<<it<<" ";
//         // cout<<endl;
//         }
//     }
//     return ans;
//     // Write your code here
// }

void bfs(vector<vector<int>> &adj, vector<int> &visited, vector<int> &ans, int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node]) {
            if (!visited[it]) {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
    vector<vector<int>> adj(vertex);

    for (auto it : edges) {
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    // sort(adj.begin(),adj.end());
     for(int i=0;i<vertex;i++)

    {

        sort(adj[i].begin(),adj[i].end());

    }
    

    vector<int> visited(vertex, 0);
    vector<int> ans;

    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(adj, visited, ans, i);
        }
    }

    return ans;
}