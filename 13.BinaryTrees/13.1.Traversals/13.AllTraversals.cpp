/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
		vector<vector<int> > treeTraversal(TreeNode* root){
			//your code goes here
            stack<pair<TreeNode*, int>> st;
            vector<int> inorder, preorder, postorder;
            vector<vector<int>> ans;
            st.push({root,1});
            if (root == nullptr) return ans;
            while(!st.empty()) {
                auto it = st.top();
                st.pop();

                if(it.second == 1) {
                    preorder.push_back(it.first -> val);
                    it.second++;
                    st.push(it);

                    if(it.first -> left != nullptr) {
                        st.push({it.first -> left, 1});
                    }
                }
                else if(it.second == 2) {
                    inorder.push_back(it.first -> val);
                    it.second++;
                    st.push(it);

                    if(it.first -> right != nullptr) {
                        st.push({it.first -> right,1});
                    }
                }
                else {
                    postorder.push_back(it.first -> val);
                }
            }
            ans.push_back(inorder);
            ans.push_back(preorder);
            ans.push_back(postorder);
		}
};