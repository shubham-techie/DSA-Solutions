class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        vector<int>::iterator it;
        for(int i=0;i<n-1;++i)            
            if((it=find(nums.begin()+i+1,nums.end(), t-nums[i]))!=nums.end())
                return {i, int(it-nums.begin())};
        
        return {};
    }
};