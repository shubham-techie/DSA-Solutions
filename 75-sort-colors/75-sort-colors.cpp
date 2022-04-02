class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cntArray[3]{};
        
        for(int& i:nums)
            ++cntArray[i];
        
        int k{};
        for(int i=0;i<nums.size();++i){
            while(!(cntArray[k]))
                ++k;
            
            if(cntArray[k]){
                nums[i]=k;
                --cntArray[k];
            }
            
        }
    }
};