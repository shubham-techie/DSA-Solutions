class Solution {
    public int equalPairs(int[][] grid) {
        int cnt=0;
        int n=grid.length;
        
        for(int[] row:grid)
            for(int j=0, i=0;j<n;++j){
                for(i=0;i<n;++i)
                    if(grid[i][j]!=row[i])
                        break; 
                if(i==n) ++cnt;
            }
        return cnt;
    }
}