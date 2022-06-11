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
    int heightBT(TreeNode* root){
        if(!root) return 0;
        int lh=heightBT(root->left);
        int rh=heightBT(root->right);
            
        if(abs(lh-rh)>1) return -1;
        if(min(lh,rh)==-1) return -1;
        return 1+ max(lh, rh);
    }
    
    bool isBalanced(TreeNode* root) {
        if(heightBT(root)==-1) return false;
        return true;
    }
};