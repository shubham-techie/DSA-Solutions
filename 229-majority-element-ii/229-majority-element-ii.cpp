class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map{};
        vector<int> v{};
        int n=nums.size();
        
        for(int& i:nums)
            ++map[i];
        
        for(auto& it:map)
            if(it.second >n/3)
                v.emplace_back(it.first);
        
        return v;
    }
};