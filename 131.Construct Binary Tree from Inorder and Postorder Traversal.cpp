/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
#include <bits/stdc++.h>
TreeNode<int> *build(vector<int> &inorder,int inS,int inE, vector<int> &preorder,int preS , int preE,map<int,int>&hash){
    if(inS>inE || preS > preE) return NULL;

    TreeNode<int> *nN = new TreeNode<int>(preorder[preE]);
    int index = hash[nN->data];
    int nl = index - inS;
    nN->right = build(inorder,index+1,inE,preorder,preS+nl,preE - 1,hash);
    nN->left = build(inorder,inS,index-1,preorder,preS,preS+nl-1,hash);
    return nN;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inorder) 
{
     map<int,int> hash;
    for(int i = 0;i<inorder.size();i++){
        hash[inorder[i]] = i;
    }
     // reverse(postOrder.begin(),postOrder.end());

     TreeNode<int> * root = build(inorder,0,inorder.size() - 1,postOrder,0,postOrder.size() - 1,hash);

    return root;
	// Write your code here.
}
