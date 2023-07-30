#include <bits/stdc++.h> 

class node{
    public:
    node* links[26];

    bool containskey(char ch){
        return links[ch-'a'] != NULL;
    }

    void put(char ch,node* n){
        links[ch-'a'] = n;
    }

    node* get(char ch){
        return links[ch - 'a'];
    }



};

int distinctSubstring(string &word) {
    int cnt = 0;

    node* root = new node();

    for(int i = 0;i<word.size();i++){
        node* n = root;
        for(int j = i;j<word.size();j++){
            if(!n->containskey(word[j])){
                cnt++;
                n->put(word[j],new node());
            }
            n = n->get(word[j]);
        }
    }
    return cnt;
    //  Write your code here.
}
