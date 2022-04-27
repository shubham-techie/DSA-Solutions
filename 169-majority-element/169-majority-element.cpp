class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele{nums[0]}, cnt{1};
        
        for(int i=1;i<nums.size();++i){
            if(!cnt)
                ele=nums[i];
            
            if(nums[i]==ele)
                ++cnt;
            else{
                cnt-=1;
            }
            
        }
        
        return ele;
    }
};