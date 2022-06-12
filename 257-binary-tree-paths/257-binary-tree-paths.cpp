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
    vector<string> v{};
    
    void getAllPaths(TreeNode* root, string p){
        if(!root->left && !root->right){
            v.push_back(p);
            return;
        }
        
        if(root->left) getAllPaths(root->left, p+ "->"+to_string(root->left->val));
        if(root->right) getAllPaths(root->right, p+ "->"+to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return v;
        
        getAllPaths(root, to_string(root->val));
        return v;
    }
};