class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int> maxrhs(n), maxlhs(n);
        
        maxrhs[n-1]=height[n-1];
        maxlhs[0]=height[0];
        
        int i{1};
        while(i<n){
            maxlhs[i]=max(maxlhs[i-1],height[i]);
            maxrhs[n-1-i]=max(maxrhs[n-i],height[n-1-i]);
            ++i;
        }
       
        int sum{};
        for(int i=0;i<n;++i)
            sum+=min(maxlhs[i],maxrhs[i]) - height[i];
        
        return sum;
    }
};