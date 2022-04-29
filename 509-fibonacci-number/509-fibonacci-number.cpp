class Solution {
public:
    int fibo(int n, vector<int>& dp){
        if(n<=1) return n;
        
        if(dp[n]!=-1) return dp[n];
        
        return dp[n]=fibo(n-1,dp) + fibo(n-2,dp);;
    }
    
    int fib(int n) {
        // vector<int> dp(n+1,-1);
        // return fibo(n,dp);
        
        if(n==0) return 0;
        int curr{1},prev1{1},prev2{0};
        
        for(int i=2;i<=n;++i){
            curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
};