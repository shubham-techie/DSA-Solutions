class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int i{};
        for(int& j:nums){
            if((j&1)==0){
                swap(nums[i],j);
                ++i;
            }
        }
        
        return nums;
    }
};