class Solution {
public:
    int solve(vector<vector<int>>& nums, int i, int j, vector<vector<int>>& dp){
        if(i==nums.size()-1){
            return nums[i][j];
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int l= nums[i][j] + solve(nums, i+1, j, dp);
        int r=nums[i][j] + solve(nums, i+1, j+1, dp);
        
        return dp[i][j] = min(l,r);
    }
    
    int minimumTotal(vector<vector<int>>& tr) {
        vector<vector<int>> dp(tr.size(), vector<int>(tr.size(),-1));
        
        int n=tr.size();
        for(int i=0;i<n;++i)
            dp[n-1][i]=tr[n-1][i];
        
        for(int i=n-2;i>=0;--i)
            for(int j=0;j<tr[i].size();++j)
                dp[i][j]= min(dp[i+1][j]+tr[i][j], dp[i+1][j+1]+tr[i][j]);
            
        return dp[0][0];
        // return solve(tr, 0, 0, dp);
    }
};