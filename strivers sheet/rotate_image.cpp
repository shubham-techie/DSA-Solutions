[https://leetcode.com/problems/rotate-image/]

class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        
        int m=v.size();
        
        for(int i=0;i<m;++i){
            for(int j=i+1;j<m;++j)
                swap(v[i][j],v[j][i]);
            
            reverse(v[i].begin(),v[i].end());
        }
    }
};
