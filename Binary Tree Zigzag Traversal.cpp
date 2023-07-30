vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
        return {};
        
    queue<BinaryTreeNode<int>*> q;
    bool flag = true;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
        int siz = q.size();
        vector<int> row(siz);
        int index;
        for(int i = 0;i<siz;i++){
            BinaryTreeNode<int>* node = q.front();
            q.pop();
        
            index = flag ? i : (siz-i-1);
                row[index] = node->data;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            
        }
        flag = !flag;
        ans.insert(ans.end(), row.begin(), row.end());

    }
    return ans;
    // Write your code here!
}
