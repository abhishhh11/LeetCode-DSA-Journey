
class Solution {
public:
    int levels(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));

    }
    void pre(TreeNode* root,vector<int>& ans, int level) {
        if(root == NULL) return;
        ans[level] = root->val;
        pre(root->left, ans, level+1);
        pre(root->right, ans, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root), 0);
        pre(root, ans, 0);
        return ans;
    }
};