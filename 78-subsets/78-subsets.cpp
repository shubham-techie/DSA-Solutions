class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<vector<int>>& v, int idx){
        
        if(idx>=nums.size()){ 
            v.push_back({});
            return;
        }
        
        generateSubsets(nums, v, idx+1);
        
        int s=v.size();
        for(int i=0;i<s;++i){
            vector<int> tmp(v[i].begin(), v[i].end());
            tmp.push_back(nums[idx]);
            v.push_back(tmp);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v{};
        
        generateSubsets(nums, v, 0);
        return v;
    }
};