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
# define pb push_back

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<pair<TreeNode*, int>> stk{};
        vector<int> pre, in, post;
        if(root) stk.push({root, 1});
        
        while(stk.size()){
            auto it=stk.top(); 
            stk.pop();
            
            if(it.second==1){
                pre.pb(it.first->val);
                ++it.second;
                stk.push(it);
                
                if(it.first->left)
                    stk.push({it.first->left, 1});
            }
            
            else if(it.second==2){
                in.pb(it.first->val);
                ++it.second;
                stk.push(it);
                
                if(it.first->right)
                    stk.push({it.first->right, 1});
            }
            else
                post.pb(it.first->val);
        }
        
        return in;
    }
};