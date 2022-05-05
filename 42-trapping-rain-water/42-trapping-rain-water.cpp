class Solution {
public:
    int trap(vector<int>& height) {
        
        /* M1 : Maintaining leftmax and rightmax array till that point 
        // TC : O(3n) | SC : O(2n)
        int n=height.size();
        vector<int> maxrhs(n), maxlhs(n);
        
        maxrhs[n-1]=height[n-1];
        maxlhs[0]=height[0];
        
        for(int i=1;i<n;++i){
            maxlhs[i]=max(maxlhs[i-1],height[i]);
            maxrhs[n-1-i]=max(maxrhs[n-i],height[n-1-i]);
        }
       
        int sum{};
        for(int i=0;i<n;++i)
            sum+=min(maxlhs[i],maxrhs[i]) - height[i];
        
        return sum;
        */
        
        
        // M2 : Space optimization of above approach
        int leftmax{}, rightmax{} , l{}, r=height.size()-1, cnt{};
        
        while(l<=r){
            if(height[l]<=height[r]){      // or leftmax < rightmax
                leftmax= max(leftmax, height[l]);
                cnt+= leftmax-height[l];
                ++l;
            }
            else{
                rightmax=max(rightmax, height[r]);
                cnt+=rightmax-height[r];
                --r;
            }
        }
        
        return cnt;
    }
};