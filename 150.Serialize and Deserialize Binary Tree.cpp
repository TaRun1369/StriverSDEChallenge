************************************************************/
#include <sstream>

string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
 if(root == NULL) return "";
 string s = "";
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
       
        int si = q.size();
        for(int i = 0;i<si;i++){
             TreeNode<int> * node = q.front();
            q.pop();

            if(node == NULL){
                s += "#,";

            }
            else{
                s+=(to_string(node->data) + ',');
            }
            if(node != NULL){
                q.push(node->left);
                q.push(node->right);
            }
        }
    }
    return s;

}

TreeNode<int>* deserializeTree(string &data)
{
    if(data.size() == 0) return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    TreeNode<int> * root = new TreeNode<int> (stoi(str));
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> * node = q.front();
        q.pop();

        getline(s,str,',');
        if(str == "#"){
            node->left == NULL;
        }
        else{
            TreeNode<int> * newN = new TreeNode<int>(stoi(str));
            node->left = newN;
            q.push(newN);
        }
        getline(s,str,',');
if(str == "#"){
            node->right == NULL;
        }
        else{
            TreeNode<int> * newN = new TreeNode<int>(stoi(str));
            node->right = newN;
            q.push(newN);
        }

    }
    return root;
 //    Write your code here for deserializing the tree

}