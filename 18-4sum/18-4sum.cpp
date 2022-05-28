class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        if(n<4) return {};
        
        vector<vector<int>> res{};
        
        sort(begin(nums), end(nums));
        
        for(int i=0;i<n-3;++i){
            
            for(int j=i+1; j<n-2;++j){
                
                long long new_tar=target-nums[i]-nums[j];
                int l=j+1, h=n-1;
                
                while(l<h){
                    if(nums[l]==new_tar-nums[h]){
                        res.push_back({nums[i], nums[j], nums[l], nums[h]});
                        
                        while(l<h && nums[l]==nums[l+1]) ++l;
                        while(h>l && nums[h]==nums[h-1]) --h;
                        
                        ++l;
                        --h;
                    }
                    
                    else if(nums[l]+nums[h]>new_tar)
                        --h;
                    else
                        ++l;
                }
                
                while(j<n-1 && nums[j]==nums[j+1]) ++j;
            }
            
            while(i<n-1 && nums[i]==nums[i+1]) ++i;
        }
        
        return res;
    }
};