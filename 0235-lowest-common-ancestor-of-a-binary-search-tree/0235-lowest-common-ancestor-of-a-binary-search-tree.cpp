class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        else if(root->val == p->val || root->val == q->val) return root;
        else if(p->val < root->val && q->val > root->val) return root;
        else if(p->val > root->val && q->val < root->val) return root;

        else if(p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);

        return root;
    }
};