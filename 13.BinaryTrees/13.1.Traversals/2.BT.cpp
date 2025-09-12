// struct TreeNode {
//     int data;
//     TreeNode* left = nullptr;
//     TreeNode* right = nullptr;
    
//     TreeNode(int val) {
//         data = val;
//     }
// };
void traverseInorder(TreeNode* root) {
    if(root == nullptr) return;
    
    traverseInorder(root->left);
    cout<<root->data<<" ";
    traverseInorder(root->right);
}
int main() {
    struct TreeNode* root;
    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout<<"Created Binary Tree\n";
    traverseInorder(root);
    return 0;
}