TreeNode <int> * lca(TreeNode<int> *root, int x, int y){

    if(root==NULL or root->data==x or root->data==y) return root;

 

    TreeNode<int>* leftTree = lca(root->left,x,y);

    TreeNode<int>* rightTree = lca(root->right,x,y);

 

    if(leftTree==NULL) return rightTree;

    if(rightTree==NULL) return leftTree;

 

    return root;

}

 

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)

{

    //    Write your code here

    TreeNode <int> *ans=lca(root, x, y);

    return ans->data;   

}
