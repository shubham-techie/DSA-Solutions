class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        /* sort(begin(nums),end(nums));
        
        vector<int> v{};
        int n=nums.size();
        
        for(int i=1;i<n;++i){
            bool flag{};
            
            while(i<n && nums[i]==nums[i-1]){
                
                if(!flag){
                    v.emplace_back(nums[i]);
                    flag=true;
                }
                ++i;
            }
        }
        return v;
        */
        
        /* 
        vector<int> v{};
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            nums[i]-=1;
            int idx{nums[i]%n};
            
            nums[idx]+=n;
        }
        
        for(int i=0;i<n;++i)
            if(nums[i]>=2*n)
                v.emplace_back(i+1);
        
        return v;
        */
        
        int n=nums.size();
        vector<int> v{};
        
        for(int i=0;i<n;){
            if(nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else
                ++i;
        }
        
        for(int i=0;i<n;++i)
            if(nums[i]!=i+1)
                v.emplace_back(nums[i]);
        
        return v;
    }
};