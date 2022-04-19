class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> v{nums};
        
        while(1){
            int n=nums.size(), k{n-2},l{n-1};
            
            for(;k>=0;--k)
                if(nums[k]<nums[k+1])
                    break;
            
            if(k<0)
                reverse(begin(nums),end(nums));
            else{
                for(;l>k;--l)
                    if(nums[l]>nums[k])
                        break;
                
                swap(nums[k],nums[l]);
                reverse(nums.begin()+k+1,end(nums));
            }
            
            if(nums!=v[0])
                v.emplace_back(nums);
            else
                break;
        }
        
        return v;
    }
};