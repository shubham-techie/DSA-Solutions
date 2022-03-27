class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        vector<int> v;
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            if(!(nums[i]^target)) v.emplace_back(i);
           else if(nums[i]>target) break;
        }
        
        return v;
    }
};