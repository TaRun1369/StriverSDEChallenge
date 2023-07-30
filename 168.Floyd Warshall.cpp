#include<bits/stdc++.h>

int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.

    vector<vector<int>> mat(n+1 ,vector<int> (n,1e9));

    // int n = mat.size();
	    for(int i = 0 ;i<n;i++){
	        // for(int j = 0;j<n;j++){
	        //     if(i == j){
	        //        mat[i][j] = 0;
	        //     }
	        // }
            mat[i][i] = 0;
	    }

    for(auto it : edges){
        mat[it[0]-1][it[1]-1] = it[2];
    }

    for(int via = 0;via<n;via++){
	        for(int i = 0 ;i<n;i++){
	            for(int j = 0;j<n;j++){
                    if(mat[i][via] != 1e9 && mat[via][j] != 1e9)
	                mat[i][j] = min(mat[i][j],mat[i][via] + mat[via][j]);
	            }
	        }
	    }
	    
	   
    return mat[src-1][dest-1];

}