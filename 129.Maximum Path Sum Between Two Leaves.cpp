long long help(TreeNode<int> *root,long long &maxx){
    if(root == NULL) return 0;

    long long lsum = help(root->left,maxx);
    long long rsum = help(root->right,maxx);

    maxx = max(maxx,root->val + lsum+rsum);

    return root->val + max(lsum,rsum);
}

// upper bound lower bound rahega har element ke liye
 // bas lower bound node ka value rahega jo left wale ke liye rahega
long long int findMaxSumPath(TreeNode<int> *root)
{
    if(root == NULL || root->left == NULL || root->right == NULL) return -1;
    long long maxx = 0;
     help(root,maxx);
    return maxx;
    
       // Write your code here.
}