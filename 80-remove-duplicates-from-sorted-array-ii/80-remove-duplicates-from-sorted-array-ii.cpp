class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1, n=nums.size(), cnt=1, cur=nums[0];
        
        for(int i=1;i<n;++i){
            if(nums[i]==cur){
                ++cnt;
            }
            else{
                cnt=1;
                cur=nums[i];
            }
            
            if(cnt<=2){
                nums[k++]=nums[i];
            }
        }
        
        return k;
    }
};