#include <bits/stdc++.h> 

int factorial(int l){
    if(l <= 1){
        return 1;
    }

    return l*factorial(l-1);
}

// int fact(int i){
// 	if (i <= 1) return 1;
//   	else return i*fact(i-1);
// }
vector<string> findPermutations(string &s) {
    // Write your code here.
    int k = factorial(s.size());
    vector<string> ans;
    while(k--){
        next_permutation(s.begin(),s.end());
        ans.push_back(s);
    }

    return ans;
}