class Solution {
public:
    vector<vector<int>> res{};
    
    void dfs(int k, int n, vector<int> v, int i){
        if(i==10){
            if(k==0 && n==0)
                res.push_back(v);
            return;
        }
        
        v.push_back(i);
        dfs(k-1, n-i, v, i+1);
        v.pop_back();
        
        dfs(k, n, v, i+1);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v{};
        dfs(k, n, v, 1);
        return res;
    }
};