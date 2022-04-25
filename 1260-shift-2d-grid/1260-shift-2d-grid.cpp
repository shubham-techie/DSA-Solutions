class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
     int n=grid.size(), m=grid[0].size();
        
        for(;k>0;--k){
            int tmp=grid[n-1][m-1];

            for(int i=m*n-2;i>=0;--i)
                grid[(i+1)/m][(i+1)%m]=grid[i/m][i%m];

            grid[0][0]=tmp;
        }
        return grid;
    }
};