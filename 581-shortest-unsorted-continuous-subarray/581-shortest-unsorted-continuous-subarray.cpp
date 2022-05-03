class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> v{nums};
        sort(v.begin(),v.end());
        
        int l{}, r=nums.size()-1;
        
        while(l<=r){
            if(nums[l]!=v[l] && nums[r]!=v[r])
                break;
            
            if(nums[l]==v[l])
                ++l;
            
            if(nums[r]==v[r])
                --r;
            
            
        }
        
        if(l>r)
            return 0;
        return r-l+1;
    }
};