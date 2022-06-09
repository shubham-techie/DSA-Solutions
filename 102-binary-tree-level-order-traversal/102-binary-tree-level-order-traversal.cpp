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
        queue<TreeNode*> q{};
        vector<vector<int>> v{};
        
        if(root) q.push(root);
        
        while(!q.empty()){
            int size=q.size()+1;
            vector<int> tmp{};
            
            while(--size){
                TreeNode* node=q.front();
                q.pop();
                tmp.push_back(node->val);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            v.push_back(tmp);
        }
        
        return v;
    }
};