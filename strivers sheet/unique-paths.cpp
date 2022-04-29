[https://leetcode.com/problems/unique-paths/]

class Solution {
public:
    int computePath(const int& m, const int& n, int i, int j, vector<vector<int>>& dp){
        if(i==m-1 || j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=computePath(m,n, i+1,j,dp) + computePath(m,n, i,j+1,dp);
    }
    
    int uniquePaths(int m, int n) {
        
        // Method 1: Using DP
        // TC, SC : O((m-1)* (n-1))
        // vector<vector<int>> dp(m-1, vector<int>(n-1,-1));
        // return computePath(m,n,0,0, dp);
        
        //Method 2: Solving with nCr 
        // TC: O(m-1) or O(n-1), SC: O(1)
        int N{m+n-2}, r{m<n? m-1: n-1};
        long long res{1};
        
        for(int i=1;i<=r;++i)
            res=res* (N-r+i)/i;
        return res;
    }
};
