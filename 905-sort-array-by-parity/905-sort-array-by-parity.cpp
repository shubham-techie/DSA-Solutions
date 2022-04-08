class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        /* Method 1: Quick select : partition method
        
        int i{};
        for(int& j:nums){
            if((j&1)==0){
                swap(nums[i],j);
                ++i;
            }
        }
        
        return nums;
        */
        
        // Method 2: two pointers
        int l{},h=nums.size()-1;
        
        while(l<h){
            if((nums[l]&1) & !(nums[h]&1)){
                swap(nums[l],nums[h]);
                ++l;
                --h;
            }
            
            else if(!(nums[l]&1))  ++l;
            else if(nums[h]&1)     --h;
        }
        
        return nums;
    }
};