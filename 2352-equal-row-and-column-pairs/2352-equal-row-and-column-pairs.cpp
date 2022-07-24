class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> mp{};
        int n=grid.size();
        int cnt{};
        
        for(auto i:grid){
            string s="";
            for(int& j:i)
                s+=(j+'0');
            ++mp[s];
        }
        
        for(int i=0;i<n;++i){
            string s="";
            for(int j=0;j<n;++j)
                s+=(grid[j][i]+'0');
            cnt+= mp[s];
        }
        return cnt;
    }
};