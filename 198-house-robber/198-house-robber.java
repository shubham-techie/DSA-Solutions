class Solution {
    
    int solve(int[] nums,int i, int[] dp){
        if(i==nums.length) return 0;
        if(i==nums.length-1) return nums[i];
        
        if(dp[i]!=-1) return dp[i];
        
        int pk= nums[i] + solve(nums, i+2, dp);
        int npk = solve(nums, i+1, dp);
        
        return dp[i]= Math.max(pk, npk);
    }
    
    public int rob(int[] nums) {
        int[] dp= new int[nums.length];
        Arrays.fill(dp,-1);
        
       return solve(nums, 0, dp);
    }
}