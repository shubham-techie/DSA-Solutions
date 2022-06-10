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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk{};
        vector<int> v{};
        
        if(root) stk.push(root);
        
        while(!stk.empty()){
            root=stk.top();
            stk.pop();
            v.push_back(root->val);
            
            if(root->left) stk.push(root->left);
            if(root->right) stk.push(root->right);
        }
        
        int n=v.size();
        for(int i=0;i<n/2;++i)
            swap(v[i],v[n-i-1]);
        return v;
    }
};