
void dfs(vector<vector<int>> &adj,int vis[],int start,vector<int>&ans){
    vis[start] = 1;
    ans.push_back(start);
    for(auto it : adj[start]){
        if(!vis[it]){
            dfs(adj,vis,it,ans);
        }
    }

}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    int vis[V] = {0};
    vector<vector<int>> adj(V);
    for(int i = 0;i<E;i++){
        int s = edges[i][0];
        int e = edges[i][1];
        adj[s].push_back(e);
        adj[e].push_back(s);
    }
    vector<vector<int>> ans;
    for(int i = 0;i<V;i++){
        vector<int> an;
        if(!vis[i]){
            
            dfs(adj,vis,i,an);
            ans.push_back(an);
        }
        
    }

    return ans;
    // Write your code here
}