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
// RECURSIVE METHOD

    // void inOrder(TreeNode* root, vector<int> &in) {
    //     if(root == NULL) return ;
    //     inOrder(root->left, in);
    //     in.push_back(root->val);
    //     inOrder(root->right, in);
    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> in;
    //     inOrder(root, in);
    //     return in;
    // }

// ITERATIVE METHOD

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        
        stack<TreeNode*> st;
        TreeNode* node = root;
        //st.push(root);
        while(st.size() != 0 || node != NULL ) {
            if( node != NULL) {
                st.push(node);
                node = node->left;
            }
            else { // Now node is null
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                node = temp->right;
            }
        }
        return ans;
    }
};