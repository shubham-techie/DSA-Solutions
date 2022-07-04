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
    
    void generateSubsets(vector<int>& nums, vector<vector<int>>& v, vector<int>& tmp, int idx){
        if(idx==nums.size()){
            v.push_back(tmp);
            return;
        }
        
        tmp.push_back(nums[idx]);
        generateSubsets(nums, v, tmp, idx+1);
        
        tmp.pop_back();
        generateSubsets(nums, v, tmp, idx+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v{};
        // vector<int> tmp{};
        // generateSubsets(nums, v, tmp, 0);
        
        
        int n=nums.size();
        int total_subsets=1<<n;
        
        for(int i=0;i<total_subsets;++i){
            vector<int> tmp{};
            for(int j=0;j<n;++j)
                if(i & 1<<j)
                    tmp.push_back(nums[j]);
            v.push_back(tmp);
        }
        return v;
    }
};





