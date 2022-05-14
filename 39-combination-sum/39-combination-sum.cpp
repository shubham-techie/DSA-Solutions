class Solution {
public:
    vector<vector<int>> res{};
    
    void backtrack(vector<int>& nums, int i, int sum, vector<int>& v){
        /*
        if(i==nums.size()){
            if(sum==0)
            res.push_back(v);
            return;
        }
        
        if(nums[i]<=sum){
            v.push_back(nums[i]);
            backtrack(nums, i, sum-nums[i], v);
            v.pop_back();
        }
        
        backtrack(nums, i+1, sum, v);
        */
        
        if(sum<0)
            return;
        
        if(sum==0){
            res.push_back(v);
            return;
        }
        
        for(int j=i;j<nums.size();++j){
            v.push_back(nums[j]);
            backtrack(nums, j, sum-nums[j], v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> v{};
        
        backtrack(nums, 0, target, v);
        return res;
    }
};