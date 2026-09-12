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
    // void preOrder(TreeNode* root, vector<int> &pre) {
    //     if(root == NULL) return ;
    //     pre.push_back(root->val);
    //     preOrder(root->left, pre);
    //     preOrder(root->right, pre);
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> pre;
    //     preOrder(root, pre);
    //     return pre;
    // }

    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if(root == NULL) return ans;
        TreeNode* temp;
        st.push(root);
        while(st.size() > 0) {
            temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right != NULL) st.push(temp->right);
            if(temp->left != NULL) st.push(temp->left);

        }
        return ans;
    }
};