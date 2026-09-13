
class Solution {
public:
    void insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val);
        if(root->val > val) {
            if(root->left == NULL) root->left = temp;
            else insertIntoBST(root->left, val);
        }
        else {
            if(root->val < val) {
                if(root->right == NULL) root->right = temp;
                else insertIntoBST(root->right, val);
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
       TreeNode* root = new TreeNode(pre[0]);
       for(int i=1;i<pre.size();i++) {
       insertIntoBST(root, pre[i]);
       }
        return root;
    }
};