class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int l{}, r=nums.size()-1;
        
        while(l<r){
            if(nums[l]==target-nums[r])
                return {l+1, r+1};
            
            if(nums[l]<target-nums[r])
                ++l;
            else
                --r;
        }
        
        return {};
    }
};