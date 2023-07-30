bool dfs(int start,int parent,vector<vector<int>> &adj,int visited[]){
    visited[start] = 1;

    for(auto it : adj[start]){
        if(!visited[it]){
            if(dfs(it,start,adj,visited) == true){
                return true;
            }
        }
        else if(it != parent){
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    int visited[n+1] = {0};
    vector<vector<int>> adj(n+1);
    for(auto it : edges){
        int s = it[0];
        int e = it[1];
        adj[s].push_back(e);
        adj[e].push_back(s);
    }

    for(int i = 0;i<n;i++){
        if(!visited[i]){
            if(dfs(i,-1,adj,visited) == true) {
                return  "Yes";
            }
        }
    }
    return "No";
    // Write your code here.
}
