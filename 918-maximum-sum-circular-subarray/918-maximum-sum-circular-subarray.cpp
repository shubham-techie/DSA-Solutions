class Solution {
public:
    int kadaneAlgo(vector<int>& nums){
        int cSum{}, mxSum{nums[0]};
        
        for(int& i:nums){
            cSum=max(cSum+i, i);
            mxSum=max(mxSum,cSum);
        }
        
        return mxSum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
//         int nonCircularSum=kadaneAlgo(nums);  //max subarray sum
//         int totalSum{};
        
//         for(int i=0;i<nums.size();++i){
//             totalSum+=nums[i];
//             nums[i]=-nums[i];
//         }
        
//         int minSum=kadaneAlgo(nums);  //min subarray sum
//         int circularSum=totalSum + minSum;
        
//         return -minSum==totalSum? nonCircularSum : max(circularSum, nonCircularSum);
        
        
        int tsum{};
        int mxsum{nums[0]}, sum1{};
        int mnsum{nums[0]}, sum2{};
        
//         for(int& i:nums){
//             sum1=max(sum1+i,i);
//             mxsum=max(sum1,mxsum);
            
//             sum2=min(sum2+i, i);
//             mnsum=min(sum2,mnsum);
            
//             tsum+=i;
//         }
        
        for(int& i:nums){
            tsum+=i; sum1+=i; sum2+=i;
            
            mxsum=max(sum1,mxsum);
            mnsum=min(sum2,mnsum);
            
            if(sum1<0) sum1=0;
            if(sum2>0) sum2=0;
        }
        
        return mnsum==tsum? mxsum : max(mxsum, tsum-mnsum);
    }
};