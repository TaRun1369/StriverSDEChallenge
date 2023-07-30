#include <bits/stdc++.h> 

 

void helper(string &s, unordered_set<string> &dict,vector<string> &ans, int n, int index,vector<string> &temp){
    if(index == n){
        string sentence = "";
        for(auto i: temp) sentence += i+" ";
        ans.push_back(sentence);
        return ;
    }
    for(int i=index; i<n; i++){
        string x = s.substr(index,i-index+1);
        if(dict.find(x) != dict.end()){
            temp.push_back(x);
            helper(s,dict,ans,n,i+1,temp);
            temp.pop_back();
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    unordered_set<string> dict(dictionary.begin(), dictionary.end());
    vector<string> ans;
    vector<string> temp;
    int n = s.length();
    helper(s,dict,ans, n, 0,temp);
    return ans;

}
 

