class Solution {
public:
    TreeNode* iop(TreeNode* root) {
        if(root->left == NULL) return NULL;
        TreeNode* pred = root->left;
        while(pred->right != NULL) {
            pred = pred->right;
        }
        return pred;
    }

    TreeNode* ios(TreeNode* root) {
        if(root->right == NULL) return NULL;
        TreeNode* succ = root->right;
        while(succ->left != NULL) {
            succ = succ->left;
        }
        return succ;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val == key) {
// case 1: delete leaf node or node having no child
            if(root->left == NULL && root->right == NULL) return NULL;

// Case 2: delete node having one node or having one leaf node
            if(root->left == NULL || root->right == NULL) {
                if(root->left != NULL) return root->left;
                else return root->right;
            }
// Case 3: delete a node having two child nodes
            if(root->left != NULL && root->right != NULL) {
                TreeNode* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        }    
        else if(root->val > key) {// go left
            root->left = deleteNode(root->left, key);
        }
        else {// go right
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};