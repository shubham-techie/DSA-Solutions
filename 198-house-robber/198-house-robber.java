class Solution {
    
    int solve(int[] nums,int i, int[] dp){
        if(i==nums.length) return 0;
        if(i==nums.length-1) return nums[i];
        
        if(dp[i+2]==-1) dp[i+2]=solve(nums, i+2, dp);
        int pk= nums[i] + dp[i+2];
        
        if(dp[i+1]==-1) dp[i+1]=solve(nums, i+1, dp);
        int npk = dp[i+1];
        
        return Math.max(pk, npk);
    }
    
    public int rob(int[] nums) {
        int[] dp= new int[nums.length+1];
        Arrays.fill(dp,-1);
        
       return solve(nums, 0, dp);
    }
}