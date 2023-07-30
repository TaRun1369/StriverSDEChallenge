int solve(BinaryTreeNode<int> * root,int ans, int key){
    if(root == NULL) return ans;

    if(root->data< key){
        solve(root->right,ans,key);
    }
    else{
        ans = root->data;
        solve(root->left,ans,key);
    }

}
int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    long long ans = -1;
    if(root == NULL) return ans;
    ans = solve (root,ans,x);
    return ans;
}