class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> v{};
        
        while(n>1){
            int k=-1;
            for(int i=0;i<n/2;++i)
                nums[++k]= i&1? max(nums[2*i], nums[2*i+1]) : min(nums[2*i], nums[2*i+1]);
            
            n=k+1;
        }
        
        return nums[0];
    }
};