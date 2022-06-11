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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q{};
        vector<vector<int>> v{};
        if(root) q.push(root);
        bool flag=true;
        
        while(q.size()){
            vector<int> tmp{};
            
            for(int i=q.size();i>0;--i){
                root=q.front();
                q.pop();
                tmp.push_back(root->val);
                
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
           if(!flag){
               int n=tmp.size();
            for(int i=0;i<n/2;++i)
                swap(tmp[i], tmp[n-i-1]);
           }
            
            flag=!flag;
             v.push_back(tmp);
        }
        return v;
    }
};