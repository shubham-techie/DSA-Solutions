class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n, INT_MAX);
        pre[0]=0;
        
        for(int i=0;i<n;++i)
            for(int j=i;j<=i+nums[i] && j<n;++j)
                pre[j]= min(pre[j], pre[i]+1);
        
        return pre[n-1];
    }
};