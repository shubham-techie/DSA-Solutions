class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        /* Method 1 : Naive approach using two pointer 
        
        int maxSum{INT_MIN}, n=nums.size();
        
        for(int i=0;i<n;++i){
            int sum{};
            
            for(int j=i;j<n;++j){
                sum+=nums[j];              
                maxSum=sum>maxSum? sum:maxSum;
            }
        }
        
        return maxSum;
        */
        
        int maxSum{INT_MIN}, sum{};
        
        for(int& i:nums){
            sum+=i;
            maxSum=max(sum,maxSum);
            sum= sum<0? 0:sum;
        }
        
        return maxSum;
    }
};