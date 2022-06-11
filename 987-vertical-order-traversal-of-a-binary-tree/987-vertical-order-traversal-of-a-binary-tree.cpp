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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        
        vector<vector<int>> v{};
        queue<pair<TreeNode*,pair<int,int>>> q{};
        q.push({root, {0,0}});
        
        map<int, map<int,multiset<int>>> map{};
        
        while(!q.empty()){
            
            for(int i=q.size();i>0;--i){
                auto tmp=q.front();
                q.pop();
                
                TreeNode* node=tmp.first;
                int vert=tmp.second.first, level=tmp.second.second;
                map[vert][level].insert(node->val);
                
                if(node->left) q.push({node->left, {vert-1, level+1}});
                if(node->right) q.push({node->right, {vert+1, level+1}});
            }
        }
        
        for(auto vertical:map){
            vector<int> tmp{};
            
            for(auto level:vertical.second)
                tmp.insert(tmp.end(), begin(level.second), end(level.second));
            
            v.push_back(tmp);
        }
        return v;
    }
};