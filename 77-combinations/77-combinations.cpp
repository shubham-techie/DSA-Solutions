class Solution {
public:
    void helperCombination(int n, int k, int i, vector<int> subset, vector<vector<int>>& v){
        if(k==0){
            v.push_back(subset);
            return;
        }
        
        if(i==n+1) return;
        
        subset.push_back(i);
        helperCombination(n, k-1, i+1, subset, v);
        subset.pop_back();
        
        if(n-i+1>=k)
            helperCombination(n,k, i+1,subset, v);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v{};
        vector<int> subset{};
        
        helperCombination(n, k, 1, subset, v);
        return v;
    }
};