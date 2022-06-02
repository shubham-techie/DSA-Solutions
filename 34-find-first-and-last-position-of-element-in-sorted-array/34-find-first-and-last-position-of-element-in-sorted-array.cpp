class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        
        int n=nums.size(), l{}, h=n-1, m{};
        
        while(l<=h){
            m=(l+h)/2;
            
            if(!(nums[m]^t))
                break;
            
            if(nums[m]<t)
                l=m+1;
            else
                h=m-1;
        }
        
        if(l>h) return {-1,-1};
        
        for(l=m-1;l>=0 && nums[m]==nums[l];--l);
        for(h=m+1;h<n && nums[m]==nums[h];++h);
        
        return {l+1, h-1};
    }
};