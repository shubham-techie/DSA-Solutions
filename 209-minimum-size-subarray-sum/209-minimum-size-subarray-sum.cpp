class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l=0, r=0, min_len=INT_MAX;
        int sum=0;
        
        while(r<nums.size()){
            sum+= nums[r];
            
            while(sum>=target){
                min_len=min(min_len, r-l+1);
                sum=sum-nums[l];
                ++l;
            }
            ++r;
        }
        return min_len==INT_MAX? 0:min_len;
    }
};