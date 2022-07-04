class Solution {
public:
    void helperCombinationSum(vector<int>& nums, int target, vector<vector<int>>& res, vector<int> subset, int idx){
        if(target==0){
            res.push_back(subset);
            return;
        }
        
        if(target<0 || idx>=nums.size()) return;
        
        subset.push_back(nums[idx]);
        target=target-nums[idx];
        helperCombinationSum(nums, target, res, subset, idx);
        target=target+nums[idx];
        subset.pop_back();
        
        helperCombinationSum(nums, target, res, subset, idx+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res{};
        vector<int> subset{};
        
        helperCombinationSum(nums, target, res, subset, 0);
        return res;
    }
};