class Solution {
public:
    int trap(vector<int>& height) {
        
        
        int n=height.size();
        int sum=0;
        
        vector<int> left(n);
        vector<int> right(n);
        
        left[0]=height[0];
        right[n-1]=height[n-1];
        
        int i=1,j=n-2;
        while(i<n){
            left[i]=max(left[i-1],height[i]);
            right[j]=max(right[j+1],height[j]);  
            ++i;--j;
        }
        
        
        for(i=0;i<n;++i)
            sum+=min(left[i],right[i])-height[i];
        
        return sum;
    }
};