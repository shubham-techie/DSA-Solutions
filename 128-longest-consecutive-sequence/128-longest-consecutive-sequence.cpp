class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set{};
        int mx{};
        
        for(int& i:nums)
            set.insert(i);
        
        for(auto j:set)
            if(!set.count(j-1)){
                int k=1;
                while(set.count(j+k))
                    ++k;
                
                mx=max(mx,k);
            }
        
        return mx;
    }
};