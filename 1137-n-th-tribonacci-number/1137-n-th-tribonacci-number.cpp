class Solution {
public:
    int dptribonacci(int n, vector<int>& dp){
        if(dp[n]!=-1) return dp[n];
        return dp[n]=dptribonacci(n-1,dp)+dptribonacci(n-2,dp)+dptribonacci(n-3,dp);
    }
    
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        vector<int> dp(n+1,-1);
        dp[0]=0, dp[1]=1, dp[2]=1;
        
        return dptribonacci(n, dp);
    }
};