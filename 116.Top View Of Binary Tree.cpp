vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    // node aur uska line
    vector<int>ans;
    if(root == NULL) return ans;
    queue<pair<TreeNode<int> *,int>> q;
    // line aur uspe first node ka value
    map<int,int> mp;
    q.push({root,0});
    while(!q.empty()){
        TreeNode<int> * node = q.front().first;
        int level = q.front().second;
        q.pop();
        if(mp.find(level) == mp.end()){
            mp[level] = node->val;
        }
        if(node->left) q.push({node->left,level-1});
        if(node->right) q.push({node->right,level+1});
    }
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;

}