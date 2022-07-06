class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int mx_diff{}, mn{INT_MAX};
        
        for(int& i:nums){
            mn=min(mn, i);
            mx_diff=max(mx_diff,i-mn);
        }
        return mx_diff==0? -1:mx_diff;
    }
};