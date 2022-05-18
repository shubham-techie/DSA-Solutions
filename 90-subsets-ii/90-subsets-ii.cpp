class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(vector<int>& a, int i, vector<int> v){
        res.push_back(v);
        
        for(int j=i;j<a.size();++j){
            if(j>i && a[j]==a[j-1])
                continue;
            
            v.push_back(a[j]);
            backtrack(a, j+1, v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        sort(begin(a), end(a));
        
        vector<int> v{};
        backtrack(a, 0, v);
        
        return res;
    }
};