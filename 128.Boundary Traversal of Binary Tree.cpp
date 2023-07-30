
bool isleaf(TreeNode<int>* r){
    if(r->left == NULL && r->right == NULL) return true;
    return false;
}
void lef(TreeNode<int>* root,vector<int> &ans){
    // if(root == NULL) return;
    TreeNode<int>* c = root->left;
    while(c){
      if (!isleaf(c)) {
        
        ans.push_back(c->data);

      }
      if(c->left){
          c= c->left;
      }
      else{
          c = c->right;
      }
    }
}
void leaf(TreeNode<int>* c,vector<int> &ans){
    // if(c == NULL) return;
    // TreeNode<int>* c = root;
    if(isleaf(c)){
        ans.push_back(c->data);
        return;
    }
    if(c->left)
    leaf(c->left,ans);
    if(c->right)
    leaf(c->right,ans);
}

void righ(TreeNode<int>* root,vector<int>&ans){
        if(root == NULL) return;

    vector<int> temp;
    TreeNode<int>* c = root->right;

    while(c){
        if(!isleaf(c)){
            temp.push_back(c->data);
        }
        if(c->right){
            c = c->right;
        }
        else{
            c= c->left;

        }
    }
ans.insert(ans.end(), temp.rbegin(), temp.rend());

}
vector<int> traverseBoundary(TreeNode<int>* root){

    vector<int> ans;
    if(root == NULL){
            return ans;
    }
    if (!isleaf(root)) ans.push_back(root -> data);
    // ans.push_back(root->data);
    lef(root,ans);

    leaf(root,ans);
    // leaf(root->right,ans);
    righ(root,ans);
    return ans;
    // Write your code here.
}