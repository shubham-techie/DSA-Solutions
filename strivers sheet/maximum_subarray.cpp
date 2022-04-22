[https://leetcode.com/problems/maximum-subarray/]

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        /* Method 1 : Brute force using two pointer 
        
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
        
        // Method 2: Kadane's Algorithm
        int maxSum{nums[0]}, sum{};
        
        for(int& i:nums){
            sum=max(sum+i,i);
            maxSum=max(sum,maxSum);
        }
        
        return maxSum;
    }
};
