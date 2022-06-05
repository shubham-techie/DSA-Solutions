class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        
        int cnt{1}, mn{nums[0]}, n=nums.size();
        
        for(int& i:nums){
            if(i-mn<=k) 
                continue;
            ++cnt; mn=i;
        }
        return cnt;
    }
};