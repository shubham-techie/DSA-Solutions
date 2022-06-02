class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int, int>> v(n);
        
        for(int i=0;i<n;++i)
            v[i]=make_pair(nums[i],i);
        
        sort(begin(v),end(v));
        
        return v[n-1].second;
    }
};