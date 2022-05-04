class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        /*
        sort(begin(nums), end(nums));
        
        int cnt{}, l{}, r=nums.size()-1;
        
        while(l<r)
            if(nums[l]+nums[r]==k)     ++cnt, ++l, --r;
            else if(nums[l]+nums[r]<k) ++l;
            else                       --r;
        
        return cnt;
        */
        
        
        unordered_map<int,int> map{};
        int n=nums.size(), cnt{};
        
        for(int i=0;i<n;++i)
            ++map[nums[i]];
        
        for(auto& m:map){
            if(m.first*2==k){
                cnt+=m.second/2;
                m.second=0;
            }
            else if(m.second>0 && map.count(k-m.first)){
                cnt+=min(m.second, map[k-m.first]);
                
                map[k-m.first]=0;
                m.second=0;
            }
        }
        return cnt;
    }
};