class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        /*
        int n=nums.size();
        int mn=nums[0];
        
        for(int k=1;k<n-1;++k){
            
            for(int j=k+1;j<n;++j){
                
                if(nums[j]<nums[k] && nums[j]>mn)
                    return true;
            }
            mn=min(mn, nums[k]);
        }
        
        return false;
        */
        
     
        int n=nums.size(), s2{INT_MIN};
        vector<int> s3{};
        
        for(auto s1=nums.rbegin();s1!=nums.rend();++s1){
            if(*s1<s2) return true;
            
            while(!s3.empty() && s3.back()<*s1){
                s2=s3.back();
                s3.pop_back();
            }
            s3.push_back(*s1);
        }
        
        return false;
    }
};