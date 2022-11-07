class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        int sum{};
        
        for(int i=0;i<nums.size();++i)
            ++map[nums[i]];
        
        for(auto x:map){
            int n=x.second-1;
            sum+=n*(n+1)/2;   
        }
        
        return sum;
        
    }
};
