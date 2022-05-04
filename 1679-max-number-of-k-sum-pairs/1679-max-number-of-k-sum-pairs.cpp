class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        
        int cnt{}, l{}, r=nums.size()-1;
        
        while(l<r){
            if(nums[l]+nums[r]==k){
                ++cnt;
                ++l;
                --r;
            }
            else if(nums[l]+nums[r]<k)
                ++l;
            else
                --r;
        }
        
        return cnt;
    }
};