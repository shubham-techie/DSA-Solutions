class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        /*
       for(int i=0;i<n;)
           if(nums[i]!=nums[nums[i]-1])
               swap(nums[i],nums[nums[i]-1]);
            else
                ++i;
        
        return nums[n-1];
        */
        
        for(int i=0;i<n;++i){
            nums[nums[i]%n]+=n;
            if(nums[nums[i]%n]>2*n)
                return nums[i]%n;
        }
        return -1;
    }
};