
int solve(TreeNode<int> * root,int ans, int key){
    if(root == NULL) return ans;

    if(root->val<= key){
        ans = root->val;
        solve(root->right,ans,key);
    }
    else{
        solve(root->left,ans,key);
    }

}
int floorInBST(TreeNode<int> * root, int key)
{
    long long ans = -1;
    if(root == NULL) return ans;
    ans = solve(root,ans,key);
     

    // Write your code here.
}