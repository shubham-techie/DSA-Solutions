class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& ind) {
        int cnt{};
        vector<int> row(m,0), col(n,0);
        
        for(auto& it:ind){
            ++row[it[0]];
            ++col[it[1]];
        }
        
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j){
                int val= row[i]+col[j];
                cnt=cnt+ (val&1);
            }
            
        return cnt;
    }
};