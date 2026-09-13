class Solution {
public:
// T.C = O(n^2)    S.C == O(1)
    // long long maxTree(TreeNode* root) {
    //     if(root == NULL) return LLONG_MIN;
    //     return max((long long) (root->val), max(maxTree(root->left), maxTree(root->right))) ;
    // }
    // long long minTree(TreeNode* root) {
    //     if(root == NULL) return LLONG_MAX;
    //     return min((long long) (root->val), min(minTree(root->left), minTree(root->right)));
    // }
    // bool isValidBST(TreeNode* root) {
    //     if(root == NULL) return true;
    //     //else if(root->left == NULL && root->right == NULL) return true;
    //     else if((long long) (root->val) <= maxTree(root->left)) return false;
    //     else if((long long) (root->val) >= minTree(root->right)) return false;
    //     else return isValidBST(root->left) && isValidBST(root->right) ;
    // }

// TC = O(n)    SC == O(n)
 
    // void inOrd(TreeNode* root, vector<int>& ans) {
    //     if(root == NULL) return;
    //     inOrd(root->left, ans);
    //     ans.push_back(root->val);
    //     inOrd(root->right, ans);
    // }
    // bool isValidBST(TreeNode* root) {
    //     vector<int> ans;
    //     inOrd(root, ans);
    //     for(int i = 1; i<ans.size();i++){
    //         if(ans[i] <= ans[i-1]) return false;
    //     }
    //     return true;
    // }

// TC == O(n)    SC == O(1)
    TreeNode* prev = NULL;
    bool flag = true;
    void inOrd(TreeNode* root) {
        if(root == NULL) return;
        inOrd(root->left);
        if(prev != NULL) {
            if(root->val <= prev->val) {
                flag = false;
                return;
            }
        }
        prev = root;
        inOrd(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inOrd(root);
        return flag;
    }    
};