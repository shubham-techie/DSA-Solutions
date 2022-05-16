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
    int sum{};
    
    int height(TreeNode* root){
        if(!root)
            return 0;
        return max(height(root->left), height(root->right))+1;
    }
    
    int sum_h(TreeNode* root, int h){
        if(!root)
            return sum;
        
        if(h==0)
            sum+=root->val;
        
        sum_h(root->left,h-1);
        sum_h(root->right, h-1);
        return sum;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        /*
        queue<TreeNode*> q{};
        q.push(root);
        int sum{};
        
        while(!q.empty()){
            int size=q.size();
            sum=0;
            
            while(size--){
                TreeNode* tmp=q.front();
                q.pop();
                
                sum+=tmp->val;
                
                if(tmp->left!=nullptr)
                    q.push(tmp->left);
                
                if(tmp->right!=nullptr)
                    q.push(tmp->right);
            }
        }
        
        return sum;
        */
        
        int h=height(root);
        cout<<h;
        return sum_h(root, h-1);
    }
};