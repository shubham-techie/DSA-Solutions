class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l{}, h=nums.size()-1;
        
        while(l!=h){
           int m=(l+h)/2;
            
            if(nums[m]>nums[h]) //this is abnormal because usually rightmost element is greater in sorted array
                l=m+1;
            else if(nums[m]<=nums[h])
                h=m;
        }
        return nums[l];
    }
};