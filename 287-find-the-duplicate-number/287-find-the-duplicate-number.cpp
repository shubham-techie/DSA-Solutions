class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        /* Method 2 : Swapping numbers until all elements-1 are in its place equal to indices and then only last index will be left which have repeating element.
        
       for(int i=0;i<n;)
           if(nums[i]!=nums[nums[i]-1])
               swap(nums[i],nums[nums[i]-1]);
            else
                ++i;
        
        return nums[n-1];
        */
        
        /* Method 2: frequency count 
        for(int i=0;i<n;++i){
            nums[nums[i]%n]+=n;
            if(nums[nums[i]%n]>2*n)
                return nums[i]%n;
        }
        return 0;
        */
        
        for(int i=0;i<n;++i){
            if(nums[abs(nums[i])]<0)
                return abs(nums[i]);
            nums[abs(nums[i])]*=-1;
        }
        
        return 0;
    }
};