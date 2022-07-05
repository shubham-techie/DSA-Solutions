class Solution {
public:
    void help(int sum, int size, int n, int i, vector<vector<int>>& res, vector<int> subset){
        if(sum==0 && size==0){
            res.push_back(subset);
            return;
        }
        
        if(sum<0 || size<0 || i>n) return;
        
        subset.push_back(i);
        help(sum-i, size-1, n, i+1, res, subset);
        subset.pop_back();
        
        help(sum, size, n, i+1, res, subset);
    }
    
    vector<vector<int>> combinationSum3(int size, int sum) {
        vector<vector<int>> res{};
        vector<int> subset{};
        
        help(sum, size, 9, 1, res, subset);
        return res;
    }
};