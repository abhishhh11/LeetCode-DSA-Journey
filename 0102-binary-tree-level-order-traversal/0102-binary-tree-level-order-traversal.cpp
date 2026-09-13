
class Solution {
public:
    int levels(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void helper(TreeNode* root, vector<int>& lev, int curr, int level){
        if(root == NULL) return ;
        if(curr == level) {
            lev.push_back(root->val);
            return ;
        }
        helper(root->left, lev, curr+1, level);
        helper(root->right, lev, curr+1, level);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++) {
            vector<int> lev;
            helper(root, lev, 1, i);
            ans.push_back(lev);
        }
        return ans;
    }
};