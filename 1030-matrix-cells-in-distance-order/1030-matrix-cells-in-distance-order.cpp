class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) {
        vector<vector<int>> v(rows*cols, vector<int>(3));
        
        int k={-1};
        for(int i=0;i<rows;++i)
            for(int j=0;j<cols;++j)
                v[++k]={i,j,abs(r-i)+abs(c-j)};
        
        sort(v.begin(),v.end(),[](vector<int>&v1,vector<int>&v2){
            return v1[2]<v2[2];
        });
        
        for(auto& i:v)
            i.pop_back();
    return v;
    }
};