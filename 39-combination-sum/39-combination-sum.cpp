class Solution {
public:
    void help(vector<int>& nums, int target, vector<vector<int>>& res, vector<int> subset, int idx){
        if(target==0){
            res.push_back(subset);
            return;
        }
        
        if(target<0 || idx>=nums.size()) return;
        
//         subset.push_back(nums[idx]);
//         help(nums, target-nums[idx], res, subset, idx);
//         subset.pop_back();
        
//         help(nums, target, res, subset, idx+1);
        
        
        for(int i=idx;i<nums.size();++i){
            subset.push_back(nums[i]);
            help(nums, target-nums[i],res, subset,i);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res{};
        vector<int> subset{};
        
        help(nums, target, res, subset, 0);
        return res;
    }
};