bool dfs(int start,int vis[],int pV[],vector<vector<int>> &adj){
  vis[start] = 1;
  pV[start] = 1;

  for(auto it : adj[start]){
    if(!vis[it]){
      if(dfs( it,vis,pV,adj) == true) return true;
    }
    else if(pV[it] == 1)return true;
  }
  pV[start] = 0;
  return false;

}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.

  vector<vector<int>> adj(n+1);
  for(auto it : edges){
    int s = it.first;
    int e = it.second;
    adj[s].push_back(e);
    // adj[e].push_back(s);
  }
  int visited[n+1] = {0};
  int pathvisited[n+1] = {0};
  for(int i = 1;i<=n;i++){
    if (!visited[i]) {
      if (dfs(i, visited, pathvisited, adj) == true)
        return 1;
    }
  }

  return 0;
}