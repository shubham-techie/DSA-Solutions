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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;        
        if((p && !q) || (!p && q)) return false;
        
        stack<TreeNode*> stk1{}, stk2{};
        stk1.push(p);
        stk2.push(q);
        
        while(stk1.size() && stk2.size()){
            p=stk1.top(), q=stk2.top();
            stk1.pop(), stk2.pop();
            
            if(p->val!=q->val)
                return false;
            
            if(p->left && q->left){
                stk1.push(p->left);
                stk2.push(q->left);
            }
            else if((p->left && !q->left) || (!p->left && q->left))
                return false;
            
            if(p->right && q->right){
                stk1.push(p->right);
                stk2.push(q->right);
            }
            else if((p->right && !q->right) || (!p->right && q->right))
                return false;
        }
        
        if(stk1.empty() && stk2.empty())
            return true;
        return false;
    }
};