class Solution {
public:
    void help(int sum, int size, int n, int i, vector<vector<int>>& res, vector<int> subset){
        if(sum==0 && size==0){
            res.push_back(subset);
            return;
        }
        
        if(sum<0 || size<0 || i>n) return;
        
//         subset.push_back(i);
//         help(sum-i, size-1, n, i+1, res, subset);
//         subset.pop_back();
        
//         if(n-i>=size)   //if elements left are less than required size, then there is no point to generate further subsets
//             help(sum, size, n, i+1, res, subset);
        
        
        for(int j=i;j+size-1<=n;++j){
            subset.push_back(j);
            help(sum-j, size-1, n, j+1, res, subset);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int size, int sum) {
        vector<vector<int>> res{};
        vector<int> subset{};
        
        help(sum, size, 9, 1, res, subset);
        return res;
    }
};