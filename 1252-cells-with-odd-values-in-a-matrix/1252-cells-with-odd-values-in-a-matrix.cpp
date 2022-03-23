class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        int oddCount{};
        
        vector<vector<int>> matrix(m);
        for(auto& v:matrix)
            v.resize(n,0);
            
        for(auto& v:indices){    
            for(int i=0;i<n;++i)
                ++matrix[v[0]][i];
            for(int i=0;i<m;++i)
                ++matrix[i][v[1]];
        }
        
        for(auto& v:matrix){
            for(int& i:v){
                oddCount+=(i&1);
            }
        }
        return oddCount;
    }
};