

// #include <bits/stdc++.h> 
// int count1(int m, int n, int i, int j, vector<vector<int>>& dp, vector<vector<int>>& grid) {
//     if (i == m - 1 && j == n - 1) return grid[m - 1][n - 1];
//     else if (i >= m || j >= n) return 0;

//     // if(dp[i][j] != -1) return dp[i][j];
//     else return dp[i][j] = min(count1(m, n, i + 1, j, dp, grid), count1(m, n, i, j + 1, dp, grid));
// }

// int uniquePaths(int m, int n, vector<vector<int>>& grid) {
//     // Write your code here.
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     int count = count1(m, n, 0, 0, dp, grid);
//     return dp[m - 1][n - 1];
// }

// int minSumPath(vector<vector<int>>& grid) {
//     // Write your code here.
//     int n = grid.size();
//     int m = grid[0].size();
//     return uniquePaths(n, m, grid);
// }

#include <bits/stdc++.h> 
using namespace std;

int minSumPath(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    // Create a DP table to store the minimum cost to reach each cell
    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Initialize the first row and first column of the DP table
    dp[0][0] = grid[0][0];
    for (int i = 1; i < n; ++i) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < m; ++j) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }

    // Fill the DP table by calculating the minimum cost to reach each cell
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // The value in the bottom-right cell will be the minimum sum path
    return dp[n - 1][m - 1];
}




