// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int v, int edges, int source) {
//     // Write your code here.

//     vector<vector<int>> adj[v];
//     for(auto it : vec){
//         adj[it[0]].push_back(it[2]);
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[2]);
//         adj[it[1]].push_back(it[0]);
//         // pehle dist fir node
        
//     }

//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//     vector<int> dista (v,1e9);
//     dista[source] = 0;
//     pq.push({0,source});
//     while(!pq.empty()){
//         int dist = pq.top().first;
//         int node = pq.top().second;
//         pq.pop();
//         for(auto it : adj[node]){
//             int ew = it[0];
//             int adN = it[1];

//             if(dist + ew < dista[adN]){
//                 dista[adN] = dist + ew;
//                 pq.push({dist[adN],adN});
//             }
//         }
//     }
//     return dista;
// }



#include <bits/stdc++.h> 
using namespace std;

vector<int> dijkstra(vector<vector<int>>& vec, int v, int edges, int source) {
    vector<vector<pair<int, int>>> adj(v);

    for (auto it : vec) {
        adj[it[0]].push_back({it[2], it[1]});
        adj[it[1]].push_back({it[2], it[0]});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dista(v, 1e10);
    dista[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node]) {
            int ew = it.first;  // Edge weight
            int adN = it.second;  // Adjacent node

            if (dist + ew < dista[adN]) {
                dista[adN] = dist + ew;
                pq.push({dista[adN], adN});
            }
        }
    }
    return dista;
}
