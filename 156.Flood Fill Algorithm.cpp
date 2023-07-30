void dfs(int sr,int sc,int delrow[],int delcol[],vector<vector<int>> &image,vector<vector<int>> &ans,int nc,int ic){
    int n = image.size();
    int m = image[0].size();
    ans[sr][sc] = nc;
    for(int i = 0;i<4;i++){
        int nrow = sr + delrow[i];
        int ncol = sc + delcol[i];
        if(nrow<n && ncol <m && nrow >= 0 && ncol >= 0 && image[nrow][ncol] ==ic && ans[nrow][ncol] != nc){
            dfs(nrow,ncol,delrow,delcol,image,ans,nc,ic);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int initialcolor = image[x][y];
    vector<vector<int>> ans = image;
    int n = image.size();
    int m = image[0].size();

    int delrow[] = {0,1,0,-1};
    int delcol[] = {1,0,-1,0};

    dfs(x,y,delrow,delcol,image,ans,newColor,initialcolor);
    return ans; 
    // Write your code here.
}