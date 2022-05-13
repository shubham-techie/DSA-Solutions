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
    int inorderTraversal(TreeNode* root, int low, int high, int& sum){
        if(root){
            inorderTraversal(root->left, low, high, sum);
            
            int val{root->val};
            if(val>=low && val<=high)
                sum+=val;
            
            inorderTraversal(root->right, low, high, sum);
        }
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        /*
        int sum{};
        
        queue<TreeNode*> q{};
        q.push(root);
        
        while(!q.empty()){
            TreeNode* currNode=q.front();
            q.pop();
            
            int val{currNode->val};
            if(val>=low && val<=high)
                sum+=val;
            
            if(currNode->left!=nullptr)
                q.push(currNode->left);
            
            if(currNode->right!=nullptr)
                q.push(currNode->right);
        }
        
        return sum;
        */    
        
        int sum{};
        
        inorderTraversal(root, low, high, sum);
        return sum;
    }
};