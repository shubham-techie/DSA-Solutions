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
    vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        queue<TreeNode*> q{};
        q.push(root);
        vector<int> v{};
        
        while(!q.empty()){
            for(int i=q.size();i>0;--i){
                root=q.front();
                q.pop();
                
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            v.push_back(root->val);
        }
        
        return v;
    }
};