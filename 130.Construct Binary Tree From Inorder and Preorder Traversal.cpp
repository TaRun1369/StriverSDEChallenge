#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int> *build(vector<int> &inorder,int inS,int inE, vector<int> &preorder,int preS , int preE,map<int,int> &hash){
    if(inS>inE || preS > preE) return NULL;

    TreeNode<int> *nN = new TreeNode<int>(preorder[preS]);
    int index = hash[nN->data];
    int nl = index - inS;
 nN->left = build(inorder,inS,index-1,preorder,preS+1,preS + nl,hash);
 nN->right = build(inorder,index+1,inE,preorder,preS+nl+1,preE,hash);

    return nN;

}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{

    map<int,int> hash;
    for(int i = 0;i<inorder.size();i++){
        hash[inorder[i]] = i;
    }

    TreeNode<int> * root = build(inorder,0,inorder.size() - 1,preorder,0,preorder.size() - 1,hash);

    return root;
	//    Write your code here
}


