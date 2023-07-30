/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

class  node{
    public:
    node* links[26];
    bool flag = false;
    bool containkey(char ch){
        return links[ch-'a'] != NULL;
    }

    void put(char ch,node* n){
        links[ch-'a'] = n;
    }

    node* get(char ch){
        return links[ch-'a'];
    }

    bool setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }


};
class Trie {
    node* root;

public:

    /** Initialize your data structure here. */
    Trie() {
        root = new node();


    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        node* n = root;

        for(int i = 0;i<word.size();i++){
            if(!n->containkey(word[i])){
                n->put(word[i],new node());
            }

            n = n->get(word[i]);
        }

        n->setEnd();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        node* n = root;
        for(int i = 0;i<word.size();i++){
            if(!n->containkey(word[i])){
                return false;
            }
            n = n->get(word[i]);
        }
        return n->isEnd();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        node* n = root;
        for(int i = 0;i<word.size();i++){
            if(!n->containkey(word[i])){
                return false;
            }
            n = n->get(word[i]);
        }
        return true;
    }
};