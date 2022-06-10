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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk{};
        vector<int> v{};
        
        while(1){
            if(root){
                stk.push(root);
                root=root->left;
            }
            else{
                if(!stk.size()) break;
                root=stk.top();
                stk.pop();
                
                v.push_back(root->val);
                root=root->right;
            }
        }
        return v;
    }
};