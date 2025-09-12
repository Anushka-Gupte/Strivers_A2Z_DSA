/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void displayPost(TreeNode* root, vector<int>& ans) {
        if(root == nullptr) {
            return;
        }
        displayPost(root -> left,ans);
        displayPost(root -> right,ans);
        ans.push_back(root -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        displayPost(root,ans);
        return ans;
    }
};