class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        /* M1: sort + 2-ptr + pruning | TC: O(nlogn) | SC:O(1)
        sort(begin(nums), end(nums));
        
        int cnt{}, l{}, r=nums.size()-1;
        
        while(l<r && nums[l]<k)
            if(nums[l]+nums[r]==k)     ++cnt, ++l, --r;
            else if(nums[l]+nums[r]<k) ++l;
            else                       --r;
        
        return cnt;
        */
        
        
        // M2: mapping count | TC:O(n) | SC:O(n)
        unordered_map<int,int> map{};
        int n=nums.size(), cnt{};
        
        for(int i:nums)
            ++map[i];
                
        for(auto& [f,s]:map){
            if(f*2==k){
                cnt+=s/2;
                s=0;
            }
            else if(s>0 && map.count(k-f) && map[k-f]>0){
                cnt+=min(s, map[k-f]);
                map[k-f]=0;
                s=0;
            }
        }
        return cnt;
        
        
        /* M3 : Mapping and one pass | TC:O(n) | SC:O(n)
        int cnt{};
        unordered_map<int,int> map{};
        
        for(int& i:nums)
            if(map[k-i]>0) ++cnt, --map[k-i];
            else ++map[i];
        
        return cnt;
        */
    }
};