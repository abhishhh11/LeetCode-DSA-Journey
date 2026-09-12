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
    // void postOrder(TreeNode* root, vector<int> &post) {
    //     if(root == NULL) return ;
    //     postOrder(root->left, post);
    //     postOrder(root->right, post);
    //     post.push_back(root->val);
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> post;
    //     postOrder(root, post);
    //     return post;
    // } {}

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* temp;
        while(st.size() > 0) {
            temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

};