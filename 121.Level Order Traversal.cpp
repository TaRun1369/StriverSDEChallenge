vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while(!q.empty()){
        int siz = q.size();
        // vector<int> row(siz);
        for(int i = 0;i<siz;i++){
            BinaryTreeNode<int> *node = q.front();
            q.pop();
            // if(node != NULL)
                ans.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        
        }
        // ans.insert(ans.end(),row.begin(),row.end());
    }
    return ans;
    //  Write your code here.
}