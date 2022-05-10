class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(int k, int n, int start, vector<int> v){
        if(k<0 || n<0)
            return;
        
        if(k==0 && n==0){
            res.push_back(v);
            return;
        }
        
        for(int i=start;i<10;++i){
            v.push_back(i);
            backtrack(k-1, n-i, i+1, v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v{};
        backtrack(k, n, 1, v);
        return res;
    }
};