class Solution {
    int solve(String s1, String s2, int i, int j, int[][] dp){
        if(i==0 || j==0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1.charAt(i-1)==s2.charAt(j-1))
            return dp[i][j] = 1+ solve(s1, s2, i-1, j-1, dp);
        
        return dp[i][j] = Math.max(solve(s1, s2, i, j-1, dp), solve(s1, s2, i-1, j, dp));
    }
    
    public int longestCommonSubsequence(String s1, String s2) {
        
        int m=s1.length(), n=s2.length();
        int[][] dp=new int[m+1][n+1];
        
        for(int[] row:dp)
            Arrays.fill(row,-1);
        
        return solve(s1, s2, m, n, dp);
    }
}