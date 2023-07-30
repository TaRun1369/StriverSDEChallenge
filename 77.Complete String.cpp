#include <bits/stdc++.h> 

#include <bits/stdc++.h> 

class Node{
    public:
    Node* links[26];
    // int cew = 0;
    // int cpref = 0;
    bool flag = false;
    bool containskey(char ch){
        return links[ch-'a'] != NULL;
    }

    Node* get(char ch){
        return links[ch - 'a'];
    }

    void put(char ch,Node* n){
        links[ch - 'a'] = n;
    }

    bool isEnd(){
        return flag;
    }
  
    void setEnd(){
        flag = true;
    }
    
};


class Trie{
Node* root;
    public:

    Trie(){
        root = new Node();
        // Write your code here.
    }

    void insert(string &word){

        Node* n = root;
        for(auto c: word){
            if(!n->containskey(c)){
                n->put(c, new Node());
            }
            n = n->get(c);
            // n->increasepref();
        }
        n->setEnd();
        // Write your code here.
    }
    // bool iscomplete(string &word){
    //     Node* n = root;
    //         string prefix = "";

    //     for(int i = 0;i<word.size();i++){
    //         // if(n->containskey(word[i])){
    //         //     if(n->get(word[i])->isEnd() != true){
    //         //         return false;
    //         //     }
    //         // }
    //          if (n->containskey(word[i])) {
    //         prefix += word[i];
    //         if (!n->get(word[i])->isEnd()) {
    //             return false;
    //         }
    //         n = n->get(word[i]);
    //     }
    //         else{
    //             return false;
    //         }
    //         // n = n->get(word[i]);
    //     }
    //     return true;
    // }

    bool iscomplete(string &word) {
     Node *node = root;
        bool flag = true; 
        for(int i = 0;i<word.size();i++) {
            if(node->containskey(word[i])) {
                node = node->get(word[i]); 
                flag = flag & node->isEnd(); 
            }
            else {
                return false; 
            } 
        }
        return flag; 
}


   
};

string completeString(int n, vector<string> &a){

    Trie t ;
    // string s = "None";
    for (auto it : a) 
      t.insert(it);
      
     string longest = ""; 
    for(auto word: a) {
        if(t.iscomplete(word)) {
            if(word.size() > longest.size()) {
                longest = word; 
            }
            else if(word.size() == longest.size() && word < longest) {
                longest = word; 
            }
        }
    }
    if(longest == "") return "None"; 
    return longest; 
    // return s;
    // Write your code here.
}