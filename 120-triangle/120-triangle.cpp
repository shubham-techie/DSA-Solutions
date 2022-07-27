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
        return solve(tr, 0, 0, dp);
    }
};