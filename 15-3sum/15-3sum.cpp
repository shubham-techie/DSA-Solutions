class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> res{};
        
        if(n<2)
            return res;
        
        sort(nums.begin(),nums.end());
        
        if(nums[0]>0)
            return res;
        
        for(int i=0;i<n-2;++i){
            
            if(nums[i]>0)
                break;
            
            if(i==0 || nums[i]!=nums[i-1]){
                int l{i+1}, r{n-1}, target=-nums[i];

                while(l<r)
                    if(nums[l]==target-nums[r]){
                        res.insert(res.end(), {nums[l],nums[r],nums[i]});

                        while(l<r && nums[l]==nums[l+1]) ++l;
                        while(l<r && nums[r]==nums[r-1]) --r;
                        ++l;
                        --r;
                    }
                    else if(nums[l]<target-nums[r])
                        ++l;
                    else
                        --r;
            }
        }
        return res;
    }
};