bool issafe(vector<vector<int>> &mat,int n,int col,int k,vector<int> &color){
    for(int i = 0;i<n;i++){
        if(i!=k && mat[i][k] == 1 && color[i] == col){
            return false;
        }
    }
    return true;
}

bool check(int node,int n,int nm,vector<vector<int>> &mat,vector<int> &color){
    if(node == n) return true;

    for(int i = 1;i<=nm;i++){
        if(issafe(mat,n,i,node,color)){
            color[node] = i;
            if(check(node+1,n,nm,mat,color) == true) return true;
            color[node] = 0;

        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int nm) {
    // Write your code here
    int n = mat.size();
    vector<int> color(n,0);
    if(check(0,n,nm,mat,color) == true) return "YES";
    return "NO";
}