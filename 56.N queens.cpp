void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
      for (int j = 0; j < n; j++) {
        temp.push_back(board[i][j]);
      }
    }
    ans.push_back(temp);
}
bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    int x = row;
    int y = col;
    //check the entire row on the left coz right  is obviously empty
    while(y>=0){
       if(board[x][y] ==1){
           return false;
       }
       y--;
    }
    x = row;
    y = col;
    //check the 1st diagonal on the left going up
    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    x = row;
    y = col;
    //check the 2nd diagonal on the left going down
    while(x<n && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x++;
        y--;
    }
    return true;
}
void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){
    //base case
    if(col == n){
        addSolution(board, ans, n);
    }
    //solve 1 case put one queen in the 1st column ans rest columns recursion will take care
    for(int row = 0; row<n;row++){
        if(isSafe(row,col,board,n)){    //if all conditions are satisfied
            board[row][col] = 1;
            solve(col+1, ans, board, n);    //recursion solves rest columns
            board[row][col] = 0;      //backtracking: remove queen from the current place because either we got the correct answer
        }
    }
}
vector<vector<int>> solveNQueens(int n) {

    vector<vector<int>> board(n,vector<int>(n,0));

    vector<vector<int>> ans;
    solve(0,ans,board,n);

    return ans;

}