class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum=nums[0];
        int currSum{};
        
        for(int i=0;i<nums.size();++i){
            currSum+=nums[i];           
            maxSum=max(currSum,maxSum);
            currSum=currSum<0?0:currSum;
        }
        
        return maxSum;
    }
};