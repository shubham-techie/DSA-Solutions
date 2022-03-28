class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> res;
        
        for(int& it:nums1){
            if(map[it])
                continue;
            ++map[it];
        }
        
        for(int& it:nums2){
            if(map[it]){
                res.emplace_back(it);
                --map[it];
            }
        }
        
        return res;
    }
};