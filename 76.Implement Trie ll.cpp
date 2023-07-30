#include <bits/stdc++.h> 

class Node{
    public:
    Node* links[26];
    int cew = 0;
    int cpref = 0;

    bool containskey(char ch){
        return links[ch-'a'] != NULL;
    }

    Node* get(char ch){
        return links[ch - 'a'];
    }

    void put(char ch,Node* n){
        links[ch - 'a'] = n;
    }

    void increaseE(){
        cew++;
    }
    void increasepref(){
        cpref++;
    }
    int getEnd(){
        return cew;
    }
    int getpref(){
        return cpref;
    }
    void deleteEnd(){
        cew--;
    }
    void reducepref(){
        cpref--;
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
            n->increasepref();
        }
        n->increaseE();
        // Write your code here.
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        Node*  n = root;

        for(auto c : word){
            if(n->containskey(c)){
                n = n->get(c);
            }
            else return 0;
        }
        return n->getEnd();
    }

    int countWordsStartingWith(string &word){
        // Write your code here.

        Node*  n = root;
        for(auto c : word){
            if(n->containskey(c)){
                n = n->get(c);
            }
            else return 0;
        }
        return n->getpref();

    }

    void erase(string &word){
        Node* n = root;
        for(auto c : word){
            if(n->containskey(c)){
                n = n->get(c);
                n->reducepref();
            }
            else{
                return;
            }
        }
        n->deleteEnd();
        // Write your code here.
    }
};
