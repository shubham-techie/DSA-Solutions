class Solution {
public:
    string removeDigit(string nums, char digit) {
        
        int n=nums.length(), idx{};
        
        for(int i=0;i<n;++i){
            if(nums[i]==digit){
                idx=i;
                
                if(i+1<n && nums[i+1]>digit)
                    break;
            }
        }
        
        nums.erase(nums.begin()+idx);
        return nums;
    }
};
