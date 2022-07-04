class Solution {
public:
    void generatePermutations(vector<int> nums, vector<vector<int>>& v, int idx){
        if(idx+1==nums.size()) 
            v.push_back(nums);
        
        // unordered_set<int> mp{};
        
        for(int i=idx;i<nums.size();++i){
            // if(mp.count(nums[i])) continue;
            // mp.insert(nums[i]);
            
            if(i!=idx && nums[i]==nums[idx]) continue;

            swap(nums[i], nums[idx]);
            generatePermutations(nums, v, idx+1);
            // swap(nums[i], nums[idx]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        vector<vector<int>> v{};
        generatePermutations(nums, v, 0);
        return v;
    }
};