#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 

    int vis[n][m];
    // vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j] == 2){
              q.push({{i, j}, 0});
              vis[i][j] = 2;
            }
            else{
                vis[i][j] =0;
            }

        }
    }
    int tm = 0;
    int delrow[] = {1,0,-1,0};
    int delcol[] = {0,1,0,-1};
    while(!q.empty()){
        int s = q.front().first.first;
        int e = q.front().first.second;
        int t = q.front().second;
        q.pop();
        tm = max(tm,t);
        for(int i = 0;i<4;i++){
            int nrow = s + delrow[i];
            int ncol = e + delcol[i];
            if(nrow >= 0 && ncol >= 0 && nrow <n&& ncol <m && vis[nrow][ncol] != 2 
            && grid[nrow][ncol] == 1){
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol] = 2;
            }
        }
    }
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(vis[i][j]!=2 && grid[i][j]==1)return -1;

        }

    }
    return tm;
}