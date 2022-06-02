class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size(), j{};
        
        for(int i=1;i<n;++i){
            
            while(i<n && nums[j]==nums[i])
                ++i;
            
            if(i<n)
                nums[++j]=nums[i];
        }
        return j+1;
    }
};