class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(vector<int>& a, vector<int> v, int t, int i){  
        if(t==0){
            res.push_back(v);
            return;
        }
        
        if(t<0)
            return;
        
        for(int j=i;j<a.size();++j){
            
            if(j>i && a[j]==a[j-1]) 
                continue;
            
            v.push_back(a[j]);
            backtrack(a, v, t-a[j], j+1);
            v.pop_back();
            
            // while(j+1<a.size() && a[j]==a[j+1])
            //     ++j;
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        sort(a.begin(), a.end());
        
        vector<int> v{};
        backtrack(a, v, t, 0);
        return res;
    }
};