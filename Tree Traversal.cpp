#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int> &ans){
     if (root == NULL) {
      return ;

  }

  inorder(root->left,ans);
  ans.emplace_back(root->data);
  inorder(root->right,ans);
}
void Preorder(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    ans.emplace_back(root->data);

    Preorder(root->left,ans);
    Preorder(root->right,ans);
}

void Postorder(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root == NULL){
        return;
    }

    Postorder(root->left,ans);
    Postorder(root->right,ans);
        ans.emplace_back(root->data);

}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> anss;
    vector<int> a,b,c;
    inorder(root,a);
    anss.push_back(a);



    Preorder(root, b);
    anss.push_back(b);
    // a.erase(a.begin(),a.end());

    Postorder(root,c);
    anss.push_back(c);


return anss;


}