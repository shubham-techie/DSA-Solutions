class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> res{};
        
        for(auto& q:queries){
            vector<pair<string, int>> v{};
            int len=nums[0].size();
            
            //form substrings
            for(int i=0;i<nums.size();++i)
                v.push_back({nums[i].substr(len-q[1]),i});
            
            sort(v.begin(), v.end());    
            res.push_back(v[q[0]-1].second);
        }
        return res;
    }
};