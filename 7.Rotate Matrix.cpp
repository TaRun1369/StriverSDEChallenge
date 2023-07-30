#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{

    int l = 0;
    int r = m-1;
    int t = 0;
    int b = n-1;
    int fe=0;
    while(l<r && t<b){
            int temp2 = mat[l][t],temp1=0;
            fe =mat[l+1][t];
    for(int i = l;i<=r;i++){
        temp1 = mat[t][i];
        mat[t][i] = temp2;
        temp2 = temp1;
    }
    t++;
    for(int i = t;i<=b;i++){
        temp1 = mat[i][r];
        mat[i][r] = temp2;
        temp2 = temp1;
    }
    r--;
    for(int i = r;i>=l;i--){
        temp1 = mat[b][i];
        mat[b][i] = temp2;
        temp2 = temp1;
    }
    b--;
    for(int i = b;i>=t;i--){
        temp1 = mat[i][l];
        mat[i][l] = temp2;
        temp2 = temp1;
    }
    l++;
    mat[l-1][t-1]=fe;
    }


    // Write your code here

}