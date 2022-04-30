[https://leetcode.com/problems/two-sum/]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        /* Method 1: Brute force | TC : O(n*n), SC:O(1)
        int n=nums.size();
        vector<int>::iterator it;
        
        for(int i=0;i<n-1;++i)            
            if((it=find(nums.begin()+i+1,nums.end(), t-nums[i]))!=nums.end())
                return {i, int(it-nums.begin())};
        
        return {};
        */
        
        
        // Method 2: Mapping and sorting | TC: O(2n+ nlogn), SC:O(n)
        int n=nums.size(), l{}, r{n-1};
        vector<pair<int,int>> v(n);
        
        // mapping indices
        for(int i=0;i<n;++i)
            v[i]={nums[i],i};
        
        sort(v.begin(),v.end());
        
        while(l<r){
            int a{v[l].first}, b{t-v[r].first};
            
            if(a==b) return {v[l].second, v[r].second}; 
            if(a<b)  ++l;
            else     --r;
        }
        return {};
        
        
        /* Method 3: Mapping | TC:O(n), SC:O(n)
        int n=nums.size();
        unordered_map<int,int> map;
        
        for(int i=0;i<n;++i){
            int a{nums[i]}, b{t-nums[i]};
            
            if(map.find(b)!=map.end())
                return {i, map[b]};
            
            map[a]=i;
        }
        
        return {};
        */
    }
};
