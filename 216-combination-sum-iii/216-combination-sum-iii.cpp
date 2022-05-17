class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(int k, int n, vector<int> v, int i){
        if(k==0 && n==0){
            res.push_back(v);
            return;
        }
        
        for(int j=i;j<10;++j){
            
            if(k<0 || n<0) break;
            
            v.push_back(j);
            backtrack(k-1, n-j, v, j+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v{};
        backtrack(k, n, v, 1);
        return res;
    }
};