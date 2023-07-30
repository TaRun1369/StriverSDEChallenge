vector<int> bottomView(BinaryTreeNode<int> * root){

 vector<int>ans;
    if(root == NULL) return ans;
    queue<pair<BinaryTreeNode<int> *,int>> q;
    // line aur uspe first node ka value
    map<int,int> mp;
    q.push({root,0});
    while(!q.empty()){
        BinaryTreeNode<int> * node = q.front().first;
        int level = q.front().second;
        q.pop();
        if(mp.find(level) == mp.end()){
            mp[level] = node->data;
        }else{
            mp[level] = node->data;
        }
        if(node->left) q.push({node->left,level-1});
        if(node->right) q.push({node->right,level+1});
    }
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
    // Write your code here.
    
}