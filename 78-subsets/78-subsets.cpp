class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<vector<int>>& v, int idx){
        
        if(idx>=nums.size()){ 
            v.push_back({});
            return;
        }
        
        generateSubsets(nums, v, idx+1);
        
        vector<vector<int>> tmp(v.begin(), v.end());
        for(auto& it:tmp){
            it.push_back(nums[idx]);
            v.push_back(it);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v{};
        
        generateSubsets(nums, v, 0);
        return v;
    }
};