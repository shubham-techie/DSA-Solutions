class Solution {
public:
    vector<vector<int>> res{};
    int n{};
    
    void backtrack(vector<int>& a, vector<int> v, vector<bool> b){
        if(v.size()==n){
            res.push_back(v);
        }
        
        for(int i=0;i<n;++i){
            if(!b[i]){
                b[i]=true;
                v.push_back(a[i]);
                backtrack(a, v, b);
                
                b[i]=false;
                v.pop_back();
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& a) {
        n=a.size();
        
        vector<int> v{};
        vector<bool> b(n, false);
        backtrack(a, v, b);
        
        return res;
    }
};