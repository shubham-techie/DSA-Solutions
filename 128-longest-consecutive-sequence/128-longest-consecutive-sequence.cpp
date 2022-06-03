class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set{};
        int mx{};
        
        for(int& i:nums)
            set.insert(i);
        
        for(auto j:set){
            if(set.find(j-1)==set.end()){
                int i=j;
                int k=1;
                while(set.find(++i)!=set.end())
                    ++k;
                
                mx=max(mx,k);
            }
        }
        
        return mx;
    }
};