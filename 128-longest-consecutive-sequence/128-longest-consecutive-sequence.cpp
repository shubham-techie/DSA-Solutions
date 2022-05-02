class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        sort(nums.begin(),nums.end());
        
        int mx{1}, tmp_max{1};
        
        for(int i=1;i<nums.size();++i){
            if(nums[i]-1 ==nums[i-1]){
                ++tmp_max;
                mx=max(mx, tmp_max);
                
            }
            else if(nums[i]!=nums[i-1])
                tmp_max=1;
            
        }
    
        return mx;
    }
};