
class Solution {
public:

    int levels(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevel(TreeNode* root, vector<int> &lev, int curr, int level) {
        if(root == NULL) return ;
        if(curr == level) {
            lev.push_back(root->val);
            return ;
            
        }
        
        //curr++ ;
        nthLevel(root->left, lev, curr+1, level);
        nthLevel(root->right, lev, curr+1, level);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        int n = levels(root);
        for(int i=1;i<=n;i++) {
            vector<int> lev;
            nthLevel(root, lev, 1, i);
            ans.push_back(lev);
        }
        return ans;
    }
};