class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        /*
        int n=nums.size();
        vector<int>::iterator it;
        
        for(int i=0;i<n-1;++i)            
            if((it=find(nums.begin()+i+1,nums.end(), t-nums[i]))!=nums.end())
                return {i, int(it-nums.begin())};
        
        return {};
        */
        
        int n=nums.size();
        unordered_map<int, vector<int>> map;
        
        // mapping indices
        for(int i=0;i<n;++i)
            map[nums[i]].emplace_back(i);
        
        //sorting
        sort(begin(nums),end(nums));
        
        int l{}, r{n-1};
        vector<int> res;
        
        //finding the 2 elements 
        while(l<r){
            if(nums[l]==t-nums[r]){
                res.insert(res.end(),{nums[l],nums[r]});
                break;
            }
            
            if(nums[l]<t-nums[r])
                ++l;
            else if(nums[l]>t-nums[r])
                --r;
        }
        
        //finding the indices of 2 elements
        if(res[0]!=res[1])
            return {map[res[0]][0], map[res[1]][0]};
        else
            return {map[res[0]][0], map[res[0]][1]};
        
        return {};
    }
};