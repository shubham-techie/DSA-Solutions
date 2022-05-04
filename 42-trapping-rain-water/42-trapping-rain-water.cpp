class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        vector<int> maxrhs(n), maxlhs(n);
        
        maxrhs[n-1]=height[n-1];
        for(int i=n-2;i>=0;--i)
            maxrhs[i]=max(maxrhs[i+1], height[i]);
        
        maxlhs[0]=height[0];
        for(int i=1;i<n;++i)
            maxlhs[i]=max(maxlhs[i-1],height[i]);
        
        int sum{};
        for(int i=0;i<n;++i)
            sum+=min(maxlhs[i],maxrhs[i]) - height[i];
        
        return sum;
    }
};