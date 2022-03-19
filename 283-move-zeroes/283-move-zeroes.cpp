class Solution {
public:
    void moveZeroes(vector<int>& nums) {  
        int slow{},fast{};
        int n=nums.size();
        
        while(fast<n){
            if(nums[fast]!=0)
                swap(nums[slow++],nums[fast]);
            
            ++fast;
        }
    }
};