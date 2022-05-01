class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res{};
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;++i){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
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