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
        
        
        /*  Since all element are in [1,n]. so decre it by -1 .... to be it in range of indices i.e in [0,n-1]. Now, for each 'x'th element (think of it as indices), incre num[x] th element by n......so that each 'x' which are repeated will be greater than 2*n. (Do mod n wherever necessary).
        
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
        
        
        /* In this method, we move each 'x' element to nums[x-1] index. And if any 'x' are repeated, then it would occupy any random place.
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
        */
        
        
        // 
        vector<int> v{};
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            if(nums[abs(nums[i])-1]<0)
                v.emplace_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return v;
    }
};