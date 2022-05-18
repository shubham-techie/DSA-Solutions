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
        /*
        sort(begin(a), end(a));
        
        vector<int> v{};
        backtrack(a, 0, v);
        
        return res;
        */
        
        
        sort(a.begin(), a.end());
        
        res.push_back({});
        int n=a.size(), ptr{}, idx{}, size{};
        
        for(int i=0;i<n;++i){
            
            int size=res.size();
           
            for(int j=idx;j<size;++j){
                vector<int> tmp(res[j]);
                tmp.push_back(a[i]);
                
                res.push_back(tmp);
            }
            
           idx=(i+1<n && a[i]==a[i+1])? size : 0;
            
        }
        return res;
    }
};