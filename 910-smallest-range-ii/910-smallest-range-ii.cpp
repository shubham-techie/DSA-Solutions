class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(n==1) return 0;
        
        sort(begin(nums),end(nums));
        int mn_diff=nums.back()-nums.front();
        
        if(k>=mn_diff)
            return mn_diff;
        
        for(int i=0;i<n-1;++i){
            int mx=max(nums.back()-k, nums[i]+k);
            int mn=min(nums.front()+k, nums[i+1]-k);
            
            mn_diff=min(mn_diff, mx-mn);
        }
        return mn_diff;
    }
};