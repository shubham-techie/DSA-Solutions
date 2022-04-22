[https://leetcode.com/problems/sort-colors/]

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low{},high=nums.size()-1, mid{};
        
        while(mid<=high){
            if(nums[mid]==1){
                ++mid;
                continue;
            }
            
            if(nums[mid]<1)
                swap(nums[low++],nums[mid++]);
                
            else if(nums[mid]>1)
                swap(nums[high--],nums[mid]);
            
            
        }
    }
};
