class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int si{-1}, gi{};
        
        for(int i=0;i<n-1;++i)
            if(nums[i]>nums[i+1]){
                si=i;
                break;
            }
        
        if(si==-1) return 0;
        
        for(int i=n-1;i>0;--i)
            if(nums[i]<nums[i-1]){
                gi=i;
                break;
            }
        
        cout<<gi<<" "<<si;
        int mn{nums[si]}, mx{nums[si]};
        
        for(int i=si+1;i<=gi;++i){
            if(nums[i]<mn)
                mn=nums[i];
            if(nums[i]>mx)
                mx=nums[i];
        }
        
        for(int i=0;i<si;++i)
            if(nums[i]>mn){
                si=i;
                break;
            }
        
        for(int i=n-1;i>gi;--i)
            if(nums[i]<mx){
                gi=i;
                break;
            }
        
        return gi-si+1;
    }
};