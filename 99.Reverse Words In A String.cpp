
#include <sstream>
#include <bits/stdc++.h> 
#include <string>
using namespace std;

string reverseString(string &str){
    // Write your code here.    
    vector<string> v;
    stringstream s(str);
    string mila;
    while (s >> mila) {
        // Convert the word to lowercase before storing it in the vector
        // transform(mila.begin(), mila.end(), mila.begin(), ::tolower);
        // if (find(v.begin(), v.end(), mila) == v.end())
            v.push_back(mila);
    }

    string ans = "";
    reverse(v.begin(), v.end());

    for (auto it : v) {
        ans += (it + " ");
    }
    return ans;
}