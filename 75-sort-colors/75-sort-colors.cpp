class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* Method 1: Count and build array
       
        int cntArray[3]{},k{};
        
        for(int& i:nums)
            ++cntArray[i];
        
        for(int i=0;i<nums.size();++i){
            while(!(cntArray[k]))
                ++k;
            
            if(cntArray[k]){
                nums[i]=k;
                --cntArray[k];
            } 
        }
        */
        
        
        // Method 2: Variation of Dutch National Flag Problem -- using three pointers
        
        int low{0},mid{0},high=nums.size()-1;
        
        while(mid<=high)
            if(nums[mid]==0) 
                swap(nums[low++],nums[mid++]);
            else if(nums[mid]==2) 
                swap(nums[mid],nums[high--]);
            else mid++;
        
    
    }
};