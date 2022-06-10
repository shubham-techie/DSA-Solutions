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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q{};
        if(root) q.push(root);
        int ht{};
        
        while(q.size()){
            ++ht;
            int size=q.size()+1;
            
            while(--size){
                root=q.front();
                q.pop();
                
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
        }
        return ht;
    }
};