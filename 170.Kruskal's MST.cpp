#include <bits/stdc++.h> 
class disjoint{
    vector<int> size,parent;
    public:
     disjoint(int n){
        parent.resize(n+1,0);
        size.resize(n+1,0);
        for(int i=0;i<n;i++){  //initialising the parent vector
            parent[i]=i;
        }
    }
    int uparent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=uparent(parent[node]);
    }
    void unionbysize(int u,int v){
        int ulp_u=uparent(u);
        int ulp_v=uparent(v);
        if(ulp_u==ulp_v) return;

        if(size[ulp_u] > size[ulp_v]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else{

            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
    }
};
int kruskalMST(int n, int m, vector<vector<int>> &graph) {
    vector<pair<int,pair<int,int>>> edges;
        for(auto it: graph){
            int wt=it[2];
            int adjnode=it[1];
            int node=it[0];
            edges.push_back({wt,{node,adjnode}});
        }
    disjoint ds(n);
    sort(edges.begin(),edges.end());
    int sum=0;
    for(auto it:edges){
        int wt=it.first;
        int u=it.second.first;
        int v=it.second.second;
        if(ds.uparent(u)!=ds.uparent(v)){
            sum+=wt;
            ds.unionbysize(u,v);
        }
    }
return sum;

}