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
        
        while(1){       //while(root || stk.size())
            if(root){
                stk.push(root);
                root=root->left;
            }
            else{
                if(!stk.size()) break;
                    
                TreeNode* tmp=stk.top()->right;
                
                if(tmp)
                    root=tmp;
                else{
                    auto push= [&](){
                        tmp=stk.top();
                        stk.pop();
                        v.push_back(tmp->val);
                    };
                   
                    push();
                    //pop all the rightNodes
                    while(stk.size() && tmp==stk.top()->right){
                        push();
                    }//end of while
                }
            }
        }//end of while
        
        return v;
    }
};