
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here.         

    if(root1 == NULL || root2 == NULL) return root1 == root2;

    return (root1->data == root2->data && identicalTrees(root1->right,root2->right) && identicalTrees(root1->left,root2->left));  
}