vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    vector<int>ans;
    if(root == NULL) return ans;
    queue<pair<TreeNode<int> *,int>> q;
    // line aur uspe first node ka value
    map<int,vector<int>> mp;
    q.push({root,0});
    while(!q.empty()){
        TreeNode<int> * node = q.front().first;
        int level = q.front().second;
        q.pop();
        mp[level].push_back(node->data);
        if(node->left) q.push({node->left,level-1});
        if(node->right) q.push({node->right,level+1});
    }
    for(auto it : mp){
        ans.insert(ans.end(), it.second.begin(), it.second.end());

    }
    return ans;

}