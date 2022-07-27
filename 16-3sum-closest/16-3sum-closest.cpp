class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
     
        sort(begin(nums), end(nums));
        int diff=INT_MAX, sum=0;
        
        for(int i=0;i<nums.size();++i){
            int l=i+1, r=nums.size()-1;
            
            while(l<r){
                int sm=nums[l]+nums[r]+nums[i];
                
                if(abs(sm-t)<diff){
                    diff=abs(sm-t);
                    sum=sm;
                }
                
                if(sm>t)
                    --r;
                else
                    ++l;
            }
        }
        return sum;
    }
};