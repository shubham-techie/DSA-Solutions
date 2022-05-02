class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int l{};
        
        for(int i=0;i<nums.size();++i)
            if(nums[i]%2==0)
                swap(nums[l++],nums[i]);
        return nums;   
    }
};