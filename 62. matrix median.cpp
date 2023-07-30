#include <bits/stdc++.h>


int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int> a;
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            a.push_back(matrix[i][j]);
        }
    }
    sort(a.begin(),a.end());

    int N = a.size()/2;
    return a[N];
}