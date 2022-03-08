class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int zeros=count(nums.begin(),nums.end(),0);
        vector<int> ans(nums.size(),0);
        
       if(zeros==2)
           return ans;
        
        if(zeros==1){
            auto idx=find(nums.begin(),nums.end(),0)-nums.begin();
            
            int prod=accumulate(nums.begin(),nums.begin()+idx,1,multiplies<int>());
            ans[idx]=accumulate(nums.begin()+idx+1,nums.end(),prod,multiplies<int>());
            
            return ans;
        }
        
        int temp=1;
        ans[0]=1;
        
        for(int i=1;i<nums.size();++i){
            ans[i]=ans[i-1]*nums[i-1];
        }
        
        for(int i=nums.size()-2;i>=0;--i){
             temp*=nums[i+1];
            ans[i]*=temp;
        }
        return ans;
    }
};