#include <bits/stdc++.h>


int ncr(int n,int r){
    int res =  1;
    for(int i = 0;i<r;i++){
        res *= (n-i);
        res /= (i + 1);
    }
    return res;

}
vector<vector<long long int>> printPascal(int n) 
{

  vector<vector<long long int>> ans;


  for(int i = 1;i<=n;i++){

    vector<long long int> ad;
    // ad.push_back(1);
    long long an = 1;
    ad.push_back(an);
    for(int j = 1;j<i;j++){
      an = an*(i-j);
      an = an/j;
      ad.push_back(an);
    }
    ans.push_back(ad);
  }
  return ans;
  // Write your code here.
}
