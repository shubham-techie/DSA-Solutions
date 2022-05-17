class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(vector<int>& a, vector<int> v, int i, int t){
        if(t==0){
            res.push_back(v);
            return;
        }
        
        if(t<0 || i>=a.size())
            return;
   
        backtrack(a, v, i+1, t);
        
        v.push_back(a[i]);
        backtrack(a, v, i, t-a[i]);
        v.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<int> v{};
        backtrack(a,v, 0, t);
        return res;
    }
};