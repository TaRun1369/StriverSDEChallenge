void dfs(int** arr,int n,int m,vector<vector<int>> &visited,int row,int col,int delrow[],int delcol[]){

   visited[row][col] = 1;
   for(int i = 0;i<8;i++){
      int nrow = row + delrow[i];
      int ncol = col + delcol[i];
      if(nrow < n&& ncol < m && nrow >= 0 && ncol >= 0 && !visited[nrow][ncol] && arr[nrow][ncol] == 1){
         // visited[nrow][ncol] = 1;
         dfs(arr,n,m,visited,nrow,ncol,delrow,delcol);
      }
   }
}

int getTotalIslands(int** arr, int n, int m)
{
   vector<vector<int>> visited(n,vector<int>(m,0));
   int delrow[] = {-1,0,1,1,1,0,-1,-1};
   int delcol[] = {1,1,1,0,-1,-1,-1,0};
   int ans = 0;
   for(int row = 0 ;row< n;row++){
      for(int col = 0;col <m;col++){
         if(!visited[row][col] && arr[row][col] == 1){
            ans++;
            dfs(arr,n,m,visited,row,col,delrow,delcol);
         }
         
      }
   }
   return ans;
   // Write your code here.
}
