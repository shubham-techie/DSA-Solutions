class Solution {
public:
    int bSearch(vector<int>& nums, int t, bool leftbias){
        
        int idx{-1}, l{}, h=nums.size()-1;
        
        while(l<=h){
            int m=(l+h)/2;
            
            if(nums[m]==t){
                idx=m;  //store the index
                if(leftbias) //for finding first position
                    h=m-1;
                else
                    l=m+1;
            }
            else if(nums[m]<t)
                l=m+1;
            else
                h=m-1;
        }
        return idx;
    }
    
    vector<int> searchRange(vector<int>& nums, int t) {
        
        int leftPos=bSearch(nums, t, true);
        int rightPos=bSearch(nums, t, false);
        
        return {leftPos, rightPos};
    }
};