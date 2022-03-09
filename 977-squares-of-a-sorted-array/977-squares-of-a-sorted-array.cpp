class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& it:nums)
            it=it*it;
        
        sort(begin(nums),end(nums));
        return nums;
    }
};