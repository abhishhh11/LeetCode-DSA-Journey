class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
// MORRIS TRAVERSAL ->  it is best because it's space commplexity is constant -> O(1) 
// except this all traversal have space comp O(n)
        vector<int> ans;
        if(root == NULL) return ans;
        TreeNode* curr = root;
        TreeNode* pred;
        while(curr != NULL){
            if(curr->left != NULL) {
                pred = curr->left;

                while(pred->right != NULL && pred->right != curr) {
                    pred = pred->right;
                }
                
                if(pred->right == NULL) {
                    pred->right = curr;
                    curr = curr->left;
                }

                if(pred->right == curr) {
                    pred->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else {
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};