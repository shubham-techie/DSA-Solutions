class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> v(2,1);
        int i=-1;
        
        for(auto& it:nums)
            ++map[it];
        
        for(auto& it:map){
            if(it.second==1)
                v[++i]=it.first;
        }
        return v;
    }
};