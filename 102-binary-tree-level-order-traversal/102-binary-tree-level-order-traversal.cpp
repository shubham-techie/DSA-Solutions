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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v{};
        
        if(root==nullptr) return {};
        queue<TreeNode*> q{};
        q.push(root);
        
        while(!q.empty()){
            vector<int> tmp{};
            
            for(int i=q.size();i>0;--i){
                root=q.front();
                q.pop();
                
                tmp.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            v.push_back(tmp);
        }
        return v;
    }
};