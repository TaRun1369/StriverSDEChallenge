************************************************************/
void recur(TreeNode<int> *root,vector<int> &a,int level){
    if(root == NULL) return;
    if(a.size() == level){
        a.push_back(root->data);

    }
    recur(root->left,a,level+1);
     recur(root->right,a,level+1);

}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    recur(root,ans,0);
    return ans;
    //    Write your code here
}